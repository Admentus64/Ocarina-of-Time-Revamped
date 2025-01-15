#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "spot02_room_0.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "spot02_scene.h"
#include "spot02_room_1.h"

SceneCmd spot02_room_0Commands[] = {
    SCENE_CMD_ALTERNATE_HEADER_LIST(spot02_room_0AlternateHeaders0x000048),
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&spot02_room_0RoomShapeNormal_0001F0),
    SCENE_CMD_OBJECT_LIST(2, spot02_room_0ObjectList_00005C),
    SCENE_CMD_ACTOR_LIST(25, spot02_room_0ActorEntry_000060),
    SCENE_CMD_END(),
};

SceneCmd* spot02_room_0AlternateHeaders0x000048[] = {
    spot02_room_0Set_0005D0,
    spot02_room_0Set_000210,
    spot02_room_0Set_0003F0,
    spot02_room_0Set_0007B0,
    spot02_room_0Set_000880,
};

s16 spot02_room_0ObjectList_00005C[] = {
    OBJECT_SPOT02_OBJECTS,
    OBJECT_SYOKUDAI,
};

ActorEntry spot02_room_0ActorEntry_000060[] = {
    { ACTOR_OBJ_SYOKUDAI,      {   1896,     95,     80 }, {      0, 0X4000,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   1930,     95,    -39 }, {      0, 0X2AAB,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   1930,     95,    199 }, {      0, 0X5555,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   1971,     95,     38 }, {      0, 0X33E9,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   1972,     95,    121 }, {      0, 0X4B61,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2011,     95,    197 }, {      0, 0X6000,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2015,     95,   -127 }, {      0, 0X18E4,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2015,     95,    284 }, {      0, 0X671C,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2016,     95,    -41 }, {      0, 0X216C,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2093,     95,    -86 }, {      0,  0XB61,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2093,     95,    245 }, {      0, 0X749F,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2136,     95,   -158 }, {      0,      0,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2136,     95,    318 }, {      0, 0X8000,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2178,     95,    -84 }, {      0, 0XF49F,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2180,     95,    245 }, {      0, 0X8AAB,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2254,     95,   -127 }, {      0, 0XEAAB,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2256,     95,    288 }, {      0, 0X98E4,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2259,     95,    -38 }, {      0, 0XDF4A,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2260,     95,    200 }, {      0, 0X9F4A,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2294,     95,     39 }, {      0, 0XCD83,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2302,     95,    123 }, {      0, 0XB27D,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2343,     95,    -39 }, {      0, 0XD555,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2343,     95,    199 }, {      0, 0XAAAB,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2376,     95,     82 }, {      0, 0XBF4A,      0 }, 0x129F },
    { ACTOR_BG_SPOT02_OBJECTS, {   2676,    100,     80 }, {      0, 0XC000,      0 }, 0x1F00 },
};

RoomShapeNormal spot02_room_0RoomShapeNormal_0001F0 = { 
    0, 1,
    spot02_room_0RoomShapeDListsEntry_0001FC,
    spot02_room_0RoomShapeDListsEntry_0001FC + ARRAY_COUNTU(spot02_room_0RoomShapeDListsEntry_0001FC)
};

RoomShapeDListsEntry spot02_room_0RoomShapeDListsEntry_0001FC[1] = {
    { spot02_room_0DL_002268, spot02_room_0DL_002650 },
};

s32 spot02_room_0_terminatorMaybe_000204 = { 0x01000000 };

u8 spot02_room_0_possiblePadding_000208[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

SceneCmd spot02_room_0Set_000210[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&spot02_room_0RoomShapeNormal_0001F0),
    SCENE_CMD_OBJECT_LIST(2, spot02_room_0ObjectList_000250),
    SCENE_CMD_ACTOR_LIST(25, spot02_room_0ActorEntry_000254),
    SCENE_CMD_END(),
};

s16 spot02_room_0ObjectList_000250[] = {
    OBJECT_SPOT02_OBJECTS,
    OBJECT_SYOKUDAI,
};

ActorEntry spot02_room_0ActorEntry_000254[] = {
    { ACTOR_OBJ_SYOKUDAI,      {   1896,     95,     80 }, {      0, 0X4000,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   1930,     95,    -39 }, {      0, 0X2AAB,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   1930,     95,    199 }, {      0, 0X5555,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   1971,     95,     38 }, {      0, 0X33E9,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   1972,     95,    121 }, {      0, 0X4B61,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2011,     95,    197 }, {      0, 0X6000,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2015,     95,   -127 }, {      0, 0X18E4,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2015,     95,    284 }, {      0, 0X671C,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2016,     95,    -41 }, {      0, 0X216C,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2093,     95,    -86 }, {      0,  0XB61,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2093,     95,    245 }, {      0, 0X749F,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2136,     95,   -158 }, {      0,      0,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2136,     95,    318 }, {      0, 0X8000,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2178,     95,    -84 }, {      0, 0XF49F,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2180,     95,    245 }, {      0, 0X8AAB,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2254,     95,   -127 }, {      0, 0XEAAB,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2256,     95,    288 }, {      0, 0X98E4,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2259,     95,    -38 }, {      0, 0XDF4A,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2260,     95,    200 }, {      0, 0X9F4A,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2294,     95,     39 }, {      0, 0XCD83,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2302,     95,    123 }, {      0, 0XB27D,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2343,     95,    -39 }, {      0, 0XD555,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2343,     95,    199 }, {      0, 0XAAAB,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2376,     95,     82 }, {      0, 0XBF4A,      0 }, 0x129E },
    { ACTOR_BG_SPOT02_OBJECTS, {   2676,    100,     80 }, {      0, 0XC000,      0 }, 0x1E00 },
};

u8 spot02_room_0_possiblePadding_0003E4[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

SceneCmd spot02_room_0Set_0003F0[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&spot02_room_0RoomShapeNormal_0001F0),
    SCENE_CMD_OBJECT_LIST(2, spot02_room_0ObjectList_000430),
    SCENE_CMD_ACTOR_LIST(25, spot02_room_0ActorEntry_000434),
    SCENE_CMD_END(),
};

s16 spot02_room_0ObjectList_000430[] = {
    OBJECT_SPOT02_OBJECTS,
    OBJECT_SYOKUDAI,
};

ActorEntry spot02_room_0ActorEntry_000434[] = {
    { ACTOR_OBJ_SYOKUDAI,      {   2376,     95,     82 }, {      0, 0XBF4A,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2343,     95,    199 }, {      0, 0XAAAB,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2343,     95,    -39 }, {      0, 0XD555,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2302,     95,    123 }, {      0, 0XB27D,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2294,     95,     39 }, {      0, 0XCD83,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2260,     95,    200 }, {      0, 0X9F4A,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2259,     95,    -38 }, {      0, 0XDF4A,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2256,     95,    288 }, {      0, 0X98E4,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2254,     95,   -127 }, {      0, 0XEAAB,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2180,     95,    245 }, {      0, 0X8AAB,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2178,     95,    -84 }, {      0, 0XF49F,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2136,     95,    318 }, {      0, 0X8000,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2136,     95,   -158 }, {      0,      0,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2093,     95,    245 }, {      0, 0X749F,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2093,     95,    -86 }, {      0,  0XB61,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2016,     95,    -41 }, {      0, 0X216C,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2015,     95,    284 }, {      0, 0X671C,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2015,     95,   -127 }, {      0, 0X18E4,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   2011,     95,    197 }, {      0, 0X6000,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   1972,     95,    121 }, {      0, 0X4B61,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   1971,     95,     38 }, {      0, 0X33E9,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   1930,     95,    199 }, {      0, 0X5555,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   1930,     95,    -39 }, {      0, 0X2AAB,      0 }, 0x129E },
    { ACTOR_OBJ_SYOKUDAI,      {   1896,     95,     80 }, {      0, 0X4000,      0 }, 0x129E },
    { ACTOR_BG_SPOT02_OBJECTS, {   2676,    100,     80 }, {      0, 0XC000,      0 }, 0x1E00 },
};

u8 spot02_room_0_possiblePadding_0005C4[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

SceneCmd spot02_room_0Set_0005D0[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&spot02_room_0RoomShapeNormal_0001F0),
    SCENE_CMD_OBJECT_LIST(2, spot02_room_0ObjectList_000610),
    SCENE_CMD_ACTOR_LIST(25, spot02_room_0ActorEntry_000614),
    SCENE_CMD_END(),
};

s16 spot02_room_0ObjectList_000610[] = {
    OBJECT_SPOT02_OBJECTS,
    OBJECT_SYOKUDAI,
};

ActorEntry spot02_room_0ActorEntry_000614[] = {
    { ACTOR_OBJ_SYOKUDAI,      {   1896,     95,     80 }, {      0, 0X4000,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   1930,     95,    -39 }, {      0, 0X2AAB,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   1930,     95,    199 }, {      0, 0X5555,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   1971,     95,     38 }, {      0, 0X33E9,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   1972,     95,    121 }, {      0, 0X4B61,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2011,     95,    197 }, {      0, 0X6000,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2015,     95,   -127 }, {      0, 0X18E4,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2015,     95,    284 }, {      0, 0X671C,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2016,     95,    -41 }, {      0, 0X216C,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2093,     95,    -86 }, {      0,  0XB61,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2093,     95,    245 }, {      0, 0X749F,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2136,     95,   -158 }, {      0,      0,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2136,     95,    318 }, {      0, 0X8000,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2178,     95,    -84 }, {      0, 0XF49F,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2180,     95,    245 }, {      0, 0X8AAB,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2254,     95,   -127 }, {      0, 0XEAAB,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2256,     95,    288 }, {      0, 0X98E4,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2259,     95,    -38 }, {      0, 0XDF4A,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2260,     95,    200 }, {      0, 0X9F4A,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2294,     95,     39 }, {      0, 0XCD83,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2302,     95,    123 }, {      0, 0XB27D,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2343,     95,    -39 }, {      0, 0XD555,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2343,     95,    199 }, {      0, 0XAAAB,      0 }, 0x129F },
    { ACTOR_OBJ_SYOKUDAI,      {   2376,     95,     82 }, {      0, 0XBF4A,      0 }, 0x129F },
    { ACTOR_BG_SPOT02_OBJECTS, {   2676,    100,     80 }, {      0, 0XC000,      0 }, 0x1F00 },
};

u8 spot02_room_0_possiblePadding_0007A4[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

SceneCmd spot02_room_0Set_0007B0[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&spot02_room_0RoomShapeNormal_0001F0),
    SCENE_CMD_OBJECT_LIST(11, spot02_room_0ObjectList_0007F0),
    SCENE_CMD_ACTOR_LIST(7, spot02_room_0ActorEntry_000808),
    SCENE_CMD_END(),
};

s16 spot02_room_0ObjectList_0007F0[] = {
    OBJECT_SPOT02_OBJECTS,
    OBJECT_MJIN,
    OBJECT_MJIN_DARK,
    OBJECT_EFC_FLASH,
    OBJECT_SYOKUDAI,
    OBJECT_POH,
    OBJECT_TK,
    OBJECT_HAKA,
    OBJECT_NIW,
    OBJECT_MAMENOKI,
    OBJECT_BOX,
};

ActorEntry spot02_room_0ActorEntry_000808[] = {
    { ACTOR_OBJ_SYOKUDAI,      {   1930,    100,    -39 }, {      0, 0X2AAB,      0 }, 0x13FF },
    { ACTOR_OBJ_SYOKUDAI,      {   1930,    100,    199 }, {      0, 0X5555,      0 }, 0x13FF },
    { ACTOR_OBJ_SYOKUDAI,      {   2136,    100,    318 }, {      0, 0X8000,      0 }, 0x13FF },
    { ACTOR_OBJ_SYOKUDAI,      {   2343,    100,    199 }, {      0, 0XAAAB,      0 }, 0x13FF },
    { ACTOR_OBJ_SYOKUDAI,      {   2343,    100,    -39 }, {      0, 0XD555,      0 }, 0x13FF },
    { ACTOR_OBJ_SYOKUDAI,      {   2136,    100,   -158 }, {      0,      0,      0 }, 0x13FF },
    { ACTOR_BG_SPOT02_OBJECTS, {   2676,    100,     80 }, {      0, 0XC000,      0 }, 0xFF00 },
};

u8 spot02_room_0_possiblePadding_000878[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

SceneCmd spot02_room_0Set_000880[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 1),
    SCENE_CMD_ROOM_SHAPE(&spot02_room_0RoomShapeNormal_0001F0),
    SCENE_CMD_OBJECT_LIST(12, spot02_room_0ObjectList_0008C0),
    SCENE_CMD_ACTOR_LIST(7, spot02_room_0ActorEntry_0008D8),
    SCENE_CMD_END(),
};

s16 spot02_room_0ObjectList_0008C0[] = {
    OBJECT_SPOT02_OBJECTS,
    OBJECT_MJIN,
    OBJECT_MJIN_DARK,
    OBJECT_EFC_FLASH,
    OBJECT_SYOKUDAI,
    OBJECT_POH,
    OBJECT_TK,
    OBJECT_HAKA,
    OBJECT_NIW,
    OBJECT_MAMENOKI,
    OBJECT_BOX,
    OBJECT_SPOT01_OBJECTS,
};

ActorEntry spot02_room_0ActorEntry_0008D8[] = {
    { ACTOR_OBJ_SYOKUDAI,      {   1930,    100,    -39 }, {      0, 0X2AAB,      0 }, 0x13FF },
    { ACTOR_OBJ_SYOKUDAI,      {   1930,    100,    199 }, {      0, 0X5555,      0 }, 0x13FF },
    { ACTOR_OBJ_SYOKUDAI,      {   2136,    100,    318 }, {      0, 0X8000,      0 }, 0x13FF },
    { ACTOR_OBJ_SYOKUDAI,      {   2343,    100,    199 }, {      0, 0XAAAB,      0 }, 0x13FF },
    { ACTOR_OBJ_SYOKUDAI,      {   2343,    100,    -39 }, {      0, 0XD555,      0 }, 0x13FF },
    { ACTOR_OBJ_SYOKUDAI,      {   2136,    100,   -158 }, {      0,      0,      0 }, 0x13FF },
    { ACTOR_BG_SPOT02_OBJECTS, {   2676,    100,     80 }, {      0, 0XC000,      0 }, 0xFF00 },
};

u8 spot02_room_0_possiblePadding_000948[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx spot02_room_0Vtx_000950[] = {
#include "assets/scenes/overworld/spot02/spot02_room_0Vtx_000950.vtx.inc"
};

Gfx spot02_room_0DL_000A30[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_0Vtx_000950[6], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_sceneTex_00B880, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_0Vtx_000950, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_0Vtx_000AF0[] = {
#include "assets/scenes/overworld/spot02/spot02_room_0Vtx_000AF0.vtx.inc"
};

Gfx spot02_room_0DL_000CF0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_0Vtx_000AF0[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(spot02_sceneTex_00AE80, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_0Vtx_000AF0, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_sceneTex_008E80, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_0Vtx_000AF0[6], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(spot02_sceneTex_00AE80, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_0Vtx_000AF0[18], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_0Vtx_000E70[] = {
#include "assets/scenes/overworld/spot02/spot02_room_0Vtx_000E70.vtx.inc"
};

Gfx spot02_room_0DL_0010F0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_0Vtx_000E70[32], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_sceneTex_008E80, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_0Vtx_000E70, 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(0, 22, 23, 0, 23, 24, 5, 0),
    gsSP2Triangles(24, 3, 5, 0, 0, 2, 22, 0),
    gsSP1Triangle(23, 22, 24, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(spot02_sceneTex_00AE80, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_0Vtx_000E70[25], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(5, 6, 2, 0, 6, 0, 2, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_0Vtx_001240[] = {
#include "assets/scenes/overworld/spot02/spot02_room_0Vtx_001240.vtx.inc"
};

Gfx spot02_room_0DL_001400[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_0Vtx_001240[20], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_sceneTex_00B080, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_0Vtx_001240, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 3, 0, 6, 2, 7, 0),
    gsSP2Triangles(6, 8, 2, 0, 9, 2, 8, 0),
    gsSP2Triangles(10, 2, 9, 0, 10, 0, 2, 0),
    gsSP2Triangles(2, 11, 12, 0, 2, 13, 14, 0),
    gsSP2Triangles(14, 11, 2, 0, 15, 11, 14, 0),
    gsSP2Triangles(15, 14, 16, 0, 12, 17, 18, 0),
    gsSP2Triangles(18, 6, 7, 0, 13, 5, 19, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_0Vtx_0014F0[] = {
#include "assets/scenes/overworld/spot02/spot02_room_0Vtx_0014F0.vtx.inc"
};

Gfx spot02_room_0DL_001A30[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_0Vtx_0014F0[76], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_sceneTex_007E80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(spot02_sceneTex_007280, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_0Vtx_0014F0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(6, 12, 13, 0, 6, 13, 7, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 14, 17, 0, 18, 17, 19, 0),
    gsSP2Triangles(20, 8, 11, 0, 20, 11, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 22, 25, 0, 26, 25, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&spot02_room_0Vtx_0014F0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 0, 3, 13, 0),
    gsSP2Triangles(14, 0, 13, 0, 14, 13, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&spot02_room_0Vtx_0014F0[64], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_0Vtx_001BD8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_0Vtx_001BD8.vtx.inc"
};

Gfx spot02_room_0DL_001C98[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_0Vtx_001BD8[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_sceneTex_007A80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_OVL_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_0Vtx_001BD8, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_0Vtx_001D50[] = {
#include "assets/scenes/overworld/spot02/spot02_room_0Vtx_001D50.vtx.inc"
};

Gfx spot02_room_0DL_001FB0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_0Vtx_001D50[30], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_sceneTex_00A280, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_0Vtx_001D50, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 3, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_sceneTex_00AA80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_0Vtx_001D50[6], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_0Vtx_0020F0[] = {
#include "assets/scenes/overworld/spot02/spot02_room_0Vtx_0020F0.vtx.inc"
};

Gfx spot02_room_0DL_0021B0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_0Vtx_0020F0[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_sceneTex_008680, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 252, 235, 235, 255),
    gsSPVertex(spot02_room_0Vtx_0020F0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx spot02_room_0DL_002268[] = {
    gsSPDisplayList(spot02_room_0DL_000A30),
    gsSPDisplayList(spot02_room_0DL_000CF0),
    gsSPDisplayList(spot02_room_0DL_0010F0),
    gsSPDisplayList(spot02_room_0DL_001400),
    gsSPDisplayList(spot02_room_0DL_001A30),
    gsSPDisplayList(spot02_room_0DL_001C98),
    gsSPDisplayList(spot02_room_0DL_001FB0),
    gsSPDisplayList(spot02_room_0DL_0021B0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_0Vtx_0022B0[] = {
#include "assets/scenes/overworld/spot02/spot02_room_0Vtx_0022B0.vtx.inc"
};

Gfx spot02_room_0DL_002560[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_0Vtx_0022B0[35], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(spot02_sceneTex_009E80, G_IM_FMT_IA, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_OVL_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_0Vtx_0022B0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(30, 31, 11, 0),
    gsSPVertex(&spot02_room_0Vtx_0022B0[32], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx spot02_room_0DL_002650[] = {
    gsSPDisplayList(spot02_room_0DL_002560),
    gsSPEndDisplayList(),
};

