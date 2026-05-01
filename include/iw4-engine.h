/* iw4-engine.h — adresses et structures clés du moteur IW4 (iw4x.exe).
 *
 * Compilable en 32-bit (i386) :
 *     gcc -m32 -c iw4-engine.h
 *
 * Pas d'ASLR sur iw4x.exe -> les adresses sont stables au runtime.
 * Pour usage en lab single-player / dedicated server perso uniquement
 * (cf. periimetre dans findings/render-pipeline.md).
 *
 * Source : refs/iw4x-client/src/Game/{Structs.hpp,Functions.cpp}.
 */

#ifndef IW4_ENGINE_H
#define IW4_ENGINE_H

#include <stdint.h>

/* ============= Adresses runtime (iw4x.exe, ImageBase 0x00400000) ============= */

#define IW4_LEVEL_LOCALS    0x1A831A8u  /* level_locals_t* level */
#define IW4_LEVEL_BGS       0x19BD680u  /* bgs_t* level_bgs (shared bg state) */
#define IW4_SPAWN_VARS      0x1A83DE8u  /* SpawnVar* spawnVars */

/* Adresses de fonctions (subset, cf findings/iw4x-symbols.json pour la liste complete) */
#define IW4_FN_Sys_Error              0x0043d570u
#define IW4_FN_Cmd_AddCommand         0x00470090u
#define IW4_FN_Cmd_AddServerCommand   0x004dce00u
#define IW4_FN_Cmd_ExecuteSingleCommand 0x00609540u
#define IW4_FN_Cbuf_AddText           0x00404b20u
#define IW4_FN_Com_Frame              0x0041fde0u
#define IW4_FN_Com_DPrintf            0x00402500u
#define IW4_FN_FS_Startup             0x004823a0u
#define IW4_FN_FS_FOpenFileWrite      0x0043fd90u
#define IW4_FN_BG_GetWeaponDef        0x00440eb0u
#define IW4_FN_FireWeapon             0x004a4d50u
#define IW4_FN_R_Init                 0x004f84c0u
#define IW4_FN_R_RegisterDvars        0x005196c0u
#define IW4_FN_SV_UserinfoChanged     0x00401950u
#define IW4_FN_CL_Disconnect          0x00403547u
#define IW4_FN_CL_InitCGame           0x004236a5u
#define IW4_FN_ScriptCompile          0x00426c8au

/* ============= Structure : playerState_s (taille 0x311C) ============= */

/* Sous-types simples utilises */
typedef enum {
    PMT_NORMAL = 0, PMT_NORMAL_LINKED, PMT_NOCLIP, PMT_UFO,
    PMT_MPVIEWER, PMT_SPECTATOR, PMT_INTERMISSION, PMT_DEAD, PMT_DEAD_LINKED
} pmtype_t;

typedef enum {
    PMF_PRONE = 1, PMF_DUCKED = 2, PMF_MANTLE = 4, PMF_LADDER = 8,
    PMF_SIGHT_AIMING = 0x10, PMF_BACKWARDS_RUN = 0x20, PMF_WALKING = 0x40,
    PMF_TIME_HARDLANDING = 0x80
} pmflags_t;

/* eFlags : EF_NONSOLID, EF_CROUCHING, EF_PRONE, EF_DEAD, EF_TELEPORT_BIT, etc. */

/* Sous-structures dont la taille n'est pas dans static_assert : on declare
 * uniquement les CHAMPS UTILES en debut de struct. Le reste est du padding. */

#pragma pack(push, 4)

/* Tronque a 0x1B8 (offset valide du parser), reste = padding */
typedef struct {
    int32_t   commandTime;       /* 0x000 */
    int32_t   pm_type;           /* 0x004 */
    int32_t   pm_time;           /* 0x008 */
    int32_t   pm_flags;          /* 0x00C */
    int32_t   otherFlags;        /* 0x010 */
    int32_t   linkFlags;         /* 0x014 */
    int32_t   bobCycle;          /* 0x018 */
    float     origin[3];         /* 0x01C */
    float     velocity[3];       /* 0x028 */
    int32_t   grenadeTimeLeft;   /* 0x034 */
    int32_t   throwbackGrenadeOwner;       /* 0x038 */
    int32_t   throwbackGrenadeTimeLeft;    /* 0x03C */
    uint32_t  throwbackWeaponIndex;        /* 0x040 */
    int32_t   remoteEyesEnt;     /* 0x044 */
    int32_t   remoteEyesTagname; /* 0x048 */
    int32_t   remoteControlEnt;  /* 0x04C */
    int32_t   foliageSoundTime;  /* 0x050 */
    int32_t   gravity;           /* 0x054 */
    float     leanf;             /* 0x058 */
    int32_t   speed;             /* 0x05C */
    float     delta_angles[3];   /* 0x060 */
    int32_t   groundEntityNum;   /* 0x06C */
    float     vLadderVec[3];     /* 0x070 */
    int32_t   jumpTime;          /* 0x07C */
    float     jumpOriginZ;       /* 0x080 */
    int32_t   legsTimer;         /* 0x084 */
    int32_t   legsAnim;          /* 0x088 */
    int32_t   torsoTimer;        /* 0x08C */
    int32_t   torsoAnim;         /* 0x090 */
    int32_t   legsAnimDuration;  /* 0x094 */
    int32_t   torsoAnimDuration; /* 0x098 */
    int32_t   damageTimer;       /* 0x09C */
    int32_t   damageDuration;    /* 0x0A0 */
    int32_t   flinchYawAnim;     /* 0x0A4 */
    int32_t   corpseIndex;       /* 0x0A8 */
    int32_t   movementDir;       /* 0x0AC */
    int32_t   eFlags;            /* 0x0B0 */
    int32_t   eventSequence;     /* 0x0B4 */
    int32_t   events[4];         /* 0x0B8 */
    uint32_t  eventParms[4];     /* 0x0C8 */
    int32_t   oldEventSequence;  /* 0x0D8 */
    int32_t   unpredictableEventSequence;       /* 0x0DC */
    int32_t   unpredictableEventSequenceOld;    /* 0x0E0 */
    int32_t   unpredictableEvents[4];           /* 0x0E4 */
    uint32_t  unpredictableEventParms[4];       /* 0x0F4 */
    int32_t   clientNum;         /* 0x104 */
    int32_t   viewmodelIndex;    /* 0x108 */
    float     viewangles[3];     /* 0x10C */
    int32_t   viewHeightTarget;  /* 0x118 */
    float     viewHeightCurrent; /* 0x11C */
    int32_t   viewHeightLerpTime;   /* 0x120 */
    int32_t   viewHeightLerpTarget; /* 0x124 */
    int32_t   viewHeightLerpDown;   /* 0x128 */
    float     viewAngleClampBase[2];  /* 0x12C */
    float     viewAngleClampRange[2]; /* 0x134 */
    int32_t   damageEvent;       /* 0x13C */
    int32_t   damageYaw;         /* 0x140 */
    int32_t   damagePitch;       /* 0x144 */
    int32_t   damageCount;       /* 0x148 */
    int32_t   damageFlags;       /* 0x14C */
    int32_t   stats[4];          /* 0x150 */
    float     proneDirection;    /* 0x160 */
    float     proneDirectionPitch;  /* 0x164 */
    float     proneTorsoPitch;   /* 0x168 */
    /* ... 0x16C - 0x311C : weapState, weapEquipped, hud, etc. (non documente ici) */
    uint8_t   _padding[0x311C - 0x16C];
} playerState_s;

/* ============= Structure : usercmd_s (taille 0x28) ============= */

typedef struct {
    int32_t   serverTime;        /* 0x00 */
    int32_t   buttons;           /* 0x04 */
    int32_t   angles[3];         /* 0x08 */  /* int (delta-encode) pas float ! */
    uint32_t  weapon;            /* 0x14 */
    uint32_t  offHand;           /* 0x18 */
    int8_t    forwardmove;       /* 0x1C */
    int8_t    rightmove;         /* 0x1D */
    int8_t    upmove;            /* 0x1E */
    int8_t    pitchmove;         /* 0x1F */
    /* + padding pour aligner a 0x28 */
    uint8_t   _pad[8];
} usercmd_s;

/* ============= Structure : level_locals_t (debut, le reste = padding) =====
 * level @ 0x1A831A8 (taille 0x2F78)
 */

typedef struct gentity_s gentity_s;  /* fwd */
typedef struct gclient_s gclient_s;  /* fwd */

typedef struct {
    gclient_s*  clients;        /* 0x00 -- table de clients (taille MAX_CLIENTS=18) */
    gentity_s*  gentities;      /* 0x04 -- table d'entites (taille MAX_GENTITIES=2048) */
    int32_t     num_entities;   /* 0x08 */
    gentity_s*  firstFreeEnt;   /* 0x0C */
    gentity_s*  lastFreeEnt;    /* 0x10 */
    void*       turrets;        /* 0x14 */
    int32_t     logFile;        /* 0x18 */
    int32_t     initializing;   /* 0x1C */
    int32_t     clientIsSpawning;     /* 0x20 */
    /* objective_t objectives[32] -- taille 28 chacun -> 32*28 = 896 = 0x380 */
    uint8_t     objectives[32 * 28];  /* 0x24 -> 0x3A4 */
    int32_t     maxclients;     /* 0x3A4 */
    int32_t     framenum;       /* 0x3A8 */
    int32_t     time;           /* 0x3AC -- VERIFIE par QuickPatch.cpp */
    int32_t     previousTime;   /* 0x3B0 */
    int32_t     frametime;      /* 0x3B4 */
    int32_t     startTime;      /* 0x3B8 */
    int32_t     teamScores[4];  /* 0x3BC */
    /* ... reste = padding */
    uint8_t     _padding[0x2F78 - 0x3CC];
} level_locals_t;

/* gentity_s (taille 0x274) -- declaration minimale */
struct gentity_s {
    uint8_t    s[0x100];        /* entityState_s s (taille confirmee 0x100) */
    uint8_t    r[0x40];         /* entityShared_t r (estimation -- a verifier) */
    gclient_s* client;          /* 0x140 environ -- pointeur vers gclient_s si joueur */
    /* ... reste */
    uint8_t    _padding[0x274 - 0x144];
};

/* gclient_s (taille 0x366C) -- premier champ = playerState_s */
struct gclient_s {
    playerState_s ps;             /* 0x0000 -- TYPIQUEMENT le premier champ */
    /* ... reste */
    uint8_t       _padding[0x366C - sizeof(playerState_s)];
};

#pragma pack(pop)

#endif /* IW4_ENGINE_H */
