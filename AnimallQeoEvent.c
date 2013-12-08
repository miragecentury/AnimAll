/**************************************************************
 ********          THIS IS A GENERATED FILE         ***********
 **************************************************************/

#include "AnimallQeoEvent.h"

const DDS_TypeSupport_meta qeo_animall_gamelle_NewWeight_type[] = {
    { .tc = CDR_TYPECODE_STRUCT, .name = "qeo.animall.gamelle.NewWeight", .flags = TSMFLAG_DYNAMIC|TSMFLAG_GENID|TSMFLAG_MUTABLE, .nelem = 3, .size = sizeof(qeo_animall_gamelle_NewWeight_t) },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "uuid", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_gamelle_NewWeight_t, uuid), .size = 0 },  
    { .tc = CDR_TYPECODE_FLOAT, .name = "weight", .offset = offsetof(qeo_animall_gamelle_NewWeight_t, weight) },  
    { .tc = CDR_TYPECODE_LONG, .name = "timestamp", .offset = offsetof(qeo_animall_gamelle_NewWeight_t, timestamp) },  
};

const DDS_TypeSupport_meta qeo_animall_gamelle_AnimalAMange_type[] = {
    { .tc = CDR_TYPECODE_STRUCT, .name = "qeo.animall.gamelle.AnimalAMange", .flags = TSMFLAG_DYNAMIC|TSMFLAG_GENID|TSMFLAG_MUTABLE, .nelem = 6, .size = sizeof(qeo_animall_gamelle_AnimalAMange_t) },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "uuidGamelle", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_gamelle_AnimalAMange_t, uuidGamelle), .size = 0 },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "labelGamelle", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_gamelle_AnimalAMange_t, labelGamelle), .size = 0 },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "nomAnimal", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_gamelle_AnimalAMange_t, nomAnimal), .size = 0 },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "labelRace", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_gamelle_AnimalAMange_t, labelRace), .size = 0 },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "evolutionRepasWeek", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_gamelle_AnimalAMange_t, evolutionRepasWeek), .size = 0 },  
    { .tc = CDR_TYPECODE_LONG, .name = "timestamp", .offset = offsetof(qeo_animall_gamelle_AnimalAMange_t, timestamp) },  
};

const DDS_TypeSupport_meta qeo_animall_gamelle_ForceService_type[] = {
    { .tc = CDR_TYPECODE_STRUCT, .name = "qeo.animall.gamelle.ForceService", .flags = TSMFLAG_DYNAMIC|TSMFLAG_GENID|TSMFLAG_MUTABLE, .nelem = 3, .size = sizeof(qeo_animall_gamelle_ForceService_t) },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "uuidGamelle", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_gamelle_ForceService_t, uuidGamelle), .size = 0 },  
    { .tc = CDR_TYPECODE_LONG, .name = "dose", .offset = offsetof(qeo_animall_gamelle_ForceService_t, dose) },  
    { .tc = CDR_TYPECODE_LONG, .name = "timestamp", .offset = offsetof(qeo_animall_gamelle_ForceService_t, timestamp) },  
};

const DDS_TypeSupport_meta qeo_animall_balance_NewWeight_type[] = {
    { .tc = CDR_TYPECODE_STRUCT, .name = "qeo.animall.balance.NewWeight", .flags = TSMFLAG_DYNAMIC|TSMFLAG_GENID|TSMFLAG_MUTABLE, .nelem = 3, .size = sizeof(qeo_animall_balance_NewWeight_t) },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "uuid", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_balance_NewWeight_t, uuid), .size = 0 },  
    { .tc = CDR_TYPECODE_FLOAT, .name = "weight", .offset = offsetof(qeo_animall_balance_NewWeight_t, weight) },  
    { .tc = CDR_TYPECODE_LONG, .name = "timestamp", .offset = offsetof(qeo_animall_balance_NewWeight_t, timestamp) },  
};

const DDS_TypeSupport_meta qeo_animall_porte_AnimalSort_type[] = {
    { .tc = CDR_TYPECODE_STRUCT, .name = "qeo.animall.porte.AnimalSort", .flags = TSMFLAG_DYNAMIC|TSMFLAG_GENID|TSMFLAG_MUTABLE, .nelem = 2, .size = sizeof(qeo_animall_porte_AnimalSort_t) },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "uuid", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_porte_AnimalSort_t, uuid), .size = 0 },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "uuidCollier", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_porte_AnimalSort_t, uuidCollier), .size = 0 },  
};

const DDS_TypeSupport_meta qeo_animall_porte_AnimalSortDetails_type[] = {
    { .tc = CDR_TYPECODE_STRUCT, .name = "qeo.animall.porte.AnimalSortDetails", .flags = TSMFLAG_DYNAMIC|TSMFLAG_GENID|TSMFLAG_MUTABLE, .nelem = 5, .size = sizeof(qeo_animall_porte_AnimalSortDetails_t) },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "uuid", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_porte_AnimalSortDetails_t, uuid), .size = 0 },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "uuidCollier", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_porte_AnimalSortDetails_t, uuidCollier), .size = 0 },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "labelPorte", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_porte_AnimalSortDetails_t, labelPorte), .size = 0 },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "nomAnimal", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_porte_AnimalSortDetails_t, nomAnimal), .size = 0 },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "labelRace", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_porte_AnimalSortDetails_t, labelRace), .size = 0 },  
};

const DDS_TypeSupport_meta qeo_animall_porte_AnimalRentre_type[] = {
    { .tc = CDR_TYPECODE_STRUCT, .name = "qeo.animall.porte.AnimalRentre", .flags = TSMFLAG_DYNAMIC|TSMFLAG_GENID|TSMFLAG_MUTABLE, .nelem = 2, .size = sizeof(qeo_animall_porte_AnimalRentre_t) },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "uuid", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_porte_AnimalRentre_t, uuid), .size = 0 },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "uuidCollier", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_porte_AnimalRentre_t, uuidCollier), .size = 0 },  
};

const DDS_TypeSupport_meta qeo_animall_porte_AnimalRentreDetails_type[] = {
    { .tc = CDR_TYPECODE_STRUCT, .name = "qeo.animall.porte.AnimalRentreDetails", .flags = TSMFLAG_DYNAMIC|TSMFLAG_GENID|TSMFLAG_MUTABLE, .nelem = 5, .size = sizeof(qeo_animall_porte_AnimalRentreDetails_t) },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "uuid", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_porte_AnimalRentreDetails_t, uuid), .size = 0 },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "uuidCollier", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_porte_AnimalRentreDetails_t, uuidCollier), .size = 0 },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "labelPorte", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_porte_AnimalRentreDetails_t, labelPorte), .size = 0 },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "nomAnimal", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_porte_AnimalRentreDetails_t, nomAnimal), .size = 0 },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "labelRace", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_porte_AnimalRentreDetails_t, labelRace), .size = 0 },  
};

const DDS_TypeSupport_meta qeo_animall_tv_AfficherPageWeb_type[] = {
    { .tc = CDR_TYPECODE_STRUCT, .name = "qeo.animall.tv.AfficherPageWeb", .flags = TSMFLAG_DYNAMIC|TSMFLAG_GENID|TSMFLAG_MUTABLE, .nelem = 2, .size = sizeof(qeo_animall_tv_AfficherPageWeb_t) },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "url", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_tv_AfficherPageWeb_t, url), .size = 0 },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "dataPost", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_tv_AfficherPageWeb_t, dataPost), .size = 0 },  
};

const DDS_TypeSupport_meta qeo_animall_nao_Say_type[] = {
    { .tc = CDR_TYPECODE_STRUCT, .name = "qeo.animall.nao.Say", .flags = TSMFLAG_DYNAMIC|TSMFLAG_GENID|TSMFLAG_MUTABLE, .nelem = 1, .size = sizeof(qeo_animall_nao_Say_t) },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "text", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(qeo_animall_nao_Say_t, text), .size = 0 },  
};
