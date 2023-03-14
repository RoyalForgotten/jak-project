#pragma once
/*!
 * Matches the bucket-id enum in GOAL
 */
namespace jak1 {
enum class BucketId {
  BUCKET0 = 0,
  BUCKET1 = 1,
  // 2
  SKY_DRAW = 3,
  OCEAN_MID_AND_FAR = 4,
  TFRAG_TEX_LEVEL0 = 5,
  TFRAG_LEVEL0 = 6,
  TFRAG_NEAR_LEVEL0 = 7,
  TIE_NEAR_LEVEL0 = 8,
  TIE_LEVEL0 = 9,
  MERC_TFRAG_TEX_LEVEL0 = 10,
  GENERIC_TFRAG_TEX_LEVEL0 = 11,
  TFRAG_TEX_LEVEL1 = 12,
  TFRAG_LEVEL1 = 13,
  TFRAG_NEAR_LEVEL1 = 14,
  TIE_NEAR_LEVEL1 = 15,
  TIE_LEVEL1 = 16,
  MERC_TFRAG_TEX_LEVEL1 = 17,
  GENERIC_TFRAG_TEX_LEVEL1 = 18,
  SHRUB_TEX_LEVEL0 = 19,
  SHRUB_NORMAL_LEVEL0 = 20,
  // 21
  SHRUB_BILLBOARD_LEVEL0 = 22,
  SHRUB_TRANS_LEVEL0 = 23,
  SHRUB_GENERIC_LEVEL0 = 24,
  SHRUB_TEX_LEVEL1 = 25,
  SHRUB_NORMAL_LEVEL1 = 26,
  // 27
  SHRUB_BILLBOARD_LEVEL1 = 28,
  SHRUB_TRANS_LEVEL1 = 29,
  SHRUB_GENERIC_LEVEL1 = 30,
  ALPHA_TEX_LEVEL0 = 31,
  TFRAG_TRANS0_AND_SKY_BLEND_LEVEL0 = 32,
  // 33
  TFRAG_DIRT_LEVEL0 = 34,
  // 35
  TFRAG_ICE_LEVEL0 = 36,
  // 37
  ALPHA_TEX_LEVEL1 = 38,
  TFRAG_TRANS1_AND_SKY_BLEND_LEVEL1 = 39,
  // 40
  TFRAG_DIRT_LEVEL1 = 41,
  // 42
  TFRAG_ICE_LEVEL1 = 43,
  // 44
  MERC_AFTER_ALPHA = 45,
  GENERIC_ALPHA = 46,
  SHADOW = 47,
  PRIS_TEX_LEVEL0 = 48,
  MERC_PRIS_LEVEL0 = 49,
  GENERIC_PRIS_LEVEL0 = 50,
  PRIS_TEX_LEVEL1 = 51,
  MERC_PRIS_LEVEL1 = 52,
  GENERIC_PRIS_LEVEL1 = 53,
  MERC_EYES_AFTER_PRIS = 54,
  MERC_AFTER_PRIS = 55,
  GENERIC_PRIS = 56,
  WATER_TEX_LEVEL0 = 57,
  MERC_WATER_LEVEL0 = 58,
  GENERIC_WATER_LEVEL0 = 59,
  WATER_TEX_LEVEL1 = 60,
  MERC_WATER_LEVEL1 = 61,
  GENERIC_WATER_LEVEL1 = 62,
  OCEAN_NEAR = 63,
  DEPTH_CUE = 64,
  PRE_SPRITE_TEX = 65,  // maybe it's just common textures?
  SPRITE = 66,
  DEBUG = 67,
  DEBUG_NO_ZBUF = 68,
  SUBTITLE = 69,
  MAX_BUCKETS = 70
};
}

namespace jak2 {

enum class BucketId {
  BUCKET_0,
  BUCKET_1,
  BUCKET_2,
  BUCKET_3,
  TEX_LCOM_SKY_PRE,
  SKY_DRAW,
  OCEAN_MID_FAR,
  TEX_L0_TFRAG,
  TFRAG_L0_TFRAG,
  TIE_L0_TFRAG,
  ETIE_L0_TFRAG,
  TFRAG_S_L0_TFRAG,
  TIE_S_L0_TFRAG,
  ETIE_S_L0_TFRAG,
  MERC_L0_TFRAG,
  EMERC_L0_TFRAG,
  GMERC_L0_TFRAG,
  TIE_V_L0_TFRAG,
  TEX_L1_TFRAG,
  TFRAG_L1_TFRAG,
  TIE_L1_TFRAG,
  ETIE_L1_TFRAG,
  TFRAG_S_L1_TFRAG,
  TIE_S_L1_TFRAG,
  ETIE_S_L1_TFRAG,
  MERC_L1_TFRAG,
  EMERC_L1_TFRAG,
  GMERC_L1_TFRAG,
  TIE_V_L1_TFRAG,
  TEX_L2_TFRAG,
  TFRAG_L2_TFRAG,
  TIE_L2_TFRAG,
  ETIE_L2_TFRAG,
  TFRAG_S_L2_TFRAG,
  TIE_S_L2_TFRAG,
  ETIE_S_L2_TFRAG,
  MERC_L2_TFRAG,
  EMERC_L2_TFRAG,
  GMERC_L2_TFRAG,
  TIE_V_L2_TFRAG,
  TEX_L3_TFRAG,
  TFRAG_L3_TFRAG,
  TIE_L3_TFRAG,
  ETIE_L3_TFRAG,
  TFRAG_S_L3_TFRAG,
  TIE_S_L3_TFRAG,
  ETIE_S_L3_TFRAG,
  MERC_L3_TFRAG,
  EMERC_L3_TFRAG,
  GMERC_L3_TFRAG,
  TIE_V_L3_TFRAG,
  TEX_L4_TFRAG,
  TFRAG_L4_TFRAG,
  TIE_L4_TFRAG,
  ETIE_L4_TFRAG,
  TFRAG_S_L4_TFRAG,
  TIE_S_L4_TFRAG,
  ETIE_S_L4_TFRAG,
  MERC_L4_TFRAG,
  EMERC_L4_TFRAG,
  GMERC_L4_TFRAG,
  TIE_V_L4_TFRAG,
  TEX_L5_TFRAG,
  TFRAG_L5_TFRAG,
  TIE_L5_TFRAG,
  ETIE_L5_TFRAG,
  TFRAG_S_L5_TFRAG,
  TIE_S_L5_TFRAG,
  ETIE_S_L5_TFRAG,
  MERC_L5_TFRAG,
  EMERC_L5_TFRAG,
  GMERC_L5_TFRAG,
  TIE_V_L5_TFRAG,
  TEX_L6_TFRAG,
  TFRAG_L6_TFRAG,
  TIE_L6_TFRAG,
  ETIE_L6_TFRAG,
  TFRAG_S_L6_TFRAG,
  TIE_S_L6_TFRAG,
  ETIE_S_L6_TFRAG,
  MERC_L6_TFRAG,
  EMERC_L6_TFRAG,
  GMERC_L6_TFRAG,
  TIE_V_L6_TFRAG,
  TEX_L7_TFRAG,
  TFRAG_L7_TFRAG,
  TIE_L7_TFRAG,
  ETIE_L7_TFRAG,
  TFRAG_S_L7_TFRAG,
  TIE_S_L7_TFRAG,
  ETIE_S_L7_TFRAG,
  MERC_L7_TFRAG,
  EMERC_L7_TFRAG,
  GMERC_L7_TFRAG,
  TIE_V_L7_TFRAG,
  TEX_L0_SHRUB,
  SHRUB_L0_SHRUB,
  SHRUB_N_L0_SHRUB,
  BILLBOARD_L0_SHRUB,
  SHRUB_V_L0_SHRUB,
  SHRUB_NT_L0_SHRUB,
  MERC_L0_SHRUB,
  EMERC_L0_SHRUB,
  GMERC_L0_SHRUB,
  TEX_L1_SHRUB,
  SHRUB_L1_SHRUB,
  SHRUB_N_L1_SHRUB,
  BILLBOARD_L1_SHRUB,
  SHRUB_V_L1_SHRUB,
  SHRUB_NT_L1_SHRUB,
  MERC_L1_SHRUB,
  EMERC_L1_SHRUB,
  GMERC_L1_SHRUB,
  TEX_L2_SHRUB,
  SHRUB_L2_SHRUB,
  SHRUB_N_L2_SHRUB,
  BILLBOARD_L2_SHRUB,
  SHRUB_V_L2_SHRUB,
  SHRUB_NT_L2_SHRUB,
  MERC_L2_SHRUB,
  EMERC_L2_SHRUB,
  GMERC_L2_SHRUB,
  TEX_L3_SHRUB,
  SHRUB_L3_SHRUB,
  SHRUB_N_L3_SHRUB,
  BILLBOARD_L3_SHRUB,
  SHRUB_V_L3_SHRUB,
  SHRUB_NT_L3_SHRUB,
  MERC_L3_SHRUB,
  EMERC_L3_SHRUB,
  GMERC_L3_SHRUB,
  TEX_L4_SHRUB,
  SHRUB_L4_SHRUB,
  SHRUB_N_L4_SHRUB,
  BILLBOARD_L4_SHRUB,
  SHRUB_V_L4_SHRUB,
  SHRUB_NT_L4_SHRUB,
  MERC_L4_SHRUB,
  EMERC_L4_SHRUB,
  GMERC_L4_SHRUB,
  TEX_L5_SHRUB,
  SHRUB_L5_SHRUB,
  SHRUB_N_L5_SHRUB,
  BILLBOARD_L5_SHRUB,
  SHRUB_V_L5_SHRUB,
  SHRUB_NT_L5_SHRUB,
  MERC_L5_SHRUB,
  EMERC_L5_SHRUB,
  GMERC_L5_SHRUB,
  TEX_L6_SHRUB,
  SHRUB_L6_SHRUB,
  SHRUB_N_L6_SHRUB,
  BILLBOARD_L6_SHRUB,
  SHRUB_V_L6_SHRUB,
  SHRUB_NT_L6_SHRUB,
  MERC_L6_SHRUB,
  EMERC_L6_SHRUB,
  GMERC_L6_SHRUB,
  TEX_L7_SHRUB,
  SHRUB_L7_SHRUB,
  SHRUB_N_L7_SHRUB,
  BILLBOARD_L7_SHRUB,
  SHRUB_V_L7_SHRUB,
  SHRUB_NT_L7_SHRUB,
  MERC_L7_SHRUB,
  EMERC_L7_SHRUB,
  GMERC_L7_SHRUB,
  TEX_L0_ALPHA,
  TFRAG_T_L0_ALPHA,
  TIE_T_L0_ALPHA,
  ETIE_T_L0_ALPHA,
  MERC_L0_ALPHA,
  EMERC_L0_ALPHA,
  GMERC_L0_ALPHA,
  TFRAG_ST_L0_ALPHA,
  TIE_ST_L0_ALPHA,
  ETIE_ST_L0_ALPHA,
  TEX_L1_ALPHA,
  TFRAG_T_L1_ALPHA,
  TIE_T_L1_ALPHA,
  ETIE_T_L1_ALPHA,
  MERC_L1_ALPHA,
  EMERC_L1_ALPHA,
  GMERC_L1_ALPHA,
  TFRAG_ST_L1_ALPHA,
  TIE_ST_L1_ALPHA,
  ETIE_ST_L1_ALPHA,
  TEX_L2_ALPHA,
  TFRAG_T_L2_ALPHA,
  TIE_T_L2_ALPHA,
  ETIE_T_L2_ALPHA,
  MERC_L2_ALPHA,
  EMERC_L2_ALPHA,
  GMERC_L2_ALPHA,
  TFRAG_ST_L2_ALPHA,
  TIE_ST_L2_ALPHA,
  ETIE_ST_L2_ALPHA,
  TEX_L3_ALPHA,
  TFRAG_T_L3_ALPHA,
  TIE_T_L3_ALPHA,
  ETIE_T_L3_ALPHA,
  MERC_L3_ALPHA,
  EMERC_L3_ALPHA,
  GMERC_L3_ALPHA,
  TFRAG_ST_L3_ALPHA,
  TIE_ST_L3_ALPHA,
  ETIE_ST_L3_ALPHA,
  TEX_L4_ALPHA,
  TFRAG_T_L4_ALPHA,
  TIE_T_L4_ALPHA,
  ETIE_T_L4_ALPHA,
  MERC_L4_ALPHA,
  EMERC_L4_ALPHA,
  GMERC_L4_ALPHA,
  TFRAG_ST_L4_ALPHA,
  TIE_ST_L4_ALPHA,
  ETIE_ST_L4_ALPHA,
  TEX_L5_ALPHA,
  TFRAG_T_L5_ALPHA,
  TIE_T_L5_ALPHA,
  ETIE_T_L5_ALPHA,
  MERC_L5_ALPHA,
  EMERC_L5_ALPHA,
  GMERC_L5_ALPHA,
  TFRAG_ST_L5_ALPHA,
  TIE_ST_L5_ALPHA,
  ETIE_ST_L5_ALPHA,
  TEX_L6_ALPHA,
  TFRAG_T_L6_ALPHA,
  TIE_T_L6_ALPHA,
  ETIE_T_L6_ALPHA,
  MERC_L6_ALPHA,
  EMERC_L6_ALPHA,
  GMERC_L6_ALPHA,
  TFRAG_ST_L6_ALPHA,
  TIE_ST_L6_ALPHA,
  ETIE_ST_L6_ALPHA,
  TEX_L7_ALPHA,
  TFRAG_T_L7_ALPHA,
  TIE_T_L7_ALPHA,
  ETIE_T_L7_ALPHA,
  MERC_L7_ALPHA,
  EMERC_L7_ALPHA,
  GMERC_L7_ALPHA,
  TFRAG_ST_L7_ALPHA,
  TIE_ST_L7_ALPHA,
  ETIE_ST_L7_ALPHA,
  TEX_LCOM_TFRAG,
  MERC_LCOM_TFRAG,
  EMERC_LCOM_TFRAG,
  GMERC_LCOM_TFRAG,
  TEX_LCOM_SHRUB,
  MERC_LCOM_SHRUB,
  EMERC_LCOM_SHRUB,
  GMERC_LCOM_SHRUB,
  SHADOW,
  TEX_L0_PRIS,
  MERC_L0_PRIS,
  EMERC_L0_PRIS,
  GMERC_L0_PRIS,
  TEX_L1_PRIS,
  MERC_L1_PRIS,
  EMERC_L1_PRIS,
  GMERC_L1_PRIS,
  TEX_L2_PRIS,
  MERC_L2_PRIS,
  EMERC_L2_PRIS,
  GMERC_L2_PRIS,
  TEX_L3_PRIS,
  MERC_L3_PRIS,
  EMERC_L3_PRIS,
  GMERC_L3_PRIS,
  TEX_L4_PRIS,
  MERC_L4_PRIS,
  EMERC_L4_PRIS,
  GMERC_L4_PRIS,
  TEX_L5_PRIS,
  MERC_L5_PRIS,
  EMERC_L5_PRIS,
  GMERC_L5_PRIS,
  TEX_L6_PRIS,
  MERC_L6_PRIS,
  EMERC_L6_PRIS,
  GMERC_L6_PRIS,
  TEX_L7_PRIS,
  MERC_L7_PRIS,
  EMERC_L7_PRIS,
  GMERC_L7_PRIS,
  TEX_LCOM_PRIS,
  MERC_LCOM_PRIS,
  EMERC_LCOM_PRIS,
  GMERC_LCOM_PRIS,
  TEX_L0_PRIS2,
  MERC_L0_PRIS2,
  EMERC_L0_PRIS2,
  GMERC_L0_PRIS2,
  TEX_L1_PRIS2,
  MERC_L1_PRIS2,
  EMERC_L1_PRIS2,
  GMERC_L1_PRIS2,
  TEX_L2_PRIS2,
  MERC_L2_PRIS2,
  EMERC_L2_PRIS2,
  GMERC_L2_PRIS2,
  TEX_L3_PRIS2,
  MERC_L3_PRIS2,
  EMERC_L3_PRIS2,
  GMERC_L3_PRIS2,
  TEX_L4_PRIS2,
  MERC_L4_PRIS2,
  EMERC_L4_PRIS2,
  GMERC_L4_PRIS2,
  TEX_L5_PRIS2,
  MERC_L5_PRIS2,
  EMERC_L5_PRIS2,
  GMERC_L5_PRIS2,
  TEX_L6_PRIS2,
  MERC_L6_PRIS2,
  EMERC_L6_PRIS2,
  GMERC_L6_PRIS2,
  TEX_L7_PRIS2,
  MERC_L7_PRIS2,
  EMERC_L7_PRIS2,
  GMERC_L7_PRIS2,
  TEX_LCOM_PRIS2,
  MERC_LCOM_PRIS2,
  EMERC_LCOM_PRIS2,
  GMERC_LCOM_PRIS2,
  TEX_L0_WATER,
  MERC_L0_WATER,
  GMERC_L0_WATER,
  TFRAG_W_L0_WATER,
  TIE_W_L0_WATER,
  ETIE_W_L0_WATER,
  TIE_SW_L0_WATER,
  TFRAG_WS_L0_WATER,
  ETIE_SW_L0_WATER,
  TEX_L1_WATER,
  MERC_L1_WATER,
  GMERC_L1_WATER,
  TFRAG_W_L1_WATER,
  TIE_W_L1_WATER,
  ETIE_W_L1_WATER,
  TIE_SW_L1_WATER,
  TFRAG_WS_L1_WATER,
  ETIE_SW_L1_WATER,
  TEX_L2_WATER,
  MERC_L2_WATER,
  GMERC_L2_WATER,
  TFRAG_W_L2_WATER,
  TIE_W_L2_WATER,
  ETIE_W_L2_WATER,
  TIE_SW_L2_WATER,
  TFRAG_WS_L2_WATER,
  TIE_ESW_L2_WATER,
  TEX_L3_WATER,
  MERC_L3_WATER,
  GMERC_L3_WATER,
  TFRAG_W_L3_WATER,
  TIE_W_L3_WATER,
  ETIE_W_L3_WATER,
  TIE_SW_L3_WATER,
  TFRAG_WS_L3_WATER,
  ETIE_SW_L3_WATER,
  TEX_L4_WATER,
  MERC_L4_WATER,
  GMERC_L4_WATER,
  TFRAG_W_L4_WATER,
  TIE_W_L4_WATER,
  ETIE_W_L4_WATER,
  TIE_SW_L4_WATER,
  TFRAG_WS_L4_WATER,
  ETIE_SW_L4_WATER,
  TEX_L5_WATER,
  MERC_L5_WATER,
  GMERC_L5_WATER,
  TFRAG_W_L5_WATER,
  TIE_W_L5_WATER,
  ETIE_W_L5_WATER,
  TIE_SW_L5_WATER,
  TFRAG_WS_L5_WATER,
  ETIE_SW_L5_WATER,
  TEX_L6_WATER,
  MERC_L6_WATER,
  GMERC_L6_WATER,
  TFRAG_W_L6_WATER,
  TIE_W_L6_WATER,
  ETIE_W_L6_WATER,
  TIE_SW_L6_WATER,
  TFRAG_WS_L6_WATER,
  ETIE_SW_L6_WATER,
  TEX_L7_WATER,
  MERC_L7_WATER,
  GMERC_L7_WATER,
  TFRAG_W_L7_WATER,
  TIE_W_L7_WATER,
  ETIE_W_L7_WATER,
  TIE_SW_L7_WATER,
  TFRAG_WS_L7_WATER,
  ETIE_SW_L7_WATER,
  TEX_LCOM_WATER,
  MERC_LCOM_WATER,
  GMERC_LCOM_WATER,
  TEX_LCOM_SKY_POST,
  OCEAN_NEAR,
  DEPTH_CUE,
  TEX_ALL_SPRITE,
  PARTICLES,
  SHADOW2,
  EFFECTS,
  TEX_ALL_WARP,
  GMERC_WARP,
  DEBUG_NO_ZBUF1,
  TEX_ALL_MAP,
  PROGRESS,
  SCREEN_FILTER,
  SUBTITLE,
  BUCKET_323,
  DEBUG2,
  DEBUG_NO_ZBUF2,
  DEBUG3,
  MAX_BUCKETS
};
}

enum class BucketCategory {
  TFRAG,
  TIE,
  SHRUB,
  TEX,
  MERC,
  GENERIC,
  SPRITE,
  OCEAN,
  OTHER,
  MAX_CATEGORIES
};

constexpr const char* BUCKET_CATEGORY_NAMES[(int)BucketCategory::MAX_CATEGORIES] = {
    "tfrag", "tie", "shrub", "tex", "merc", "generic", "sprite", "ocean", "other"};
