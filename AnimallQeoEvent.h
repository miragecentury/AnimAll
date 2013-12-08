/**************************************************************
 ********          THIS IS A GENERATED FILE         ***********
 **************************************************************/

#ifndef QDM_ANIMALLQEOEVENT_H_
#define QDM_ANIMALLQEOEVENT_H_

#include <qeo/types.h>


/**
 * Change de poid de la gamelle
 */
typedef struct {
    /**
     * uuid de la gamelle.
     */
    char * uuid;
    /**
     * the new poids
     */
    float weight;
    /**
     * timestamp
     */
    int32_t timestamp;
} qeo_animall_gamelle_NewWeight_t;
extern const DDS_TypeSupport_meta qeo_animall_gamelle_NewWeight_type[];

typedef struct {
    /**
     * uuid de la gamelle.
     */
    char * uuidGamelle;
    /**
     * label de la gamellle
     */
    char * labelGamelle;
    /**
     * 
     */
    char * nomAnimal;
    /**
     * 
     */
    char * labelRace;
    /**
     * 
     */
    char * evolutionRepasWeek;
    /**
     * timestamp
     */
    int32_t timestamp;
} qeo_animall_gamelle_AnimalAMange_t;
extern const DDS_TypeSupport_meta qeo_animall_gamelle_AnimalAMange_type[];

typedef struct {
    /**
     * uuid de la gamelle.
     */
    char * uuidGamelle;
    /**
     * nombre de dose
     */
    int32_t dose;
    /**
     * timestamp
     */
    int32_t timestamp;
} qeo_animall_gamelle_ForceService_t;
extern const DDS_TypeSupport_meta qeo_animall_gamelle_ForceService_type[];

/**
 * Change de poid de la gamelle
 */
typedef struct {
    /**
     * uuid de la gamelle.
     */
    char * uuid;
    /**
     * the new poids
     */
    float weight;
    /**
     * timestamp
     */
    int32_t timestamp;
} qeo_animall_balance_NewWeight_t;
extern const DDS_TypeSupport_meta qeo_animall_balance_NewWeight_type[];

typedef struct {
    /**
     * uuid de la porte.
     */
    char * uuid;
    /**
     * uuid du collier.
     */
    char * uuidCollier;
} qeo_animall_porte_AnimalSort_t;
extern const DDS_TypeSupport_meta qeo_animall_porte_AnimalSort_type[];

typedef struct {
    /**
     * uuid de la porte.
     */
    char * uuid;
    /**
     * uuid du collier.
     */
    char * uuidCollier;
    /**
     * 
     */
    char * labelPorte;
    /**
     * 
     */
    char * nomAnimal;
    /**
     * 
     */
    char * labelRace;
} qeo_animall_porte_AnimalSortDetails_t;
extern const DDS_TypeSupport_meta qeo_animall_porte_AnimalSortDetails_type[];

typedef struct {
    /**
     * uuid de la porte.
     */
    char * uuid;
    /**
     * uuid du collier.
     */
    char * uuidCollier;
} qeo_animall_porte_AnimalRentre_t;
extern const DDS_TypeSupport_meta qeo_animall_porte_AnimalRentre_type[];

typedef struct {
    /**
     * uuid de la porte.
     */
    char * uuid;
    /**
     * uuid du collier.
     */
    char * uuidCollier;
    /**
     * 
     */
    char * labelPorte;
    /**
     * 
     */
    char * nomAnimal;
    /**
     * 
     */
    char * labelRace;
} qeo_animall_porte_AnimalRentreDetails_t;
extern const DDS_TypeSupport_meta qeo_animall_porte_AnimalRentreDetails_type[];

typedef struct {
    /**
     * 
     */
    char * url;
    /**
     * 
     */
    char * dataPost;
} qeo_animall_tv_AfficherPageWeb_t;
extern const DDS_TypeSupport_meta qeo_animall_tv_AfficherPageWeb_type[];

typedef struct {
    char * text;
} qeo_animall_nao_Say_t;
extern const DDS_TypeSupport_meta qeo_animall_nao_Say_type[];


#endif /* QDM_ANIMALLQEOEVENT_H_ */

