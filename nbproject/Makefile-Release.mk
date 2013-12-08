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
	${OBJECTDIR}/AnimallApi.o \
	${OBJECTDIR}/AnimallDeviceBridge.o \
	${OBJECTDIR}/AnimallDeviceGamelle.o \
	${OBJECTDIR}/AnimallQeoEvent.o \
	${OBJECTDIR}/AnimallQeoEventGamelleNewWeight.o \
	${OBJECTDIR}/QeoEventReader.o \
	${OBJECTDIR}/QeoEventWriter.o \
	${OBJECTDIR}/ToolCmdGamelle.o \
	${OBJECTDIR}/ToolCommand.o \
	${OBJECTDIR}/main.o


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

${OBJECTDIR}/ToolCmdGamelle.o: ToolCmdGamelle.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ToolCmdGamelle.o ToolCmdGamelle.cpp

${OBJECTDIR}/ToolCommand.o: ToolCommand.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ToolCommand.o ToolCommand.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

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
