/**
 * @file feeder.c
 *
 * @brief Feeder controller
 *
 * @author Benjamin Balga
 */


#include "feeder.h"


/* **************************************************************** *
 *  Local defines
 * **************************************************************** */

#define MOTOR_PIN       0   /*! Pin # of feeder motor control (active high) */
#define SWITCH_PIN      7   /*! Pin # of feeder end-of-cycle switch */
#define START_MOTOR_PIN 2   /*! Pin # of external start input (active low) */
#define STATUS_LED_PIN  3   /*! Pin # of status LED */


/* **************************************************************** *
 *  Private variables
 * **************************************************************** */

static int uiCycleCount = 0;
static bool bIsRunning = 0;
static bool bCleanStop = 0;


/* **************************************************************** *
 *  Private functions
 * **************************************************************** */

static void prv_vFeeder_switchISR();
static void prv_vFeeder_startCycleISR();


/* **************************************************************** *
 *  Fonctions
 * **************************************************************** */

bool bFeeder_setup()
{
    // Setup WiringPi
    if (wiringPiSetup() == -1) {
        // Error occured
        return false;
    }

    // Setup I/O
    digitalWrite(MOTOR_PIN, LOW);
    pinMode(MOTOR_PIN, OUTPUT);
    pinMode(SWITCH_PIN, INPUT);
    pullUpDnControl(SWITCH_PIN, PUD_UP);
    pinMode(START_MOTOR_PIN, INPUT);
    pullUpDnControl(START_MOTOR_PIN, PUD_UP);

    // Setup LED to 1Hz
    pinMode(STATUS_LED_PIN, OUTPUT);
    softPwmCreate(STATUS_LED_PIN, 1000, 10000);

    // Setup ISR
    wiringPiISR(SWITCH_PIN, INT_EDGE_RISING, &prv_vFeeder_switchISR);
    wiringPiISR(START_MOTOR_PIN, INT_EDGE_RISING, &prv_vFeeder_startCycleISR);

    return true;
}



/**
 * @brief Feeder end-of-cycle ISR.
 */
static void prv_vFeeder_switchISR()
{
    if (digitalRead(SWITCH_PIN) == 0)   // Work-around for WiringPi ISR bug
        return;

    if (bCleanStop) {
        vFeeder_stop();
        bIsRunning = 0;
        bCleanStop = 0;
        return;
    }

    if (uiCycleCount && --uiCycleCount <= 0) {
        vFeeder_stop();
        bIsRunning = 0;
    }
}

/**
 * @brief Start feeder cycle from hardware (push-button input)
 */
static void prv_vFeeder_startCycleISR()
{
    if (digitalRead(START_MOTOR_PIN) == 0)   // Work-around for WiringPi ISR bug
        return;

    iFeeder_startCycle();
}



void vFeeder_cleanup()
{
    bIsRunning = 0;
    uiCycleCount = 0;
    digitalWrite(MOTOR_PIN, 0);
    pinMode(MOTOR_PIN, INPUT);
    digitalWrite(STATUS_LED_PIN, 0);
    pinMode(STATUS_LED_PIN, INPUT);
}


int iFeeder_startCycle()
{
    bIsRunning = 1;

    softPwmWrite(STATUS_LED_PIN, 8000);
    digitalWrite(MOTOR_PIN, 1);

    return ++uiCycleCount;
}

void vFeeder_stop()
{
    digitalWrite(MOTOR_PIN, 0);
    softPwmWrite(STATUS_LED_PIN, 1000);

    uiCycleCount = 0;
}

void vFeeder_cancel()
{
    if (bIsRunning) {
        bCleanStop = 1;
    }
}

bool bFeeder_isRunning()
{
    return bIsRunning;
}

int bFeeder_remainingCycles()
{
    return uiCycleCount;
}
