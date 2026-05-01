# Structures d'entites IW4 — offsets reconstruits

*Genere par `scripts/python/struct_extractor.py` depuis `refs/iw4x-client/src/Game/Structs.hpp`.*

Tailles primitives 32-bit (MSVC i386) : `int=4 float=4 char=1 short=2 ptr=4`. Tailles nested resolues via `static_assert(sizeof(X) == N)` du source.

Status :
- **OK** = tous les champs parses, taille computed = taille confirmee
- **PARTIEL** = stoppe au premier type inconnu (sub-struct non listee dans static_assert)

## `playerState_s`

- Taille confirmee (static_assert) : `0x311c`
- Taille calculee : `incomplete`
- Status : **PARTIEL**

| Offset | Type | Champ | Taille |
|---|---|---|---|
| `0x0000` | `int` | `commandTime` | `4` |
| `0x0004` | `int` | `pm_type` | `4` |
| `0x0008` | `int` | `pm_time` | `4` |
| `0x000c` | `int` | `pm_flags` | `4` |
| `0x0010` | `int` | `otherFlags` | `4` |
| `0x0014` | `int` | `linkFlags` | `4` |
| `0x0018` | `int` | `bobCycle` | `4` |
| `0x001c` | `float[3]` | `origin` | `12` |
| `0x0028` | `float[3]` | `velocity` | `12` |
| `0x0034` | `int` | `grenadeTimeLeft` | `4` |
| `0x0038` | `int` | `throwbackGrenadeOwner` | `4` |
| `0x003c` | `int` | `throwbackGrenadeTimeLeft` | `4` |
| `0x0040` | `unsigned int` | `throwbackWeaponIndex` | `4` |
| `0x0044` | `int` | `remoteEyesEnt` | `4` |
| `0x0048` | `int` | `remoteEyesTagname` | `4` |
| `0x004c` | `int` | `remoteControlEnt` | `4` |
| `0x0050` | `int` | `foliageSoundTime` | `4` |
| `0x0054` | `int` | `gravity` | `4` |
| `0x0058` | `float` | `leanf` | `4` |
| `0x005c` | `int` | `speed` | `4` |
| `0x0060` | `float[3]` | `delta_angles` | `12` |
| `0x006c` | `int` | `groundEntityNum` | `4` |
| `0x0070` | `float[3]` | `vLadderVec` | `12` |
| `0x007c` | `int` | `jumpTime` | `4` |
| `0x0080` | `float` | `jumpOriginZ` | `4` |
| `0x0084` | `int` | `legsTimer` | `4` |
| `0x0088` | `int` | `legsAnim` | `4` |
| `0x008c` | `int` | `torsoTimer` | `4` |
| `0x0090` | `int` | `torsoAnim` | `4` |
| `0x0094` | `int` | `legsAnimDuration` | `4` |
| `0x0098` | `int` | `torsoAnimDuration` | `4` |
| `0x009c` | `int` | `damageTimer` | `4` |
| `0x00a0` | `int` | `damageDuration` | `4` |
| `0x00a4` | `int` | `flinchYawAnim` | `4` |
| `0x00a8` | `int` | `corpseIndex` | `4` |
| `0x00ac` | `int` | `movementDir` | `4` |
| `0x00b0` | `int` | `eFlags` | `4` |
| `0x00b4` | `int` | `eventSequence` | `4` |
| `0x00b8` | `int[4]` | `events` | `16` |
| `0x00c8` | `unsigned int[4]` | `eventParms` | `16` |
| `0x00d8` | `int` | `oldEventSequence` | `4` |
| `0x00dc` | `int` | `unpredictableEventSequence` | `4` |
| `0x00e0` | `int` | `unpredictableEventSequenceOld` | `4` |
| `0x00e4` | `int[4]` | `unpredictableEvents` | `16` |
| `0x00f4` | `unsigned int[4]` | `unpredictableEventParms` | `16` |
| `0x0104` | `int` | `clientNum` | `4` |
| `0x0108` | `int` | `viewmodelIndex` | `4` |
| `0x010c` | `float[3]` | `viewangles` | `12` |
| `0x0118` | `int` | `viewHeightTarget` | `4` |
| `0x011c` | `float` | `viewHeightCurrent` | `4` |
| `0x0120` | `int` | `viewHeightLerpTime` | `4` |
| `0x0124` | `int` | `viewHeightLerpTarget` | `4` |
| `0x0128` | `int` | `viewHeightLerpDown` | `4` |
| `0x012c` | `float[2]` | `viewAngleClampBase` | `8` |
| `0x0134` | `float[2]` | `viewAngleClampRange` | `8` |
| `0x013c` | `int` | `damageEvent` | `4` |
| `0x0140` | `int` | `damageYaw` | `4` |
| `0x0144` | `int` | `damagePitch` | `4` |
| `0x0148` | `int` | `damageCount` | `4` |
| `0x014c` | `int` | `damageFlags` | `4` |
| `0x0150` | `int[4]` | `stats` | `16` |
| `0x0160` | `float` | `proneDirection` | `4` |
| `0x0164` | `float` | `proneDirectionPitch` | `4` |
| `0x0168` | `float` | `proneTorsoPitch` | `4` |
| `0x016c` | `ViewLockTypes` | `viewlocked` | `4` |
| `0x0170` | `int` | `viewlocked_entNum` | `4` |
| `0x0174` | `float[3]` | `linkAngles` | `12` |
| `0x0180` | `float[3]` | `linkWeaponAngles` | `12` |
| `0x018c` | `int` | `linkWeaponEnt` | `4` |
| `0x0190` | `int` | `loopSound` | `4` |
| `0x0194` | `int` | `cursorHint` | `4` |
| `0x0198` | `int` | `cursorHintString` | `4` |
| `0x019c` | `int` | `cursorHintEntIndex` | `4` |
| `0x01a0` | `int` | `cursorHintDualWield` | `4` |
| `0x01a4` | `int` | `iCompassPlayerInfo` | `4` |
| `0x01a8` | `int` | `radarEnabled` | `4` |
| `0x01ac` | `int` | `radarBlocked` | `4` |
| `0x01b0` | `int` | `radarMode` | `4` |
| `0x01b4` | `int` | `locationSelectionInfo` | `4` |
| `0x01b8` | `SprintState` | `sprintState` | `?` ⚠️ |

## `usercmd_s`

- Taille confirmee (static_assert) : `0x28`
- Taille calculee : `0x26`
- Status : **OK**

| Offset | Type | Champ | Taille |
|---|---|---|---|
| `0x0000` | `int` | `serverTime` | `4` |
| `0x0004` | `int` | `buttons` | `4` |
| `0x0008` | `int[3]` | `angles` | `12` |
| `0x0014` | `unsigned __int16` | `weapon` | `2` |
| `0x0016` | `unsigned __int16` | `primaryWeaponForAltMode` | `2` |
| `0x0018` | `unsigned __int16` | `offHandIndex` | `2` |
| `0x001a` | `char` | `forwardmove` | `1` |
| `0x001b` | `char` | `rightmove` | `1` |
| `0x001c` | `float` | `meleeChargeYaw` | `4` |
| `0x0020` | `char` | `meleeChargeDist` | `1` |
| `0x0021` | `char[2]` | `selectedLoc` | `2` |
| `0x0023` | `char` | `selectedLocAngle` | `1` |
| `0x0024` | `char[2]` | `remoteControlAngles` | `2` |

## `clientState_s`

- Taille confirmee (static_assert) : `0x7c`
- Taille calculee : `0x7c`
- Status : **OK**

| Offset | Type | Champ | Taille |
|---|---|---|---|
| `0x0000` | `int` | `clientIndex` | `4` |
| `0x0004` | `team_t` | `team` | `4` |
| `0x0008` | `int` | `modelindex` | `4` |
| `0x000c` | `int` | `dualWielding` | `4` |
| `0x0010` | `int` | `riotShieldNext` | `4` |
| `0x0014` | `int[6]` | `attachModelIndex` | `24` |
| `0x002c` | `int[6]` | `attachTagIndex` | `24` |
| `0x0044` | `char[16]` | `name` | `16` |
| `0x0054` | `float` | `maxSprintTimeMultiplier` | `4` |
| `0x0058` | `int` | `rank` | `4` |
| `0x005c` | `int` | `prestige` | `4` |
| `0x0060` | `unsigned int[2]` | `perks` | `8` |
| `0x0068` | `int` | `diveState` | `4` |
| `0x006c` | `int` | `voiceConnectivityBits` | `4` |
| `0x0070` | `unsigned int` | `playerCardIcon` | `4` |
| `0x0074` | `unsigned int` | `playerCardTitle` | `4` |
| `0x0078` | `unsigned int` | `playerCardNameplate` | `4` |

## `netadr_t`

- Taille confirmee (static_assert) : `0x14`
- Taille calculee : `incomplete`
- Status : **PARTIEL**

| Offset | Type | Champ | Taille |
|---|---|---|---|
| `0x0000` | `netadrtype_t` | `type` | `4` |
| `0x0004` | `netIP_t` | `ip` | `?` ⚠️ |

## `netchan_t`

- Taille confirmee (static_assert) : `0x62c`
- Taille calculee : `0x62c`
- Status : **OK**

| Offset | Type | Champ | Taille |
|---|---|---|---|
| `0x0000` | `int` | `outgoingSequence` | `4` |
| `0x0004` | `netsrc_t` | `sock` | `4` |
| `0x0008` | `int` | `dropped` | `4` |
| `0x000c` | `int` | `incomingSequence` | `4` |
| `0x0010` | `netadr_t` | `remoteAddress` | `20` |
| `0x0024` | `int` | `qport` | `4` |
| `0x0028` | `int` | `fragmentSequence` | `4` |
| `0x002c` | `int` | `fragmentLength` | `4` |
| `0x0030` | `char*` | `fragmentBuffer` | `4` |
| `0x0034` | `int` | `fragmentBufferSize` | `4` |
| `0x0038` | `int` | `unsentFragments` | `4` |
| `0x003c` | `int` | `unsentFragmentStart` | `4` |
| `0x0040` | `int` | `unsentLength` | `4` |
| `0x0044` | `char*` | `unsentBuffer` | `4` |
| `0x0048` | `int` | `unsentBufferSize` | `4` |
| `0x004c` | `netProfileInfo_t` | `prof` | `1504` |

## `dvar_t`

- Taille confirmee (static_assert) : `0x50`
- Taille calculee : `0x4c`
- Status : **OK**

| Offset | Type | Champ | Taille |
|---|---|---|---|
| `0x0000` | `const char*` | `name` | `4` |
| `0x0004` | `const char*` | `description` | `4` |
| `0x0008` | `unsigned int` | `flags` | `4` |
| `0x000c` | `dvar_type` | `type` | `1` |
| `0x000d` | `bool` | `modified` | `1` |
| `0x0010` | `DvarValue` | `current` | `16` |
| `0x0020` | `DvarValue` | `latched` | `16` |
| `0x0030` | `DvarValue` | `reset` | `16` |
| `0x0040` | `DvarLimits` | `domain` | `8` |
| `0x0048` | `dvar_t*` | `hashNext` | `4` |

## `gentity_s`

- Taille confirmee (static_assert) : `0x274`
- Taille calculee : `incomplete`
- Status : **PARTIEL**

| Offset | Type | Champ | Taille |
|---|---|---|---|
| `0x0000` | `entityState_s` | `s` | `256` |
| `0x0100` | `entityShared_t` | `r` | `?` ⚠️ |

## `entityState_s`

- Taille confirmee (static_assert) : `0x100`
- Taille calculee : `incomplete`
- Status : **PARTIEL**

| Offset | Type | Champ | Taille |
|---|---|---|---|
| `0x0000` | `int` | `number` | `4` |
| `0x0004` | `int` | `eType` | `4` |
| `0x0008` | `LerpEntityState` | `lerp` | `112` |
| `0x0078` | `int` | `time2` | `4` |
| `0x007c` | `int` | `otherEntityNum` | `4` |
| `0x0080` | `int` | `attackerEntityNum` | `4` |
| `0x0084` | `int` | `groundEntityNum` | `4` |
| `0x0088` | `int` | `loopSound` | `4` |
| `0x008c` | `int` | `surfType` | `4` |
| `0x0090` | `int` | `brushModel` | `4` |
| `0x0094` | `int` | `triggerModel` | `4` |
| `0x0098` | `int` | `item` | `4` |
| `0x009c` | `int` | `xmodel` | `4` |
| `0x00a0` | `int` | `primaryLight` | `4` |
| `0x00a4` | `int` | `clientNum` | `4` |
| `0x00a8` | `int` | `iHeadIcon` | `4` |
| `0x00ac` | `int` | `iHeadIconTeam` | `4` |
| `0x00b0` | `int` | `solid` | `4` |
| `0x00b4` | `unsigned int` | `eventParm` | `4` |
| `0x00b8` | `int` | `eventSequence` | `4` |
| `0x00bc` | `int[4]` | `events` | `16` |
| `0x00cc` | `unsigned int[4]` | `eventParms` | `16` |
| `0x00dc` | `unsigned __int16` | `weapon` | `2` |
| `0x00e0` | `int` | `legsAnim` | `4` |
| `0x00e4` | `int` | `torsoAnim` | `4` |
| `0x00e8` | `int` | `eventParm2` | `4` |
| `0x00ec` | `int` | `hintString` | `4` |
| `0x00f0` | `int` | `fxId` | `4` |
| `0x00f4` | `int` | `helicopterStage` | `4` |
| `0x00f8` | `int` | `hintType` | `4` |
| `0x00fc` | `unsigned __int16` | `vehicleXModel` | `2` |
| `0x00fe` | `char` | `weaponModel` | `1` |
| `0x0100` | `int` | `actorFlags` | `4` |
| `0x0104` | `clientLinkInfo_t` | `clientLinkInfo` | `?` ⚠️ |

## `entityShared_t`

- Taille confirmee (static_assert) : `—`
- Taille calculee : `incomplete`
- Status : **PARTIEL**

| Offset | Type | Champ | Taille |
|---|---|---|---|
| `0x0000` | `char` | `isLinked` | `1` |
| `0x0001` | `char` | `modelType` | `1` |
| `0x0002` | `char` | `svFlags` | `1` |
| `0x0003` | `char` | `isInUse` | `1` |
| `0x0004` | `Bounds` | `box` | `?` ⚠️ |

## `rectDef_s`

- Taille confirmee (static_assert) : `0x14`
- Taille calculee : `0x12`
- Status : **OK**

| Offset | Type | Champ | Taille |
|---|---|---|---|
| `0x0000` | `float` | `x` | `4` |
| `0x0004` | `float` | `y` | `4` |
| `0x0008` | `float` | `w` | `4` |
| `0x000c` | `float` | `h` | `4` |
| `0x0010` | `char` | `horzAlign` | `1` |
| `0x0011` | `char` | `vertAlign` | `1` |

## `msg_t`

- Taille confirmee (static_assert) : `—`
- Taille calculee : `0x28`
- Status : **OK**

| Offset | Type | Champ | Taille |
|---|---|---|---|
| `0x0000` | `int` | `overflowed` | `4` |
| `0x0004` | `int` | `readOnly` | `4` |
| `0x0008` | `unsigned char*` | `data` | `4` |
| `0x000c` | `unsigned char*` | `splitData` | `4` |
| `0x0010` | `int` | `maxsize` | `4` |
| `0x0014` | `int` | `cursize` | `4` |
| `0x0018` | `int` | `splitSize` | `4` |
| `0x001c` | `int` | `readcount` | `4` |
| `0x0020` | `int` | `bit` | `4` |
| `0x0024` | `int` | `lastEntityRef` | `4` |
