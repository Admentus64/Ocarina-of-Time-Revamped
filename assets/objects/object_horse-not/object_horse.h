#ifndef object_horse_H
#define object_horse_H 1

typedef enum ObjectHorseLinkChildLimb {
    /* 0x00 */ object_horse_LIMB_NONE,
    /* 0x01 */ object_horse_LIMB_01,
    /* 0x02 */ object_horse_LIMB_02,
    /* 0x03 */ object_horse_LIMB_03,
    /* 0x04 */ object_horse_LIMB_04,
    /* 0x05 */ object_horse_LIMB_05,
    /* 0x06 */ object_horse_LIMB_06,
    /* 0x07 */ object_horse_LIMB_07,
    /* 0x08 */ object_horse_LIMB_08,
    /* 0x09 */ object_horse_LIMB_09,
    /* 0x0A */ object_horse_LIMB_0A,
    /* 0x0B */ object_horse_LIMB_0B,
    /* 0x0C */ object_horse_LIMB_0C,
    /* 0x0D */ object_horse_LIMB_0D,
    /* 0x0E */ object_horse_LIMB_0E,
    /* 0x0F */ object_horse_LIMB_0F,
    /* 0x10 */ object_horse_LIMB_10,
    /* 0x11 */ object_horse_LIMB_11,
    /* 0x12 */ object_horse_LIMB_12,
    /* 0x13 */ object_horse_LIMB_13,
    /* 0x14 */ object_horse_LIMB_14,
    /* 0x15 */ object_horse_LIMB_15,
    /* 0x16 */ object_horse_LIMB_16,
    /* 0x17 */ object_horse_LIMB_17,
    /* 0x18 */ object_horse_LIMB_18,
    /* 0x19 */ object_horse_LIMB_19,
    /* 0x1A */ object_horse_LIMB_1A,
    /* 0x1B */ object_horse_LIMB_1B,
    /* 0x1C */ object_horse_LIMB_1C,
    /* 0x1D */ object_horse_LIMB_1D,
    /* 0x1E */ object_horse_LIMB_1E,
    /* 0x1F */ object_horse_LIMB_1F,
    /* 0x20 */ object_horse_LIMB_20,
    /* 0x21 */ object_horse_LIMB_21,
    /* 0x22 */ object_horse_LIMB_22,
    /* 0x23 */ object_horse_LIMB_23,
    /* 0x24 */ object_horse_LIMB_24,
    /* 0x25 */ object_horse_LIMB_25,
    /* 0x26 */ object_horse_LIMB_26,
    /* 0x27 */ object_horse_LIMB_27,
    /* 0x28 */ object_horse_LIMB_28,
    /* 0x29 */ object_horse_LIMB_29,
    /* 0x2A */ object_horse_LIMB_2A,
    /* 0x2B */ object_horse_LIMB_2B,
    /* 0x2C */ object_horse_LIMB_2C,
    /* 0x2D */ object_horse_LIMB_2D,
    /* 0x2E */ object_horse_LIMB_2E,
    /* 0x2F */ object_horse_LIMB_MAX
} ObjectHorseLinkChildLimb;

extern Vtx object_horseVtx_000000[];
extern Gfx object_horse_DL_000C70[];
extern Gfx object_horse_DL_001028[];
extern Gfx object_horse_DL_0010D8[];
extern Gfx object_horse_DL_0011E8[];
extern Gfx object_horse_DL_001298[];
extern Gfx object_horse_DL_0013A8[];
extern Gfx object_horse_DL_0014B8[];
extern Gfx object_horse_DL_001568[];
extern Gfx object_horse_DL_001678[];
extern u64 gEponaTLUT[];
extern u64 gEponaEyeHalfTex[];
extern u64 gEponaEyeClosedTex[];
extern u64 gEponaEyeOpenTex[];
extern u64 object_horse_Tex_001F28[];
extern u64 object_horse_Tex_001F68[];
extern u64 object_horse_Tex_002168[];
extern u64 object_horse_Tex_002368[];
extern u64 object_horse_Tex_002568[];
extern u64 object_horse_Tex_002588[];
extern u64 object_horse_Tex_002788[];
extern s16 sEponaGallopAnimFrameData[];
extern JointIndex sEponaGallopAnimJointIndices[];
extern AnimationHeader gEponaGallopAnim;
extern s16 object_horse_Anim_0035B0FrameData[];
extern JointIndex object_horse_Anim_0035B0JointIndices[];
extern AnimationHeader object_horse_Anim_0035B0;
extern s16 object_horse_Anim_003D38FrameData[];
extern JointIndex object_horse_Anim_003D38JointIndices[];
extern AnimationHeader object_horse_Anim_003D38;
extern s16 sEponaTrotAnimFrameData[];
extern JointIndex sEponaTrotAnimJointIndices[];
extern AnimationHeader gEponaTrotAnim;
extern s16 object_horse_Anim_004DE8FrameData[];
extern JointIndex object_horse_Anim_004DE8JointIndices[];
extern AnimationHeader object_horse_Anim_004DE8;
extern s16 object_horse_Anim_005F64FrameData[];
extern JointIndex object_horse_Anim_005F64JointIndices[];
extern AnimationHeader object_horse_Anim_005F64;
extern s16 sEponaIdleAnimFrameData[];
extern JointIndex sEponaIdleAnimJointIndices[];
extern AnimationHeader gEponaIdleAnim;
extern s16 sEponaWhinnyAnimFrameData[];
extern JointIndex sEponaWhinnyAnimJointIndices[];
extern AnimationHeader gEponaWhinnyAnim;
extern s16 sEponaWalkAnimFrameData[];
extern JointIndex sEponaWalkAnimJointIndices[];
extern AnimationHeader gEponaWalkAnim;
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007D60[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007D74[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007D94[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007DA8[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007DBC[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007DC8[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007DD4[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007DF4[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007E14[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007E28[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007E48[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007E5C[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007E90[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007EA4[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007EB0[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007ED0[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007EF0[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007F04[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007F24[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007F38[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007F4C[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007F60[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007F6C[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007F80[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007F94[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007FA8[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007FC8[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007FE8[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_007FFC[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_00801C[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008030[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_00803C[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008050[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_00805C[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_00807C[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008090[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0080A4[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0080B8[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0080D8[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0080F8[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008104[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008118[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008138[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_00814C[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_00816C[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008180[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0081A0[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0081B4[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0081C8[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0081E8[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008208[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008214[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008228[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008248[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008268[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008288[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_00829C[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0082B0[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0082BC[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0082C8[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0082D4[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0082E8[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0082FC[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008308[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_00831C[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008328[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_00833C[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008350[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008364[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008378[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_00838C[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0083AC[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0083C0[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0083E0[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008414[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_00843C[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_00845C[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008470[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008484[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008490[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0084A4[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0084B0[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0084C4[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0084D0[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0084E4[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0084F0[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008504[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008524[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008530[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_00853C[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008550[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008564[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008578[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_00858C[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0085AC[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0085CC[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0085E0[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0085F4[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008608[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008628[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_00863C[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008650[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008664[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008678[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008684[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008690[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_00869C[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0086A8[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0086B4[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0086C8[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0086F0[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008710[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008738[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_00874C[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008760[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008780[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0087A8[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0087BC[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0087C8[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0087DC[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_0087F0[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008804[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008818[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_00882C[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008854[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_008868[];
extern SkinTransformation object_horse_Skinlimb_00A138SkinTransformation_00887C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00889C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0088C4[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0088E4[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008904[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008918[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00892C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00894C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00896C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00898C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0089AC[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0089E0[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008A00[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008A28[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008A50[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008A78[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008A98[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008AB8[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008AD8[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008B0C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008B34[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008B5C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008B84[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008B90[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008BB0[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008BD0[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008BF0[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008C18[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008C2C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008C40[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008C68[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008C88[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008C9C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008CA8[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008CBC[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008CDC[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008CF0[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008D24[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008D44[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008D64[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008D78[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008D8C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008DAC[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008DD4[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008E08[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008E28[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008E50[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008E70[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008E98[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008EB8[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008EE0[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008F14[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008F3C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008F5C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008F84[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008F98[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008FC0[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008FE0[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_008FF4[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009028[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00905C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00907C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00909C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0090B0[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0090EC[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009100[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00910C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00912C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00914C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00916C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009194[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0091BC[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0091E4[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0091F8[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00920C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009220[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009248[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009284[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0092A4[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0092B8[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0092E0[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009314[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009328[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00933C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009378[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00938C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0093C0[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0093D4[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009408[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009428[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009450[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009478[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00948C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0094C8[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0094F0[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009504[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00952C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00954C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00956C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00958C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0095B4[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0095DC[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009604[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00962C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009640[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009654[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009668[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00967C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009688[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009694[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0096A8[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0096B4[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0096C0[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0096CC[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0096E0[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009700[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009734[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009754[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00977C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009790[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0097CC[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0097F4[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009800[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009828[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_00985C[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_009884[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0098AC[];
extern SkinVertex object_horse_Skinlimb_00A138SkinVertex_0098B8[];
extern SkinLimbModif object_horse_Skinlimb_00A138SkinLimbModif_0098EC[];
extern SkinAnimatedLimbData object_horse_Skinlimb_00A138SkinAnimatedLimbData_00A0DC;
extern SkinLimb object_horse_Skinlimb_00A0E8;
extern SkinLimb object_horse_Skinlimb_00A0F8;
extern SkinLimb object_horse_Skinlimb_00A108;
extern SkinLimb object_horse_Skinlimb_00A118;
extern SkinLimb object_horse_Skinlimb_00A128;
extern SkinLimb object_horse_Skinlimb_00A138;
extern SkinLimb object_horse_Skinlimb_00A148;
extern SkinLimb object_horse_Skinlimb_00A158;
extern SkinLimb object_horse_Skinlimb_00A168;
extern SkinLimb object_horse_Skinlimb_00A178;
extern SkinLimb object_horse_Skinlimb_00A188;
extern SkinLimb object_horse_Skinlimb_00A198;
extern SkinLimb object_horse_Skinlimb_00A1A8;
extern SkinLimb object_horse_Skinlimb_00A1B8;
extern SkinLimb object_horse_Skinlimb_00A1C8;
extern SkinLimb object_horse_Skinlimb_00A1D8;
extern SkinLimb object_horse_Skinlimb_00A1E8;
extern SkinLimb object_horse_Skinlimb_00A1F8;
extern SkinLimb object_horse_Skinlimb_00A208;
extern SkinLimb object_horse_Skinlimb_00A218;
extern SkinLimb object_horse_Skinlimb_00A228;
extern SkinLimb object_horse_Skinlimb_00A238;
extern SkinLimb object_horse_Skinlimb_00A248;
extern SkinLimb object_horse_Skinlimb_00A258;
extern SkinLimb object_horse_Skinlimb_00A268;
extern SkinLimb object_horse_Skinlimb_00A278;
extern SkinLimb object_horse_Skinlimb_00A288;
extern SkinLimb object_horse_Skinlimb_00A298;
extern SkinLimb object_horse_Skinlimb_00A2A8;
extern SkinLimb object_horse_Skinlimb_00A2B8;
extern SkinLimb object_horse_Skinlimb_00A2C8;
extern SkinLimb object_horse_Skinlimb_00A2D8;
extern SkinLimb object_horse_Skinlimb_00A2E8;
extern SkinLimb object_horse_Skinlimb_00A2F8;
extern SkinLimb object_horse_Skinlimb_00A308;
extern SkinLimb object_horse_Skinlimb_00A318;
extern SkinLimb object_horse_Skinlimb_00A328;
extern SkinLimb object_horse_Skinlimb_00A338;
extern SkinLimb object_horse_Skinlimb_00A348;
extern SkinLimb object_horse_Skinlimb_00A358;
extern SkinLimb object_horse_Skinlimb_00A368;
extern SkinLimb object_horse_Skinlimb_00A378;
extern SkinLimb object_horse_Skinlimb_00A388;
extern SkinLimb object_horse_Skinlimb_00A398;
extern SkinLimb object_horse_Skinlimb_00A3A8;
extern SkinLimb object_horse_Skinlimb_00A3B8;
extern void* gEponaSkelLimbs[];
extern SkeletonHeader gEponaSkel;
extern s16 object_horse_Anim_00A8DCFrameData[];
extern JointIndex object_horse_Anim_00A8DCJointIndices[];
extern AnimationHeader object_horse_Anim_00A8DC;
extern s16 object_horse_Anim_00AD08FrameData[];
extern JointIndex object_horse_Anim_00AD08JointIndices[];
extern AnimationHeader object_horse_Anim_00AD08;
extern s16 object_horse_Anim_00B3E0FrameData[];
extern JointIndex object_horse_Anim_00B3E0JointIndices[];
extern AnimationHeader object_horse_Anim_00B3E0;
extern s16 object_horse_Anim_00BDE0FrameData[];
extern JointIndex object_horse_Anim_00BDE0JointIndices[];
extern AnimationHeader object_horse_Anim_00BDE0;
extern s16 object_horse_Anim_00D178FrameData[];
extern JointIndex object_horse_Anim_00D178JointIndices[];
extern AnimationHeader object_horse_Anim_00D178;
extern s16 object_horse_Anim_00D4E8FrameData[];
extern JointIndex object_horse_Anim_00D4E8JointIndices[];
extern AnimationHeader object_horse_Anim_00D4E8;
extern Gfx object_horse_DL_00D500[];
extern u64 object_horse_Tex_00DAF0[];
extern u64 object_horse_Tex_00DCF0[];
#endif
