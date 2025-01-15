#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "spot02_room_1.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "spot02_scene.h"
#include "spot02_room_0.h"

SceneCmd spot02_room_1Commands[] = {
    SCENE_CMD_ALTERNATE_HEADER_LIST(spot02_room_1AlternateHeaders0x000048),
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&spot02_room_1RoomShapeNormal_000340),
    SCENE_CMD_OBJECT_LIST(14, spot02_room_1ObjectList_00005C),
    SCENE_CMD_ACTOR_LIST(44, spot02_room_1ActorEntry_000078),
    SCENE_CMD_END(),
};

SceneCmd* spot02_room_1AlternateHeaders0x000048[] = {
    spot02_room_1Set_000B40,
    spot02_room_1Set_000360,
    spot02_room_1Set_000750,
    spot02_room_1Set_000EE0,
    spot02_room_1Set_001130,
};

s16 spot02_room_1ObjectList_00005C[] = {
    OBJECT_SPOT02_OBJECTS,
    OBJECT_SPOT01_OBJECTS,
    OBJECT_MJIN,
    OBJECT_MJIN_DARK,
    OBJECT_EFC_FLASH,
    OBJECT_PO_COMPOSER,
    OBJECT_HAKA,
    OBJECT_MAMENOKI,
    OBJECT_CS,
    OBJECT_KANBAN,
    OBJECT_POH,
    OBJECT_GS,
    OBJECT_ST,
    OBJECT_KIBAKO2,
};

ActorEntry spot02_room_1ActorEntry_000078[] = {
    { ACTOR_EN_CS,             {   -474,     61,    447 }, {      0, 0X8000,      0 }, 0x0000 },
    { ACTOR_BG_SPOT01_FUSYA,   {  -3200,    880,    150 }, {      0, 0XC000,      0 }, 0xFFFF },
    { ACTOR_EN_GS,             {   1290,    340,    -75 }, {      0, 0XE000,      0 }, 0x380A },
    { ACTOR_EN_ITEM00,         {  -1050,    264,   -350 }, {      0,      0,      0 }, 0x0406 },
    { ACTOR_EN_WONDER_TALK,    {    752,    215,     85 }, {      0, 0XC000,  0XFA5 }, 0x27FF },
    { ACTOR_EN_WONDER_TALK,    {    654,    214,   -102 }, {      0, 0XC000,  0XE39 }, 0x1FFF },
    { ACTOR_EN_WONDER_TALK,    {    654,    214,    258 }, {      0, 0XC000,  0XE39 }, 0x2FFF },
    { ACTOR_BG_MJIN,           {   1145,    340,     85 }, {      0, 0X1555,      0 }, 0x0002 },
    { ACTOR_EN_OKARINA_TAG,    {    602,    181,     81 }, {      0, 0XC000,    0XB }, 0x1BFF },
    { ACTOR_OBJ_HANA,          {   -402,     60,    164 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_OBJ_HANA,          {   -402,     60,    196 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_OBJ_HANA,          {   -397,     60,    180 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_OBJ_MAKEKINSUTA,   {   -715,    120,   -340 }, {      0,      0,      0 }, 0x5101 },
    { ACTOR_OBJECT_KANKYO,     {    685,    180,     33 }, {      0, 0XC000,      0 }, 0x0004 },
    { ACTOR_EN_ISHI,           {  -1193,      0,    693 }, {      0,      0,      0 }, 0x0210 },
    { ACTOR_EN_KANBAN,         {  -1110,      0,    430 }, {      0, 0XC000,      0 }, 0x0334 },
    { ACTOR_OBJ_MURE2,         {  -1102,      0,    690 }, {      0,      0,      0 }, 0x0201 },
    { ACTOR_OBJ_MURE,          {   -391,    137,    178 }, {      0,      0,      0 }, 0x3324 },
    { ACTOR_OBJ_BEAN,          {   -715,    120,   -340 }, {      0,      0,      0 }, 0x1F03 },
    { ACTOR_EN_WONDER_TALK2,   {   -805,     38,    266 }, {      0, 0XC000,   0X29 }, 0x0B3F },
    { ACTOR_EN_WONDER_TALK2,   {    602,    185,     80 }, {      0, 0XC000,   0X15 }, 0x0AFF },
    { ACTOR_OBJ_KIBAKO2,       {  -1050,    264,   -350 }, { 0XFFFF, 0X4000,      0 }, 0xFFFF },
    { ACTOR_BG_HAKA,           {   -458,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,     59 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,    299 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,    419 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,    539 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -338,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -218,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    -98,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {     22,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,   -177 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    -57 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    219 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    459 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    579 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    699 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,    179 }, {      0, 0XC000,      0 }, 0x0001 },
    { ACTOR_BG_HAKA,           {    155,    120,    339 }, {      0, 0XC000,      0 }, 0x0001 },
    { ACTOR_EN_WEATHER_TAG,    {    728,    181,     80 }, {      0,      0,      0 }, 0x0607 },
    { ACTOR_BG_SPOT02_OBJECTS, {    762,    180,     80 }, {      0, 0XC000,      0 }, 0x0002 },
    { ACTOR_BG_SPOT02_OBJECTS, {   -578,    120,   -336 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_BG_SPOT02_OBJECTS, {    685,    180,    137 }, {      0, 0XC000,      0 }, 0x0004 },
    { ACTOR_BG_SPOT02_OBJECTS, {    685,    180,     85 }, {      0, 0XC000,      0 }, 0x0003 },
};

u8 spot02_room_1_possiblePadding_000338[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

RoomShapeNormal spot02_room_1RoomShapeNormal_000340 = { 
    0, 1,
    spot02_room_1RoomShapeDListsEntry_00034C,
    spot02_room_1RoomShapeDListsEntry_00034C + ARRAY_COUNTU(spot02_room_1RoomShapeDListsEntry_00034C)
};

RoomShapeDListsEntry spot02_room_1RoomShapeDListsEntry_00034C[1] = {
    { spot02_room_1DL_008CF8, spot02_room_1DL_01B528 },
};

s32 spot02_room_1_terminatorMaybe_000354 = { 0x01000000 };

u8 spot02_room_1_possiblePadding_000358[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

SceneCmd spot02_room_1Set_000360[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&spot02_room_1RoomShapeNormal_000340),
    SCENE_CMD_OBJECT_LIST(13, spot02_room_1ObjectList_0003A0),
    SCENE_CMD_ACTOR_LIST(57, spot02_room_1ActorEntry_0003BC),
    SCENE_CMD_END(),
};

s16 spot02_room_1ObjectList_0003A0[] = {
    OBJECT_SPOT02_OBJECTS,
    OBJECT_SPOT01_OBJECTS,
    OBJECT_MJIN,
    OBJECT_MJIN_DARK,
    OBJECT_EFC_FLASH,
    OBJECT_POH,
    OBJECT_HAKA,
    OBJECT_MAMENOKI,
    OBJECT_KANBAN,
    OBJECT_PO_COMPOSER,
    OBJECT_GS,
    OBJECT_KIBAKO2,
    OBJECT_WARP1,
};

ActorEntry spot02_room_1ActorEntry_0003BC[] = {
    { ACTOR_BG_SPOT01_FUSYA,   {  -3200,    880,    150 }, {      0, 0XC000,      0 }, 0xFFFF },
    { ACTOR_EN_GS,             {   1290,    340,    -75 }, {      0, 0XE000,      0 }, 0x380A },
    { ACTOR_EN_FIREFLY,        {   -563,     75,    351 }, {      0, 0XC000,      0 }, 0x0003 },
    { ACTOR_EN_FIREFLY,        {   -563,     75,    709 }, {      0, 0XC000,      0 }, 0x0003 },
    { ACTOR_EN_FIREFLY,        {   -276,    131,   -148 }, {      0,      0,      0 }, 0x0003 },
    { ACTOR_EN_FIREFLY,        {    -39,    133,    150 }, {      0, 0XC000,      0 }, 0x0003 },
    { ACTOR_EN_FIREFLY,        {    -25,    133,    -81 }, {      0, 0X4000,      0 }, 0x0003 },
    { ACTOR_EN_SW,             {   -686,    137,   -158 }, { 0X4000,      0,      0 }, 0x0000 },
    { ACTOR_EN_SW,             {    -38,    135,    405 }, { 0X4000, 0XC000,      0 }, 0x0000 },
    { ACTOR_EN_ITEM00,         {  -1050,    264,   -350 }, {      0,      0,      0 }, 0x0406 },
    { ACTOR_EN_WONDER_TALK,    {    753,    221,     85 }, {      0, 0XC000,  0XFA5 }, 0x27FF },
    { ACTOR_DOOR_WARP1,        {   1140,    340,     85 }, {      0,      0,      0 }, 0x0006 },
    { ACTOR_EN_POH,            {   -382,     61,    657 }, {      0, 0X9777,      0 }, 0x0000 },
    { ACTOR_EN_POH,            {   -330,    120,   -260 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_EN_POH,            {    552,    181,    318 }, {      0, 0XB6C1,      0 }, 0x0000 },
    { ACTOR_EN_WONDER_TALK,    {    634,    202,   -100 }, {      0, 0XC000,  0XE39 }, 0x1FFF },
    { ACTOR_EN_WONDER_TALK,    {    634,    202,    260 }, {      0, 0XC000,  0XE39 }, 0x2FFF },
    { ACTOR_EN_WEATHER_TAG,    {   -671,      0,     85 }, {      0,      0,      0 }, 0x1405 },
    { ACTOR_BG_MJIN,           {   1143,    340,     85 }, {      0, 0X1555,      0 }, 0x0002 },
    { ACTOR_EN_OKARINA_TAG,    {    602,    181,     81 }, {      0, 0XC000,      0 }, 0x1BFF },
    { ACTOR_OBJ_HANA,          {   -562,    120,   -289 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_OBJ_HANA,          {   -598,    120,   -287 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_OBJ_HANA,          {   -578,    120,   -280 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_OBJ_HANA,          {   -402,     60,    164 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_OBJ_HANA,          {   -402,     60,    196 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_OBJ_HANA,          {   -397,     60,    180 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_OBJECT_KANKYO,     {    685,    180,     32 }, {      0, 0XC000,      0 }, 0x0004 },
    { ACTOR_EN_ISHI,           {  -1193,      0,    693 }, {      0,      0,      0 }, 0x0710 },
    { ACTOR_EN_KANBAN,         {  -1110,      0,    430 }, {      0, 0XC000,      0 }, 0x0335 },
    { ACTOR_OBJ_MURE2,         {  -1102,      0,    690 }, {      0,      0,      0 }, 0x0701 },
    { ACTOR_OBJ_BEAN,          {   -715,    120,   -340 }, {      0,      0,      0 }, 0x0003 },
    { ACTOR_EN_WONDER_TALK2,   {   -807,     42,    266 }, {      0, 0XC000,   0X29 }, 0x0B3F },
    { ACTOR_EN_WONDER_TALK2,   {    601,    185,     81 }, {      0, 0XC000,   0X15 }, 0x0AFF },
    { ACTOR_OBJ_KIBAKO2,       {  -1050,    264,   -350 }, { 0XFFFF, 0X4000,      0 }, 0xFFFF },
    { ACTOR_BG_HAKA,           {   -458,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,     59 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,    299 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,    419 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,    539 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -338,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -218,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    -98,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {     22,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,   -177 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    -57 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    219 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    459 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    579 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    699 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -578,    120,   -336 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_BG_HAKA,           {   -348,     60,    179 }, {      0, 0XC000,      0 }, 0x0001 },
    { ACTOR_BG_HAKA,           {    155,    120,    339 }, {      0, 0XC000,      0 }, 0x0001 },
    { ACTOR_EN_WEATHER_TAG,    {    728,    181,     80 }, {      0,      0,      0 }, 0x0607 },
    { ACTOR_BG_SPOT02_OBJECTS, {    762,    180,     80 }, {      0, 0XC000,      0 }, 0x0002 },
    { ACTOR_BG_SPOT02_OBJECTS, {   -578,    120,   -336 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_BG_SPOT02_OBJECTS, {    682,    180,    131 }, {      0, 0XC000,      0 }, 0x0004 },
    { ACTOR_BG_SPOT02_OBJECTS, {    684,    180,     86 }, {      0, 0XC000,      0 }, 0x0003 },
};

u8 spot02_room_1_possiblePadding_00074C[] = {
    0x00, 0x00, 0x00, 0x00, 
};

SceneCmd spot02_room_1Set_000750[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&spot02_room_1RoomShapeNormal_000340),
    SCENE_CMD_OBJECT_LIST(13, spot02_room_1ObjectList_000790),
    SCENE_CMD_ACTOR_LIST(57, spot02_room_1ActorEntry_0007AC),
    SCENE_CMD_END(),
};

s16 spot02_room_1ObjectList_000790[] = {
    OBJECT_SPOT02_OBJECTS,
    OBJECT_SPOT01_OBJECTS,
    OBJECT_MJIN,
    OBJECT_MJIN_DARK,
    OBJECT_EFC_FLASH,
    OBJECT_POH,
    OBJECT_HAKA,
    OBJECT_MAMENOKI,
    OBJECT_KANBAN,
    OBJECT_PO_COMPOSER,
    OBJECT_GS,
    OBJECT_KIBAKO2,
    OBJECT_WARP1,
};

ActorEntry spot02_room_1ActorEntry_0007AC[] = {
    { ACTOR_BG_SPOT01_FUSYA,   {  -3200,    880,    150 }, {      0, 0XC000,      0 }, 0xFFFF },
    { ACTOR_EN_GS,             {   1290,    340,    -75 }, {      0, 0XE000,      0 }, 0x380A },
    { ACTOR_EN_FIREFLY,        {    -25,    133,    -81 }, {      0, 0X4000,      0 }, 0x0003 },
    { ACTOR_EN_FIREFLY,        {    -39,    133,    150 }, {      0, 0XC000,      0 }, 0x0003 },
    { ACTOR_EN_FIREFLY,        {   -276,    131,   -148 }, {      0,      0,      0 }, 0x0003 },
    { ACTOR_EN_FIREFLY,        {   -563,     75,    709 }, {      0, 0XC000,      0 }, 0x0003 },
    { ACTOR_EN_FIREFLY,        {   -563,     75,    351 }, {      0, 0XC000,      0 }, 0x0003 },
    { ACTOR_EN_SW,             {    -38,    135,    405 }, { 0X4000, 0XC000,      0 }, 0x0000 },
    { ACTOR_EN_SW,             {   -686,    137,   -158 }, { 0X4000,      0,      0 }, 0x0000 },
    { ACTOR_EN_ITEM00,         {  -1050,    264,   -350 }, {      0,      0,      0 }, 0x0406 },
    { ACTOR_EN_WONDER_TALK,    {    758,    221,     85 }, {      0, 0XC000,  0XFA5 }, 0x27FF },
    { ACTOR_DOOR_WARP1,        {   1140,    340,     85 }, {      0,      0,      0 }, 0x0006 },
    { ACTOR_EN_POH,            {    552,    181,    318 }, {      0, 0XB6C1,      0 }, 0x0000 },
    { ACTOR_EN_POH,            {   -330,    120,   -260 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_EN_POH,            {   -382,     61,    657 }, {      0, 0X9777,      0 }, 0x0000 },
    { ACTOR_EN_WONDER_TALK,    {    638,    203,   -100 }, {      0, 0XC000,  0XE39 }, 0x1FFF },
    { ACTOR_EN_WONDER_TALK,    {    638,    203,    260 }, {      0, 0XC000,  0XE39 }, 0x2FFF },
    { ACTOR_EN_WEATHER_TAG,    {   -671,      0,     85 }, {      0,      0,      0 }, 0x1405 },
    { ACTOR_BG_MJIN,           {   1143,    340,     85 }, {      0, 0X1555,      0 }, 0x0002 },
    { ACTOR_EN_OKARINA_TAG,    {    602,    181,     81 }, {      0, 0XC000,      0 }, 0x1BFF },
    { ACTOR_OBJ_HANA,          {   -562,    120,   -289 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_OBJ_HANA,          {   -578,    120,   -280 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_OBJ_HANA,          {   -598,    120,   -287 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_OBJ_HANA,          {   -397,     60,    180 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_OBJ_HANA,          {   -402,     60,    164 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_OBJ_HANA,          {   -402,     60,    196 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_OBJECT_KANKYO,     {    685,    180,     32 }, {      0, 0XC000,      0 }, 0x0004 },
    { ACTOR_EN_ISHI,           {  -1193,      0,    693 }, {      0,      0,      0 }, 0x0710 },
    { ACTOR_EN_KANBAN,         {  -1110,      0,    430 }, {      0, 0XC000,      0 }, 0x0335 },
    { ACTOR_OBJ_MURE2,         {  -1102,      0,    690 }, {      0,      0,      0 }, 0x0701 },
    { ACTOR_OBJ_BEAN,          {   -715,    120,   -340 }, {      0,      0,      0 }, 0x0003 },
    { ACTOR_EN_WONDER_TALK2,   {   -806,     41,    266 }, {      0, 0XC000,   0X15 }, 0x0B3F },
    { ACTOR_EN_WONDER_TALK2,   {    604,    185,     80 }, {      0, 0XC000,   0X29 }, 0x0AFF },
    { ACTOR_OBJ_KIBAKO2,       {  -1050,    264,   -350 }, { 0XFFFF, 0X4000,      0 }, 0xFFFF },
    { ACTOR_BG_HAKA,           {    155,    120,    699 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    579 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    459 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    219 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    -57 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,   -177 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {     22,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    -98,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -218,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -338,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,    539 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,    419 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,    299 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,     59 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -458,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    339 }, {      0, 0XC000,      0 }, 0x0001 },
    { ACTOR_BG_HAKA,           {   -348,     60,    179 }, {      0, 0XC000,      0 }, 0x0001 },
    { ACTOR_BG_HAKA,           {   -578,    120,   -336 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_EN_WEATHER_TAG,    {    728,    181,     80 }, {      0,      0,      0 }, 0x0607 },
    { ACTOR_BG_SPOT02_OBJECTS, {    762,    180,     80 }, {      0, 0XC000,      0 }, 0x0002 },
    { ACTOR_BG_SPOT02_OBJECTS, {   -578,    120,   -336 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_BG_SPOT02_OBJECTS, {    682,    180,    131 }, {      0, 0XC000,      0 }, 0x0004 },
    { ACTOR_BG_SPOT02_OBJECTS, {    684,    180,     86 }, {      0, 0XC000,      0 }, 0x0003 },
};

u8 spot02_room_1_possiblePadding_000B3C[] = {
    0x00, 0x00, 0x00, 0x00, 
};

SceneCmd spot02_room_1Set_000B40[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&spot02_room_1RoomShapeNormal_000340),
    SCENE_CMD_OBJECT_LIST(14, spot02_room_1ObjectList_000B80),
    SCENE_CMD_ACTOR_LIST(52, spot02_room_1ActorEntry_000B9C),
    SCENE_CMD_END(),
};

s16 spot02_room_1ObjectList_000B80[] = {
    OBJECT_SPOT02_OBJECTS,
    OBJECT_MJIN,
    OBJECT_MJIN_DARK,
    OBJECT_EFC_FLASH,
    OBJECT_SPOT01_OBJECTS,
    OBJECT_PO_COMPOSER,
    OBJECT_HAKA,
    OBJECT_MAMENOKI,
    OBJECT_TK,
    OBJECT_KANBAN,
    OBJECT_POH,
    OBJECT_GS,
    OBJECT_ST,
    OBJECT_KIBAKO2,
};

ActorEntry spot02_room_1ActorEntry_000B9C[] = {
    { ACTOR_BG_SPOT01_FUSYA,   {  -3200,    880,    150 }, {      0, 0XC000,      0 }, 0xFFFF },
    { ACTOR_EN_WONDER_TALK,    {    758,    219,     85 }, {      0, 0XC000,  0XFA5 }, 0x27FF },
    { ACTOR_EN_WONDER_TALK,    {    630,    199,   -100 }, {      0, 0XC000,  0XE39 }, 0x1FFF },
    { ACTOR_EN_WONDER_TALK,    {    630,    199,    260 }, {      0, 0XC000,  0XE39 }, 0x2FFF },
    { ACTOR_BG_MJIN,           {   1143,    340,     85 }, {      0, 0X1555,      0 }, 0x0002 },
    { ACTOR_EN_OKARINA_TAG,    {    602,    181,     80 }, {      0, 0XC000,      0 }, 0x1BFF },
    { ACTOR_OBJ_HANA,          {   -402,     60,    164 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_OBJ_HANA,          {   -402,     60,    196 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_OBJ_HANA,          {   -397,     60,    180 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_EN_IT,             {   -473,     60,    202 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_IT,             {   -473,     60,    502 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_IT,             {   -409,    120,   -234 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_IT,             {   -335,     60,    681 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_IT,             {   -177,    120,   -231 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_IT,             {     43,    120,   -108 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_IT,             {     48,    120,    222 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_IT,             {     48,    120,    535 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_OBJECT_KANKYO,     {    688,    180,     35 }, {      0, 0XC000,      0 }, 0x0004 },
    { ACTOR_EN_ISHI,           {  -1193,      0,    693 }, {      0,      0,      0 }, 0x0210 },
    { ACTOR_EN_KANBAN,         {  -1110,      0,    430 }, {      0, 0XC000,      0 }, 0x0334 },
    { ACTOR_OBJ_MURE2,         {  -1102,      0,    690 }, {      0,      0,      0 }, 0x0201 },
    { ACTOR_EN_WONDER_TALK2,   {   -805,     38,    264 }, {      0, 0XC000,   0X29 }, 0x0B3F },
    { ACTOR_EN_WONDER_TALK2,   {    603,    185,     80 }, {      0, 0XC000,   0X15 }, 0x0AFF },
    { ACTOR_OBJ_KIBAKO2,       {  -1050,    264,   -350 }, { 0XFFFF, 0X4000,      0 }, 0xFFFF },
    { ACTOR_BG_HAKA,           {   -458,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,     59 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,    299 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,    419 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,    539 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -338,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -218,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    -98,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {     22,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,   -177 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    -57 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    219 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    459 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    579 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    699 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,    179 }, {      0, 0XC000,      0 }, 0x0001 },
    { ACTOR_BG_HAKA,           {    155,    120,    339 }, {      0, 0XC000,      0 }, 0x0001 },
    { ACTOR_EN_TK,             {   -476,     61,    434 }, {      0, 0X8000,      0 }, 0x0000 },
    { ACTOR_EN_WEATHER_TAG,    {    728,    181,     80 }, {      0,      0,      0 }, 0x0607 },
    { ACTOR_BG_SPOT02_OBJECTS, {    762,    180,     80 }, {      0, 0XC000,      0 }, 0x0002 },
    { ACTOR_BG_SPOT02_OBJECTS, {   -578,    120,   -336 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_BG_SPOT02_OBJECTS, {    688,    180,    133 }, {      0, 0XC000,      0 }, 0x0004 },
    { ACTOR_BG_SPOT02_OBJECTS, {    689,    180,     86 }, {      0, 0XC000,      0 }, 0x0003 },
    { ACTOR_OBJ_MAKEKINSUTA,   {   -715,    120,   -340 }, {      0,      0,      0 }, 0x5101 },
    { ACTOR_OBJ_BEAN,          {   -715,    120,   -340 }, {      0,      0,      0 }, 0x1F03 },
    { ACTOR_EN_ITEM00,         {  -1050,    264,   -350 }, {      0,      0,      0 }, 0x0406 },
    { ACTOR_EN_GS,             {   1290,    340,    -75 }, {      0, 0XE000,      0 }, 0x380A },
    { ACTOR_EN_SW,             {    156,    315,    795 }, { 0X4000, 0X8000,      0 }, 0xB180 },
};

u8 spot02_room_1_possiblePadding_000EDC[] = {
    0x00, 0x00, 0x00, 0x00, 
};

SceneCmd spot02_room_1Set_000EE0[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&spot02_room_1RoomShapeNormal_000340),
    SCENE_CMD_OBJECT_LIST(11, spot02_room_1ObjectList_000F20),
    SCENE_CMD_ACTOR_LIST(31, spot02_room_1ActorEntry_000F38),
    SCENE_CMD_END(),
};

s16 spot02_room_1ObjectList_000F20[] = {
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

ActorEntry spot02_room_1ActorEntry_000F38[] = {
    { ACTOR_EN_BOX,            {  -1100,    264,   -300 }, {      0, 0XC000,      0 }, 0x07C0 },
    { ACTOR_EN_POH,            {   -330,    120,   -260 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_MJIN,           {   1145,    340,     85 }, {      0, 0X1555,      0 }, 0x0002 },
    { ACTOR_BG_HAKA,           {   -348,     60,     59 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,    179 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,    299 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,    419 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,    539 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    699 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    579 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    459 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    339 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    219 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    -57 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,   -177 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {     22,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    -98,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -218,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -338,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -458,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -578,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -764,    120,   -243 }, {      0, 0X4000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    664,    180,   -101 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    664,    180,    261 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_EN_TK,             {   -476,     61,    434 }, {      0, 0X8000,      0 }, 0x0000 },
    { ACTOR_BG_SPOT02_OBJECTS, {    762,    180,     80 }, {      0, 0XC000,      0 }, 0x0002 },
    { ACTOR_BG_SPOT02_OBJECTS, {   -578,    120,   -336 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_OBJ_BEAN,          {   -745,    120,   -450 }, {      0,      0,      0 }, 0x1F01 },
    { ACTOR_OBJECT_KANKYO,     {    851,    180,     49 }, {      0,      0,      0 }, 0x0004 },
    { ACTOR_BG_SPOT02_OBJECTS, {    849,    180,     96 }, {      0,      0,      0 }, 0x0003 },
    { ACTOR_BG_SPOT02_OBJECTS, {    849,    180,    130 }, {      0,      0,      0 }, 0x0004 },
};

u8 spot02_room_1_possiblePadding_001128[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

SceneCmd spot02_room_1Set_001130[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 1),
    SCENE_CMD_ROOM_SHAPE(&spot02_room_1RoomShapeNormal_000340),
    SCENE_CMD_OBJECT_LIST(12, spot02_room_1ObjectList_001170),
    SCENE_CMD_ACTOR_LIST(31, spot02_room_1ActorEntry_001188),
    SCENE_CMD_END(),
};

s16 spot02_room_1ObjectList_001170[] = {
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

ActorEntry spot02_room_1ActorEntry_001188[] = {
    { ACTOR_EN_BOX,            {  -1100,    264,   -300 }, {      0, 0XC000,      0 }, 0x07C0 },
    { ACTOR_EN_POH,            {   -330,    120,   -260 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_MJIN,           {   1145,    340,     85 }, {      0, 0X1555,      0 }, 0x0002 },
    { ACTOR_BG_HAKA,           {   -348,     60,     59 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,    179 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,    299 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,    419 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -348,     60,    539 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    699 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    579 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    459 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    339 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    219 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,    -57 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    155,    120,   -177 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {     22,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    -98,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -218,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -338,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -458,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -578,    120,   -336 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {   -764,    120,   -243 }, {      0, 0X4000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    664,    180,   -101 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_BG_HAKA,           {    664,    180,    261 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_EN_TK,             {   -476,     61,    434 }, {      0, 0X8000,      0 }, 0x0000 },
    { ACTOR_BG_SPOT02_OBJECTS, {    762,    180,     80 }, {      0, 0XC000,      0 }, 0x0002 },
    { ACTOR_BG_SPOT02_OBJECTS, {   -578,    120,   -336 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_OBJ_BEAN,          {   -745,    120,   -450 }, {      0,      0,      0 }, 0x1F01 },
    { ACTOR_OBJECT_KANKYO,     {    854,    321,     94 }, {      0,      0,      0 }, 0x0002 },
    { ACTOR_OBJECT_KANKYO,     {    851,    180,     49 }, {      0,      0,      0 }, 0x0004 },
    { ACTOR_BG_SPOT01_FUSYA,   {  -3200,    880,    150 }, {      0, 0XC000,      0 }, 0xFFFF },
};

u8 spot02_room_1_possiblePadding_001378[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx spot02_room_1Vtx_001380[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_001380.vtx.inc"
};

Gfx spot02_room_1DL_001DF0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_1Vtx_001380[159], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(spot02_room_1Tex_0143D8, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(0, spot02_room_1TLUT_008DB0),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_1Vtx_001380, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(spot02_room_1Tex_0133D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0, 225, 195, 205, 255),
    gsSPVertex(&spot02_room_1Vtx_001380[4], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&spot02_room_1Vtx_001380[20], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_014BD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 128, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 7, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&spot02_room_1Vtx_001380[24], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_012BD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&spot02_room_1Vtx_001380[28], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_0123D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_001380[40], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_014BD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 128, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 7, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_001380[44], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_0123D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_001380[48], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_014BD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 128, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 7, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_001380[56], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_0123D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_001380[60], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_012BD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_001380[68], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_0123D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_001380[72], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_012BD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_001380[76], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_0123D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_001380[80], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_012BD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_001380[84], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_0123D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_001380[100], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_012BD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_001380[104], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_0123D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_001380[108], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_012BD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_001380[112], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_0123D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_001380[116], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock_4b(spot02_room_1Tex_0143D8, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(0, spot02_room_1TLUT_008DB0),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&spot02_room_1Vtx_001380[120], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(spot02_room_1Tex_0123D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&spot02_room_1Vtx_001380[131], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_012BD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_001380[147], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_0026B8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_0026B8.vtx.inc"
};

Gfx spot02_room_1DL_002F38[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_1Vtx_0026B8[128], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_008DD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_1Vtx_0026B8, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_010BD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_0026B8[12], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_008DD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&spot02_room_1Vtx_0026B8[16], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_010BD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&spot02_room_1Vtx_0026B8[28], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
    gsSPVertex(&spot02_room_1Vtx_0026B8[32], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_010BD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&spot02_room_1Vtx_0026B8[36], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_008DD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_0026B8[40], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_010BD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_0026B8[44], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_00DFD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0, 210, 210, 180, 255),
    gsSPVertex(&spot02_room_1Vtx_0026B8[48], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP1Triangle(8, 11, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_0109D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&spot02_room_1Vtx_0026B8[61], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_00F1D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_0026B8[68], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(1, 4, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_0109D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_0026B8[73], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 7, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 6, 19, 4, 0),
    gsSP2Triangles(6, 20, 19, 0, 8, 20, 6, 0),
    gsSP2Triangles(10, 21, 8, 0, 21, 20, 8, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_00E9D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0, 235, 225, 195, 255),
    gsSPVertex(&spot02_room_1Vtx_0026B8[99], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_0101D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&spot02_room_1Vtx_0026B8[103], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsSP2Triangles(3, 2, 11, 0, 3, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 18, 16, 0, 12, 19, 18, 0),
    gsSP1Triangle(12, 14, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_0095D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_0026B8[123], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_003550[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_003550.vtx.inc"
};

Gfx spot02_room_1DL_003A90[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_1Vtx_003550[76], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_016C58, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsDPLoadMultiBlock(spot02_room_1Tex_00E1D8, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_1Vtx_003550, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 16, 19, 0, 18, 17, 16, 0),
    gsSP2Triangles(20, 7, 4, 0, 20, 4, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(24, 26, 18, 0, 24, 18, 25, 0),
    gsSP2Triangles(19, 25, 18, 0, 27, 22, 25, 0),
    gsSP2Triangles(27, 25, 19, 0, 22, 28, 29, 0),
    gsSP2Triangles(22, 29, 23, 0, 28, 30, 31, 0),
    gsSP1Triangle(28, 31, 29, 0),
    gsSPVertex(&spot02_room_1Vtx_003550[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 10, 0),
    gsSP2Triangles(10, 8, 7, 0, 11, 10, 9, 0),
    gsSP2Triangles(12, 10, 11, 0, 12, 11, 6, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 18, 15, 0, 18, 16, 15, 0),
    gsSP2Triangles(17, 19, 18, 0, 20, 19, 17, 0),
    gsSP2Triangles(19, 20, 14, 0, 14, 13, 19, 0),
    gsSP2Triangles(21, 12, 22, 0, 21, 22, 23, 0),
    gsSP2Triangles(23, 22, 24, 0, 23, 24, 25, 0),
    gsSP2Triangles(25, 24, 26, 0, 25, 26, 27, 0),
    gsSP2Triangles(12, 21, 27, 0, 12, 27, 26, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&spot02_room_1Vtx_003550[64], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_003C70[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_003C70.vtx.inc"
};

Gfx spot02_room_1DL_003DF0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_1Vtx_003C70[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_0113D8, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 221, 194, 153, 255),
    gsSPVertex(spot02_room_1Vtx_003C70, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_003EC0[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_003EC0.vtx.inc"
};

Gfx spot02_room_1DL_003FC0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_1Vtx_003EC0[8], 8, 0),
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
    gsSPVertex(spot02_room_1Vtx_003EC0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&spot02_room_1Vtx_003EC0[4], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_004098[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_004098.vtx.inc"
};

Gfx spot02_room_1DL_004178[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_1Vtx_004098[6], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_00DFD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_DECAL2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 210, 210, 180, 255),
    gsSPVertex(spot02_room_1Vtx_004098, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 4, 5, 1, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_004238[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_004238.vtx.inc"
};

Gfx spot02_room_1DL_004378[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_016C58, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_1Vtx_004238, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_018858, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_004238[4], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_004470[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_004470.vtx.inc"
};

Gfx spot02_room_1DL_004570[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_018858, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_1Vtx_004470, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_004618[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_004618.vtx.inc"
};

Gfx spot02_room_1DL_004638[] = {
    gsSPVertex(spot02_room_1Vtx_004618, 1, 0),
    gsSPBranchLessZraw(spot02_room_1DL_004378, 0, 0x00000118),
    gsSPVertex(&spot02_room_1Vtx_004618[1], 1, 0),
    gsSPBranchLessZraw(spot02_room_1DL_004570, 0, 0x17D78400),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_004670[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_004670.vtx.inc"
};

Gfx spot02_room_1DL_0047B0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_016C58, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_1Vtx_004670, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_018858, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_004670[4], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_0048A8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_0048A8.vtx.inc"
};

Gfx spot02_room_1DL_0049A8[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_018858, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_1Vtx_0048A8, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_004A50[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_004A50.vtx.inc"
};

Gfx spot02_room_1DL_004A70[] = {
    gsSPVertex(spot02_room_1Vtx_004A50, 1, 0),
    gsSPBranchLessZraw(spot02_room_1DL_0047B0, 0, 0x00000118),
    gsSPVertex(&spot02_room_1Vtx_004A50[1], 1, 0),
    gsSPBranchLessZraw(spot02_room_1DL_0049A8, 0, 0x17D78400),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_004AA8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_004AA8.vtx.inc"
};

Gfx spot02_room_1DL_004BE8[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_016C58, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_1Vtx_004AA8, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_018858, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_004AA8[4], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_004CE0[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_004CE0.vtx.inc"
};

Gfx spot02_room_1DL_004DE0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_018858, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_1Vtx_004CE0, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_004E88[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_004E88.vtx.inc"
};

Gfx spot02_room_1DL_004EA8[] = {
    gsSPVertex(spot02_room_1Vtx_004E88, 1, 0),
    gsSPBranchLessZraw(spot02_room_1DL_004BE8, 0, 0x00000118),
    gsSPVertex(&spot02_room_1Vtx_004E88[1], 1, 0),
    gsSPBranchLessZraw(spot02_room_1DL_004DE0, 0, 0x17D78400),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_004EE0[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_004EE0.vtx.inc"
};

Gfx spot02_room_1DL_005120[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_1Vtx_004EE0[28], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(spot02_room_1DL_004638),
    gsSPDisplayList(spot02_room_1DL_004A70),
    gsSPDisplayList(spot02_room_1DL_004EA8),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_016C58, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_1Vtx_004EE0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_018858, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_004EE0[4], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_00DBD8, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_OVL_SURF2),
    gsDPSetPrimColor(0, 0, 221, 194, 153, 255),
    gsSPVertex(&spot02_room_1Vtx_004EE0[20], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(3, 2, 7, 0, 3, 7, 6, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_0052E0[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_0052E0.vtx.inc"
};

Gfx spot02_room_1DL_005600[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_1Vtx_0052E0[42], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_015BD8, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 215, 204, 120, 255),
    gsSPVertex(spot02_room_1Vtx_0052E0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 9, 12, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 22, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 29, 30, 0),
    gsSPVertex(&spot02_room_1Vtx_0052E0[31], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_0056F8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_0056F8.vtx.inc"
};

Gfx spot02_room_1DL_005938[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_1Vtx_0056F8[28], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_00CBD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 230, 250, 150, 255),
    gsSPVertex(spot02_room_1Vtx_0056F8, 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(2, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 7, 9, 0),
    gsSP2Triangles(11, 9, 12, 0, 9, 13, 14, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 13, 15, 0),
    gsSP2Triangles(16, 15, 17, 0, 15, 18, 19, 0),
    gsSP2Triangles(18, 20, 21, 0, 22, 18, 21, 0),
    gsSP2Triangles(4, 3, 23, 0, 3, 24, 23, 0),
    gsSP1Triangle(25, 26, 27, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_005A30[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_005A30.vtx.inc"
};

Gfx spot02_room_1DL_006480[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_1Vtx_005A30[157], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_018858, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_1Vtx_005A30, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 9, 11, 0),
    gsSP1Triangle(10, 11, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_017458, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_005A30[13], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_018858, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_005A30[19], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 2, 0, 4, 2, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_017458, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_005A30[26], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_018858, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_005A30[34], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_017458, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_005A30[42], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_018858, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_005A30[46], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_017458, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_005A30[54], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(16, 17, 15, 0, 16, 15, 14, 0),
    gsSP2Triangles(18, 19, 17, 0, 18, 17, 16, 0),
    gsSP2Triangles(20, 21, 19, 0, 20, 19, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_018858, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_005A30[76], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 10, 0),
    gsSP2Triangles(11, 12, 10, 0, 11, 10, 13, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 16, 0),
    gsSP2Triangles(17, 18, 14, 0, 17, 14, 16, 0),
    gsSP2Triangles(19, 18, 17, 0, 19, 17, 20, 0),
    gsSP2Triangles(21, 22, 20, 0, 21, 20, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 24, 27, 0, 28, 27, 29, 0),
    gsSPVertex(&spot02_room_1Vtx_005A30[106], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_017458, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_005A30[110], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_018858, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_005A30[124], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_017458, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_005A30[134], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_018858, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_005A30[144], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 3, 2, 0, 4, 5, 3, 0),
    gsSP2Triangles(0, 6, 1, 0, 6, 7, 1, 0),
    gsSP2Triangles(8, 5, 4, 0, 9, 10, 6, 0),
    gsSP2Triangles(9, 6, 0, 0, 3, 5, 11, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_006A18[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_006A18.vtx.inc"
};

Gfx spot02_room_1DL_006B18[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_1Vtx_006A18[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(spot02_room_1Tex_00C3D8, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(0, spot02_room_1TLUT_008D88),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_1Vtx_006A18, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_006C08[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_006C08.vtx.inc"
};

Gfx spot02_room_1DL_006E48[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_1Vtx_006C08[28], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_00AFD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 215, 220, 210, 255),
    gsSPVertex(spot02_room_1Vtx_006C08, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_00BFD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_006C08[6], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_006F78[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_006F78.vtx.inc"
};

Gfx spot02_room_1DL_007078[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_1Vtx_006F78[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(spot02_room_1Tex_016BD8, G_IM_FMT_I, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 190, 190, 155, 255),
    gsSPVertex(spot02_room_1Vtx_006F78, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_007140[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_007140.vtx.inc"
};

Gfx spot02_room_1DL_007330[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_1Vtx_007140[23], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_00BFD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 215, 220, 210, 255),
    gsSPVertex(spot02_room_1Vtx_007140, 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 12, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_00A7D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_007140[19], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_007450[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_007450.vtx.inc"
};

Gfx spot02_room_1DL_007640[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_1Vtx_007450[23], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_00BFD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 215, 220, 210, 255),
    gsSPVertex(spot02_room_1Vtx_007450, 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 12, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_0097D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_007450[19], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_007760[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_007760.vtx.inc"
};

Gfx spot02_room_1DL_007860[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_1Vtx_007760[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_017858, G_IM_FMT_IA, G_IM_SIZ_8b, 128, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 7, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 248, 238, 205, 255),
    gsSPVertex(spot02_room_1Vtx_007760, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 0, 0, 6, 0, 3, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_007928[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_007928.vtx.inc"
};

Gfx spot02_room_1DL_008198[] = {
    gsDPPipeSync(),
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
    gsSPVertex(spot02_room_1Vtx_007928, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 16, 19, 0, 24, 19, 25, 0),
    gsSP2Triangles(26, 27, 20, 0, 26, 20, 23, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&spot02_room_1Vtx_007928[32], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_sceneTex_00B080, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPVertex(&spot02_room_1Vtx_007928[36], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(1, 3, 2, 0, 6, 4, 3, 0),
    gsSP2Triangles(3, 7, 6, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 10, 3, 0, 12, 3, 13, 0),
    gsSP2Triangles(1, 14, 3, 0, 13, 3, 14, 0),
    gsSP2Triangles(12, 15, 3, 0, 15, 11, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_sceneTex_00B880, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_007928[52], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_sceneTex_00AA80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_007928[58], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_sceneTex_00A280, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_007928[70], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_sceneTex_00B080, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_007928[76], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(spot02_sceneTex_00AE80, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&spot02_room_1Vtx_007928[86], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_sceneTex_008E80, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_007928[92], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 6, 9, 0, 10, 9, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(spot02_sceneTex_00AE80, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_007928[104], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(3, 2, 6, 0, 3, 6, 7, 0),
    gsSP2Triangles(5, 3, 7, 0, 5, 7, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_sceneTex_008E80, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_007928[113], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 6, 9, 0, 10, 9, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(spot02_sceneTex_00AE80, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_007928[125], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_sceneTex_007A80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_OVL_SURF2),
    gsSPVertex(&spot02_room_1Vtx_007928[131], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_0086E8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_0086E8.vtx.inc"
};

Gfx spot02_room_1DL_0089B8[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(spot02_sceneTex_00AE80, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_1Vtx_0086E8, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_sceneTex_008E80, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_0086E8[6], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(spot02_sceneTex_00AE80, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_0086E8[18], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(7, 8, 4, 0, 7, 4, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_sceneTex_008E80, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_0086E8[27], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(spot02_sceneTex_00AE80, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_0086E8[39], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_008BE0[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_008BE0.vtx.inc"
};

Gfx spot02_room_1DL_008C00[] = {
    gsSPVertex(spot02_room_1Vtx_008BE0, 1, 0),
    gsSPBranchLessZraw(spot02_room_1DL_008198, 0, 0x00000500),
    gsSPVertex(&spot02_room_1Vtx_008BE0[1], 1, 0),
    gsSPBranchLessZraw(spot02_room_1DL_0089B8, 0, 0x17D78400),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_008C38[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_008C38.vtx.inc"
};

Gfx spot02_room_1DL_008CB8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(spot02_room_1Vtx_008C38, 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(spot02_room_1DL_008C00),
    gsSPEndDisplayList(),
};

Gfx spot02_room_1DL_008CF8[] = {
    gsSPDisplayList(spot02_room_1DL_001DF0),
    gsSPDisplayList(spot02_room_1DL_002F38),
    gsSPDisplayList(spot02_room_1DL_003A90),
    gsSPDisplayList(spot02_room_1DL_003DF0),
    gsSPDisplayList(spot02_room_1DL_003FC0),
    gsSPDisplayList(spot02_room_1DL_004178),
    gsSPDisplayList(spot02_room_1DL_005120),
    gsSPDisplayList(spot02_room_1DL_005600),
    gsSPDisplayList(spot02_room_1DL_005938),
    gsSPDisplayList(spot02_room_1DL_006480),
    gsSPDisplayList(spot02_room_1DL_006B18),
    gsSPDisplayList(spot02_room_1DL_006E48),
    gsSPDisplayList(spot02_room_1DL_007078),
    gsSPDisplayList(spot02_room_1DL_007330),
    gsSPDisplayList(spot02_room_1DL_007640),
    gsSPDisplayList(spot02_room_1DL_007860),
    gsSPDisplayList(spot02_room_1DL_008CB8),
    gsSPEndDisplayList(),
};

u64 spot02_room_1TLUT_008D88[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1TLUT_008D88.rgba16.inc.c"
};

u8 spot02_room_1_possiblePadding_008DA8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 spot02_room_1TLUT_008DB0[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1TLUT_008DB0.rgba16.inc.c"
};

u8 spot02_room_1_possiblePadding_008DD0[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 spot02_room_1Tex_008DD8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_008DD8.rgba16.inc.c"
};

u64 spot02_room_1Tex_0095D8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_0095D8.rgba16.inc.c"
};

u64 spot02_room_1Tex_0097D8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_0097D8.rgba16.inc.c"
};

u64 spot02_room_1Tex_00A7D8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_00A7D8.rgba16.inc.c"
};

u64 spot02_room_1Tex_00AFD8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_00AFD8.rgba16.inc.c"
};

u64 spot02_room_1Tex_00BFD8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_00BFD8.rgba16.inc.c"
};

u64 spot02_room_1Tex_00C3D8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_00C3D8.ci4.inc.c"
};

u64 spot02_room_1Tex_00CBD8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_00CBD8.rgba16.inc.c"
};

u64 spot02_room_1Tex_00DBD8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_00DBD8.ia8.inc.c"
};

u64 spot02_room_1Tex_00DFD8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_00DFD8.rgba16.inc.c"
};

u64 spot02_room_1Tex_00E1D8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_00E1D8.rgba16.inc.c"
};

u64 spot02_room_1Tex_00E9D8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_00E9D8.rgba16.inc.c"
};

u64 spot02_room_1Tex_00F1D8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_00F1D8.rgba16.inc.c"
};

u64 spot02_room_1Tex_0101D8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_0101D8.rgba16.inc.c"
};

u64 spot02_room_1Tex_0109D8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_0109D8.rgba16.inc.c"
};

u64 spot02_room_1Tex_010BD8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_010BD8.rgba16.inc.c"
};

u64 spot02_room_1Tex_0113D8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_0113D8.ia8.inc.c"
};

u64 spot02_room_1Tex_0123D8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_0123D8.rgba16.inc.c"
};

u64 spot02_room_1Tex_012BD8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_012BD8.rgba16.inc.c"
};

u64 spot02_room_1Tex_0133D8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_0133D8.rgba16.inc.c"
};

u64 spot02_room_1Tex_0143D8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_0143D8.ci4.inc.c"
};

u64 spot02_room_1Tex_014BD8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_014BD8.rgba16.inc.c"
};

u64 spot02_room_1Tex_015BD8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_015BD8.i8.inc.c"
};

u64 spot02_room_1Tex_016BD8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_016BD8.i4.inc.c"
};

u64 spot02_room_1Tex_016C58[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_016C58.rgba16.inc.c"
};

u64 spot02_room_1Tex_017458[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_017458.rgba16.inc.c"
};

u64 spot02_room_1Tex_017858[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_017858.ia8.inc.c"
};

u64 spot02_room_1Tex_018858[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_018858.rgba16.inc.c"
};

u8 spot02_room_1_possiblePadding_019858[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx spot02_room_1Vtx_019860[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_019860.vtx.inc"
};

Gfx spot02_room_1DL_019E30[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_1Vtx_019860[85], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_01C660, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_OVL_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 215, 205, 165, 255),
    gsSPVertex(spot02_room_1Vtx_019860, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 17, 0, 20, 17, 16, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&spot02_room_1Vtx_019860[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 5, 4, 0, 12, 4, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(22, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&spot02_room_1Vtx_019860[61], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_019FA8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_019FA8.vtx.inc"
};

Gfx spot02_room_1DL_01A228[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_1Vtx_019FA8[32], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_01B560, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_OVL_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 221, 194, 153, 255),
    gsSPVertex(spot02_room_1Vtx_019FA8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_01A318[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_01A318.vtx.inc"
};

Gfx spot02_room_1DL_01A3D8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_1Vtx_01A318[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_01D660, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_OVL_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 221, 194, 153, 255),
    gsSPVertex(spot02_room_1Vtx_01A318, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_01A490[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_01A490.vtx.inc"
};

Gfx spot02_room_1DL_01A950[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_1Vtx_01A490[68], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_01C160, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_OVL_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 221, 194, 153, 255),
    gsSPVertex(spot02_room_1Vtx_01A490, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_01BD60, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot02_room_1Vtx_01A490[4], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&spot02_room_1Vtx_01A490[36], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot02_room_1Tex_01C660, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0, 215, 205, 165, 255),
    gsSPVertex(&spot02_room_1Vtx_01A490[64], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_01AB28[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_01AB28.vtx.inc"
};

Gfx spot02_room_1DL_01ABA8[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_01C560, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_1Vtx_01AB28, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 0, 0, 4, 0, 5, 0),
    gsSP2Triangles(6, 1, 3, 0, 6, 3, 4, 0),
    gsSP2Triangles(7, 2, 1, 0, 7, 1, 6, 0),
    gsSP2Triangles(5, 0, 2, 0, 5, 2, 7, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_01AC58[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_01AC58.vtx.inc"
};

Gfx spot02_room_1DL_01AC68[] = {
    gsSPVertex(spot02_room_1Vtx_01AC58, 1, 0),
    gsSPBranchLessZraw(spot02_room_1DL_01ABA8, 0, 0x00000118),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_01AC88[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_01AC88.vtx.inc"
};

Gfx spot02_room_1DL_01AD08[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_01C560, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_1Vtx_01AC88, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 6, 1, 0, 7, 1, 0, 0),
    gsSP2Triangles(1, 6, 4, 0, 1, 4, 2, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_01ADB8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_01ADB8.vtx.inc"
};

Gfx spot02_room_1DL_01ADC8[] = {
    gsSPVertex(spot02_room_1Vtx_01ADB8, 1, 0),
    gsSPBranchLessZraw(spot02_room_1DL_01AD08, 0, 0x00000118),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_01ADE8[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_01ADE8.vtx.inc"
};

Gfx spot02_room_1DL_01AE68[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_01C560, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_1Vtx_01ADE8, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 6, 1, 0, 7, 1, 0, 0),
    gsSP2Triangles(1, 6, 4, 0, 1, 4, 2, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_01AF18[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_01AF18.vtx.inc"
};

Gfx spot02_room_1DL_01AF28[] = {
    gsSPVertex(spot02_room_1Vtx_01AF18, 1, 0),
    gsSPBranchLessZraw(spot02_room_1DL_01AE68, 0, 0x00000118),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_01AF48[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_01AF48.vtx.inc"
};

Gfx spot02_room_1DL_01B048[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot02_room_1Vtx_01AF48[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(spot02_room_1DL_01AC68),
    gsSPDisplayList(spot02_room_1DL_01ADC8),
    gsSPDisplayList(spot02_room_1DL_01AF28),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot02_room_1Tex_01C560, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_1Vtx_01AF48, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 6, 1, 0, 7, 1, 0, 0),
    gsSP2Triangles(1, 6, 4, 0, 1, 4, 2, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_01B140[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_01B140.vtx.inc"
};

Gfx spot02_room_1DL_01B370[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(spot02_sceneTex_009E80, G_IM_FMT_IA, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_OVL_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot02_room_1Vtx_01B140, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(30, 31, 11, 0),
    gsSPVertex(&spot02_room_1Vtx_01B140[32], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_01B438[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_01B438.vtx.inc"
};

Gfx spot02_room_1DL_01B448[] = {
    gsSPVertex(spot02_room_1Vtx_01B438, 1, 0),
    gsSPBranchLessZraw(spot02_room_1DL_01B370, 0, 0x00000500),
    gsSPEndDisplayList(),
};

Vtx spot02_room_1Vtx_01B468[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Vtx_01B468.vtx.inc"
};

Gfx spot02_room_1DL_01B4E8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(spot02_room_1Vtx_01B468, 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(spot02_room_1DL_01B448),
    gsSPEndDisplayList(),
};

Gfx spot02_room_1DL_01B528[] = {
    gsSPDisplayList(spot02_room_1DL_019E30),
    gsSPDisplayList(spot02_room_1DL_01A228),
    gsSPDisplayList(spot02_room_1DL_01A3D8),
    gsSPDisplayList(spot02_room_1DL_01A950),
    gsSPDisplayList(spot02_room_1DL_01B048),
    gsSPDisplayList(spot02_room_1DL_01B4E8),
    gsSPEndDisplayList(),
};

u64 spot02_room_1Tex_01B560[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_01B560.ia8.inc.c"
};

u64 spot02_room_1Tex_01BD60[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_01BD60.ia8.inc.c"
};

u64 spot02_room_1Tex_01C160[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_01C160.ia8.inc.c"
};

u64 spot02_room_1Tex_01C560[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_01C560.ia8.inc.c"
};

u64 spot02_room_1Tex_01C660[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_01C660.ia8.inc.c"
};

u64 spot02_room_1Tex_01D660[] = {
#include "assets/scenes/overworld/spot02/spot02_room_1Tex_01D660.ia8.inc.c"
};

