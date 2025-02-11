#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_oB4.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

u64 object_oB4Tex_007DB0[] = {
#include "assets/objects/object_oB4/object_oB4Tex_007DB0.rgba16.inc.c"
};

Vtx object_oB4Vtx_0085B0[] = {
#include "assets/objects/object_oB4/object_oB4Vtx_0085B0.vtx.inc"
};

Gfx gShadowTrialPathDL_new[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_oB4Tex_007DB0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 127),
    gsSPVertex(object_oB4Vtx_0085B0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(19, 22, 23, 0, 19, 23, 20, 0),
    gsSP2Triangles(18, 21, 24, 0, 18, 24, 25, 0),
    gsSP2Triangles(24, 26, 27, 0, 24, 27, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&object_oB4Vtx_0085B0[32], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

u64 object_oB4Tex_00B540[] = {
#include "assets/objects/object_oB4/object_oB4Tex_00B540.ia16.inc.c"
};

Vtx object_oB4Vtx_00BD40[] = {
#include "assets/objects/object_oB4/object_oB4Vtx_00BD40.vtx.inc"
};

Gfx gClearBlockDL_new[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_oB4Tex_00B540, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 198, 202, 208, 178),
    gsSPVertex(object_oB4Vtx_00BD40, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSPEndDisplayList(),
};

BgCamInfo gClearBlockColCamDataList_new[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gClearBlockColSurfaceType_new[] = {
    {0x00000000, 0x000007C2},
};

CollisionPoly gClearBlockColPolygons_new[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x8001, 0x0000, 0xFE70},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x8001, 0x0000, 0xFE70},
    {0x0000, 0x0004, 0x0003, 0x0002, 0x8001, 0x0000, 0x0000, 0xFE0C},
    {0x0000, 0x0004, 0x0002, 0x0005, 0x8001, 0x0000, 0x0000, 0xFE0C},
    {0x0000, 0x0005, 0x0002, 0x0001, 0x0000, 0x0000, 0x7FFF, 0xFE0C},
    {0x0000, 0x0005, 0x0001, 0x0006, 0x0000, 0x0000, 0x7FFF, 0xFE0C},
    {0x0000, 0x0006, 0x0001, 0x0000, 0x7FFF, 0x0000, 0x0000, 0xFE0C},
    {0x0000, 0x0006, 0x0000, 0x0007, 0x7FFF, 0x0000, 0x0000, 0xFE0C},
    {0x0000, 0x0007, 0x0000, 0x0003, 0x0000, 0x0000, 0x8001, 0xFE0C},
    {0x0000, 0x0007, 0x0003, 0x0004, 0x0000, 0x0000, 0x8001, 0xFE0C},
    {0x0000, 0x0004, 0x0005, 0x0006, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0004, 0x0006, 0x0007, 0x0000, 0x7FFF, 0x0000, 0x0000},
};

Vec3s gClearBlockColVertices_new[] = {
    {    500,   -400,   -500 },
    {    500,   -400,    500 },
    {   -500,   -400,    500 },
    {   -500,   -400,   -500 },
    {   -500,      0,   -500 },
    {   -500,      0,    500 },
    {    500,      0,    500 },
    {    500,      0,   -500 },
};

CollisionHeader gClearBlockCol_new = { 
    { -500, -400, -500 },
    { 500, 0, 500 },
    ARRAY_COUNT(gClearBlockColVertices_new), gClearBlockColVertices_new,
    ARRAY_COUNT(gClearBlockColPolygons_new), gClearBlockColPolygons_new,
    gClearBlockColSurfaceType_new,
    gClearBlockColCamDataList_new,
    0, NULL
};
