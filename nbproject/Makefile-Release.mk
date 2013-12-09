#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/AnimalQeoEventBalanceNewWeight.o \
	${OBJECTDIR}/AnimallApi.o \
	${OBJECTDIR}/AnimallDeviceBridge.o \
	${OBJECTDIR}/AnimallDeviceGamelle.o \
	${OBJECTDIR}/AnimallQeoEvent.o \
	${OBJECTDIR}/AnimallQeoEventGamelleForceService.o \
	${OBJECTDIR}/AnimallQeoEventGamelleNewWeight.o \
	${OBJECTDIR}/QeoEventReader.o \
	${OBJECTDIR}/QeoEventWriter.o \
	${OBJECTDIR}/ToolCmdBalance.o \
	${OBJECTDIR}/ToolCmdBridge.o \
	${OBJECTDIR}/ToolCmdGamelle.o \
	${OBJECTDIR}/ToolCmdLogger.o \
	${OBJECTDIR}/ToolCommand.o \
	${OBJECTDIR}/feeder.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/scale.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/animall

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/animall: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/animall ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/AnimalQeoEventBalanceNewWeight.o: AnimalQeoEventBalanceNewWeight.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AnimalQeoEventBalanceNewWeight.o AnimalQeoEventBalanceNewWeight.cpp

${OBJECTDIR}/AnimallApi.o: AnimallApi.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AnimallApi.o AnimallApi.cpp

${OBJECTDIR}/AnimallDeviceBridge.o: AnimallDeviceBridge.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AnimallDeviceBridge.o AnimallDeviceBridge.cpp

${OBJECTDIR}/AnimallDeviceGamelle.o: AnimallDeviceGamelle.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AnimallDeviceGamelle.o AnimallDeviceGamelle.cpp

${OBJECTDIR}/AnimallQeoEvent.o: AnimallQeoEvent.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AnimallQeoEvent.o AnimallQeoEvent.c

${OBJECTDIR}/AnimallQeoEventGamelleForceService.o: AnimallQeoEventGamelleForceService.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AnimallQeoEventGamelleForceService.o AnimallQeoEventGamelleForceService.cpp

${OBJECTDIR}/AnimallQeoEventGamelleNewWeight.o: AnimallQeoEventGamelleNewWeight.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AnimallQeoEventGamelleNewWeight.o AnimallQeoEventGamelleNewWeight.cpp

${OBJECTDIR}/QeoEventReader.o: QeoEventReader.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/QeoEventReader.o QeoEventReader.cpp

${OBJECTDIR}/QeoEventWriter.o: QeoEventWriter.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/QeoEventWriter.o QeoEventWriter.cpp

${OBJECTDIR}/ToolCmdBalance.o: ToolCmdBalance.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ToolCmdBalance.o ToolCmdBalance.cpp

${OBJECTDIR}/ToolCmdBridge.o: ToolCmdBridge.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ToolCmdBridge.o ToolCmdBridge.cpp

${OBJECTDIR}/ToolCmdGamelle.o: ToolCmdGamelle.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ToolCmdGamelle.o ToolCmdGamelle.cpp

${OBJECTDIR}/ToolCmdLogger.o: ToolCmdLogger.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ToolCmdLogger.o ToolCmdLogger.cpp

${OBJECTDIR}/ToolCommand.o: ToolCommand.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ToolCommand.o ToolCommand.cpp

${OBJECTDIR}/feeder.o: feeder.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/feeder.o feeder.c

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/scale.o: scale.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/scale.o scale.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/animall

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
