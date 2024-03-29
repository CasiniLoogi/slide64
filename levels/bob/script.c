#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x04, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x05, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CHAIN_CHOMP, -3129, 1613, -1511, 0, 0, 0, 0x00000000, bhvChainChomp),
		OBJECT_WITH_ACTS(MODEL_YELLOW_COIN, 7752, -1334, -1193, 0, 0, 0, 0x00000000, bhvOneCoin, ACT_1 | ACT_2),
		OBJECT_WITH_ACTS(MODEL_YELLOW_COIN, 7752, -1634, -1193, 0, 0, 0, 0x00000000, bhvOneCoin, ACT_1 | ACT_2),
		OBJECT_WITH_ACTS(MODEL_YELLOW_COIN, 7752, -1934, -1193, 0, 0, 0, 0x00000000, bhvOneCoin, ACT_1 | ACT_2),
		OBJECT_WITH_ACTS(MODEL_YELLOW_COIN, 7752, -2234, -1193, 0, 0, 0, 0x00000000, bhvOneCoin, ACT_1 | ACT_2),
		OBJECT_WITH_ACTS(MODEL_YELLOW_COIN, 7752, -2534, -1193, 0, 0, 0, 0x00000000, bhvOneCoin, ACT_1 | ACT_2),
		OBJECT_WITH_ACTS(MODEL_YELLOW_COIN, -3135, 1677, -1517, 0, 0, 0, 0x00000000, bhvOneCoin, ACT_1 | ACT_2),
		OBJECT_WITH_ACTS(MODEL_YELLOW_COIN, -3135, 1745, -2806, 0, 0, 0, 0x00000000, bhvOneCoin, ACT_1 | ACT_2),
		OBJECT_WITH_ACTS(MODEL_YELLOW_COIN, -3135, 1594, 192, 0, 0, 0, 0x00000000, bhvOneCoin, ACT_1 | ACT_2),
		OBJECT_WITH_ACTS(MODEL_YELLOW_COIN, -2256, 1677, -1517, 0, 0, 0, 0x00000000, bhvOneCoin, ACT_1 | ACT_2),
		OBJECT_WITH_ACTS(MODEL_YELLOW_COIN, -4015, 1677, -1517, 0, 0, 0, 0x00000000, bhvOneCoin, ACT_1 | ACT_2),
		OBJECT_WITH_ACTS(MODEL_YELLOW_COIN, -3757, 1629, -605, 0, 0, 0, 0x00000000, bhvOneCoin, ACT_1 | ACT_2),
		OBJECT_WITH_ACTS(MODEL_YELLOW_COIN, -3757, 1725, -2429, 0, 0, 0, 0x00000000, bhvOneCoin, ACT_1 | ACT_2),
		OBJECT_WITH_ACTS(MODEL_YELLOW_COIN, -2514, 1725, -2429, 0, 0, 0, 0x00000000, bhvOneCoin, ACT_1 | ACT_2),
		OBJECT_WITH_ACTS(MODEL_YELLOW_COIN, -2514, 1629, -605, 0, 0, 0, 0x00000000, bhvOneCoin, ACT_1 | ACT_2),
		OBJECT(MODEL_GOOMBA, -1845, 1701, -2714, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -5047, 1651, -2136, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -1569, 10678, -1185, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -1963, 10369, -1966, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -2470, 10145, -2454, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -3229, 9995, -2751, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -4037, 9877, -2786, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -4836, 9740, -2579, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -5387, 9612, -2170, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -5578, 9387, -1513, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -5639, 9230, -724, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -5620, 9149, 67, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -5595, 9001, 770, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -5644, 8928, 1647, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -5654, 8630, 2553, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -5547, 8519, 3337, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -5046, 8445, 3961, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -4256, 8337, 4268, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -3404, 8235, 4296, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -2428, 8096, 4064, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -1829, 8001, 3694, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -1268, 7901, 3107, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -765, 7808, 2347, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -323, 7740, 1544, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 65, 7688, 728, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 415, 7635, -209, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 649, 7572, -1154, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 732, 7496, -2087, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 382, 7348, -3126, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -436, 7160, -4013, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -1675, 6914, -4568, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -2935, 6606, -4678, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -4040, 6229, -4018, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -4382, 6026, -2870, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -4483, 5928, -1761, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -4788, 5842, -806, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -6176, 5731, 462, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -6212, 5633, 2073, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -6062, 5582, 2991, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -5653, 5503, 3821, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -4731, 5358, 4104, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -3649, 5226, 3897, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 174, 4534, 3831, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 830, 4390, 3831, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 4448, 4286, 3829, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 5146, 4267, 3775, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 5719, 4236, 3530, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 6133, 4184, 2859, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 6214, 3838, 375, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 6214, 3794, -393, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 6214, 3744, -1268, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 6060, 3588, -2157, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 5800, 3355, -3101, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 5336, 3131, -4098, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 4825, 2968, -4893, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 4355, 2828, -5567, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 3582, 2719, -5966, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 2963, 2631, -6286, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 2317, 2540, -6620, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 1471, 2533, -6647, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 515, 2533, -6647, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -1650, 2517, -6647, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -2242, 2471, -6621, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -2870, 2354, -6198, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -3129, 2198, -5594, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -2887, 597, 2760, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -2691, 451, 3530, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -2484, 297, 4345, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -2018, 110, 5189, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -1079, -146, 5303, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -222, -221, 5156, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 3937, -400, 4659, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 4960, -649, 4659, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 6053, -874, 4471, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 6961, -1025, 4029, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 7594, -1151, 3272, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 7651, -1217, 2390, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 7716, -1293, 1383, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 7752, -1334, -1193, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 7752, -1634, -1193, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 7752, -1934, -1193, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 7752, -2234, -1193, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 7752, -2534, -1193, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 6869, -4206, -1193, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 6569, -4429, -1193, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 6269, -4653, -1193, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 5969, -4876, -1193, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 5669, -5099, -1193, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 3249, -6450, -1134, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 2544, -6647, -1617, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 2275, -6741, -2404, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 2259, -6957, -3212, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -1482, 11058, 5, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -1042, 11058, 187, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -860, 11058, 627, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -1042, 11058, 1067, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -1482, 11058, 1249, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -1922, 11058, 1067, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -2104, 11058, 627, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -1922, 11058, 187, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -3135, 1594, 192, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -2514, 1629, -605, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -2256, 1677, -1517, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -2514, 1725, -2429, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -3135, 1745, -2806, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -3757, 1725, -2429, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -4015, 1677, -1517, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -3757, 1629, -605, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 1624, 4296, 3831, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 6022, -10279, -8959, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 6076, -10279, -8759, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 6222, -10279, -8613, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 6422, -10279, -8559, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 6622, -10279, -8613, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 6769, -10279, -8759, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 6822, -10279, -8959, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 6769, -10279, -9159, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 6622, -10279, -9306, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 6422, -10279, -9359, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 6222, -10279, -9306, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 6076, -10279, -9159, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, -3129, 1542, 947, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 765, -306, 4986, 0, 0, 0, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_RED_COIN, 2283, -7092, -3986, 0, 0, -90, 0x00000000, bhvPurpleCoin, ACT_3),
		OBJECT_WITH_ACTS(MODEL_NONE, 6422, -9979, -8959, 0, 0, 0, (02 << 24) | (100 << 16), bhvHiddenRedCoinStar, ACT_3),
		OBJECT(MODEL_STAR, 2893, -9879, -8819, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_NONE, -1482, 11058, 627, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, -1482, 11058, 627),
		OBJECT(MODEL_NONE, 6131, -10686, -783, 0, 0, 0, 0x00000000, bhvWaterfallSoundLoop),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_DAISY_CIRCUIT),
		TERRAIN_TYPE(TERRAIN_SLIDE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -1482, 11058, 627),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
