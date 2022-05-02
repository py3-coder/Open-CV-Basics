// This file is part of OpenCV project.
// It is subject to the license terms in the LICENSE file found in the top-level directory
// of this distribution and at http://opencv.org/license.html.
//
// Copyright (C) 2018, Intel Corporation, all rights reserved.
// Third party copyrights are property of their respective owners.

#include "../../precomp.hpp"

namespace cv { namespace dnn { namespace vkcom {

extern const unsigned int max_pool_spv[1449] = {
    0x07230203,0x00010000,0x00080001,0x000000df,0x00000000,0x00020011,0x00000001,0x0006000b,
    0x00000001,0x4c534c47,0x6474732e,0x3035342e,0x00000000,0x0003000e,0x00000000,0x00000001,
    0x0007000f,0x00000005,0x00000004,0x6e69616d,0x00000000,0x0000000d,0x00000015,0x00060010,
    0x00000004,0x00000011,0x00000100,0x00000001,0x00000001,0x00030003,0x00000002,0x000001c2,
    0x00040005,0x00000004,0x6e69616d,0x00000000,0x00050005,0x00000008,0x626f6c67,0x735f6c61,
    0x00657a69,0x00070005,0x0000000d,0x4e5f6c67,0x6f576d75,0x72476b72,0x7370756f,0x00000000,
    0x00030005,0x00000014,0x00646967,0x00080005,0x00000015,0x475f6c67,0x61626f6c,0x766e496c,
    0x7461636f,0x496e6f69,0x00000044,0x00040005,0x00000019,0x65646e69,0x00000078,0x00050005,
    0x00000021,0x68737570,0x636f6c42,0x0000006b,0x00060006,0x00000021,0x00000000,0x6e616863,
    0x736c656e,0x00000000,0x00050006,0x00000021,0x00000001,0x685f6e69,0x00000000,0x00050006,
    0x00000021,0x00000002,0x775f6e69,0x00000000,0x00050006,0x00000021,0x00000003,0x5f74756f,
    0x00000068,0x00050006,0x00000021,0x00000004,0x5f74756f,0x00000077,0x00060006,0x00000021,
    0x00000005,0x64646170,0x5f676e69,0x00000068,0x00060006,0x00000021,0x00000006,0x64646170,
    0x5f676e69,0x00000077,0x00060006,0x00000021,0x00000007,0x746c6966,0x685f7265,0x00000000,
    0x00060006,0x00000021,0x00000008,0x746c6966,0x775f7265,0x00000000,0x00060006,0x00000021,
    0x00000009,0x69727473,0x685f6564,0x00000000,0x00060006,0x00000021,0x0000000a,0x69727473,
    0x775f6564,0x00000000,0x00050006,0x00000021,0x0000000b,0x61746f74,0x0000006c,0x00060006,
    0x00000021,0x0000000c,0x6465656e,0x73616d5f,0x0000006b,0x00030005,0x00000023,0x00000070,
    0x00030005,0x0000002a,0x00007770,0x00030005,0x00000030,0x00006870,0x00030005,0x00000039,
    0x00000063,0x00030005,0x00000045,0x0000006e,0x00040005,0x00000050,0x61747368,0x00007472,
    0x00040005,0x0000005a,0x61747377,0x00007472,0x00040005,0x00000064,0x646e6568,0x00000000,
    0x00040005,0x0000006e,0x646e6577,0x00000000,0x00040005,0x0000007e,0x7678616d,0x00006c61,
    0x00040005,0x00000080,0x6978616d,0x00007864,0x00030005,0x00000082,0x0066666f,0x00030005,
    0x0000008f,0x00000068,0x00030005,0x00000099,0x00000077,0x00040005,0x000000a4,0x75706e49,
    0x00003074,0x00060006,0x000000a4,0x00000000,0x625f6e69,0x65666675,0x00000072,0x00030005,
    0x000000a6,0x00000000,0x00040005,0x000000c6,0x7074754f,0x00007475,0x00060006,0x000000c6,
    0x00000000,0x5f74756f,0x66667562,0x00007265,0x00030005,0x000000c8,0x00000000,0x00040005,
    0x000000d3,0x6b73614d,0x00000000,0x00060006,0x000000d3,0x00000000,0x6b73616d,0x6675625f,
    0x00726566,0x00030005,0x000000d5,0x00000000,0x00040047,0x0000000d,0x0000000b,0x00000018,
    0x00040047,0x00000015,0x0000000b,0x0000001c,0x00050048,0x00000021,0x00000000,0x00000023,
    0x00000000,0x00050048,0x00000021,0x00000001,0x00000023,0x00000004,0x00050048,0x00000021,
    0x00000002,0x00000023,0x00000008,0x00050048,0x00000021,0x00000003,0x00000023,0x0000000c,
    0x00050048,0x00000021,0x00000004,0x00000023,0x00000010,0x00050048,0x00000021,0x00000005,
    0x00000023,0x00000014,0x00050048,0x00000021,0x00000006,0x00000023,0x00000018,0x00050048,
    0x00000021,0x00000007,0x00000023,0x0000001c,0x00050048,0x00000021,0x00000008,0x00000023,
    0x00000020,0x00050048,0x00000021,0x00000009,0x00000023,0x00000024,0x00050048,0x00000021,
    0x0000000a,0x00000023,0x00000028,0x00050048,0x00000021,0x0000000b,0x00000023,0x0000002c,
    0x00050048,0x00000021,0x0000000c,0x00000023,0x00000030,0x00030047,0x00000021,0x00000002,
    0x00040047,0x000000a3,0x00000006,0x00000004,0x00040048,0x000000a4,0x00000000,0x00000018,
    0x00050048,0x000000a4,0x00000000,0x00000023,0x00000000,0x00030047,0x000000a4,0x00000003,
    0x00040047,0x000000a6,0x00000022,0x00000000,0x00040047,0x000000a6,0x00000021,0x00000000,
    0x00040047,0x000000c5,0x00000006,0x00000004,0x00040048,0x000000c6,0x00000000,0x00000019,
    0x00050048,0x000000c6,0x00000000,0x00000023,0x00000000,0x00030047,0x000000c6,0x00000003,
    0x00040047,0x000000c8,0x00000022,0x00000000,0x00040047,0x000000c8,0x00000021,0x00000001,
    0x00040047,0x000000d2,0x00000006,0x00000004,0x00040048,0x000000d3,0x00000000,0x00000019,
    0x00050048,0x000000d3,0x00000000,0x00000023,0x00000000,0x00030047,0x000000d3,0x00000003,
    0x00040047,0x000000d5,0x00000022,0x00000000,0x00040047,0x000000d5,0x00000021,0x00000002,
    0x00040047,0x000000de,0x0000000b,0x00000019,0x00020013,0x00000002,0x00030021,0x00000003,
    0x00000002,0x00040015,0x00000006,0x00000020,0x00000001,0x00040020,0x00000007,0x00000007,
    0x00000006,0x00040015,0x00000009,0x00000020,0x00000000,0x0004002b,0x00000009,0x0000000a,
    0x00000100,0x00040017,0x0000000b,0x00000009,0x00000003,0x00040020,0x0000000c,0x00000001,
    0x0000000b,0x0004003b,0x0000000c,0x0000000d,0x00000001,0x0004002b,0x00000009,0x0000000e,
    0x00000000,0x00040020,0x0000000f,0x00000001,0x00000009,0x0004003b,0x0000000c,0x00000015,
    0x00000001,0x000f001e,0x00000021,0x00000006,0x00000006,0x00000006,0x00000006,0x00000006,
    0x00000006,0x00000006,0x00000006,0x00000006,0x00000006,0x00000006,0x00000006,0x00000006,
    0x00040020,0x00000022,0x00000009,0x00000021,0x0004003b,0x00000022,0x00000023,0x00000009,
    0x0004002b,0x00000006,0x00000024,0x0000000b,0x00040020,0x00000025,0x00000009,0x00000006,
    0x00020014,0x00000028,0x0004002b,0x00000006,0x0000002c,0x00000004,0x0004002b,0x00000006,
    0x00000035,0x00000003,0x0004002b,0x00000006,0x00000041,0x00000000,0x0004002b,0x00000006,
    0x00000052,0x00000009,0x0004002b,0x00000006,0x00000056,0x00000005,0x0004002b,0x00000006,
    0x0000005c,0x0000000a,0x0004002b,0x00000006,0x00000060,0x00000006,0x0004002b,0x00000006,
    0x00000066,0x00000007,0x0004002b,0x00000006,0x0000006a,0x00000001,0x0004002b,0x00000006,
    0x00000070,0x00000008,0x0004002b,0x00000006,0x00000074,0x00000002,0x00030016,0x0000007c,
    0x00000020,0x00040020,0x0000007d,0x00000007,0x0000007c,0x0004002b,0x0000007c,0x0000007f,
    0xff800000,0x0004002b,0x00000006,0x00000081,0xffffffff,0x0003001d,0x000000a3,0x0000007c,
    0x0003001e,0x000000a4,0x000000a3,0x00040020,0x000000a5,0x00000002,0x000000a4,0x0004003b,
    0x000000a5,0x000000a6,0x00000002,0x00040020,0x000000af,0x00000002,0x0000007c,0x0003001d,
    0x000000c5,0x0000007c,0x0003001e,0x000000c6,0x000000c5,0x00040020,0x000000c7,0x00000002,
    0x000000c6,0x0004003b,0x000000c7,0x000000c8,0x00000002,0x0004002b,0x00000006,0x000000cc,
    0x0000000c,0x0003001d,0x000000d2,0x0000007c,0x0003001e,0x000000d3,0x000000d2,0x00040020,
    0x000000d4,0x00000002,0x000000d3,0x0004003b,0x000000d4,0x000000d5,0x00000002,0x0004002b,
    0x00000009,0x000000dd,0x00000001,0x0006002c,0x0000000b,0x000000de,0x0000000a,0x000000dd,
    0x000000dd,0x00050036,0x00000002,0x00000004,0x00000000,0x00000003,0x000200f8,0x00000005,
    0x0004003b,0x00000007,0x00000008,0x00000007,0x0004003b,0x00000007,0x00000014,0x00000007,
    0x0004003b,0x00000007,0x00000019,0x00000007,0x0004003b,0x00000007,0x0000002a,0x00000007,
    0x0004003b,0x00000007,0x00000030,0x00000007,0x0004003b,0x00000007,0x00000039,0x00000007,
    0x0004003b,0x00000007,0x00000045,0x00000007,0x0004003b,0x00000007,0x00000050,0x00000007,
    0x0004003b,0x00000007,0x0000005a,0x00000007,0x0004003b,0x00000007,0x00000064,0x00000007,
    0x0004003b,0x00000007,0x0000006e,0x00000007,0x0004003b,0x0000007d,0x0000007e,0x00000007,
    0x0004003b,0x00000007,0x00000080,0x00000007,0x0004003b,0x00000007,0x00000082,0x00000007,
    0x0004003b,0x00000007,0x0000008f,0x00000007,0x0004003b,0x00000007,0x00000099,0x00000007,
    0x00050041,0x0000000f,0x00000010,0x0000000d,0x0000000e,0x0004003d,0x00000009,0x00000011,
    0x00000010,0x00050084,0x00000009,0x00000012,0x0000000a,0x00000011,0x0004007c,0x00000006,
    0x00000013,0x00000012,0x0003003e,0x00000008,0x00000013,0x00050041,0x0000000f,0x00000016,
    0x00000015,0x0000000e,0x0004003d,0x00000009,0x00000017,0x00000016,0x0004007c,0x00000006,
    0x00000018,0x00000017,0x0003003e,0x00000014,0x00000018,0x0004003d,0x00000006,0x0000001a,
    0x00000014,0x0003003e,0x00000019,0x0000001a,0x000200f9,0x0000001b,0x000200f8,0x0000001b,
    0x000400f6,0x0000001d,0x0000001e,0x00000000,0x000200f9,0x0000001f,0x000200f8,0x0000001f,
    0x0004003d,0x00000006,0x00000020,0x00000019,0x00050041,0x00000025,0x00000026,0x00000023,
    0x00000024,0x0004003d,0x00000006,0x00000027,0x00000026,0x000500b1,0x00000028,0x00000029,
    0x00000020,0x00000027,0x000400fa,0x00000029,0x0000001c,0x0000001d,0x000200f8,0x0000001c,
    0x0004003d,0x00000006,0x0000002b,0x00000019,0x00050041,0x00000025,0x0000002d,0x00000023,
    0x0000002c,0x0004003d,0x00000006,0x0000002e,0x0000002d,0x0005008b,0x00000006,0x0000002f,
    0x0000002b,0x0000002e,0x0003003e,0x0000002a,0x0000002f,0x0004003d,0x00000006,0x00000031,
    0x00000019,0x00050041,0x00000025,0x00000032,0x00000023,0x0000002c,0x0004003d,0x00000006,
    0x00000033,0x00000032,0x00050087,0x00000006,0x00000034,0x00000031,0x00000033,0x00050041,
    0x00000025,0x00000036,0x00000023,0x00000035,0x0004003d,0x00000006,0x00000037,0x00000036,
    0x0005008b,0x00000006,0x00000038,0x00000034,0x00000037,0x0003003e,0x00000030,0x00000038,
    0x0004003d,0x00000006,0x0000003a,0x00000019,0x00050041,0x00000025,0x0000003b,0x00000023,
    0x0000002c,0x0004003d,0x00000006,0x0000003c,0x0000003b,0x00050087,0x00000006,0x0000003d,
    0x0000003a,0x0000003c,0x00050041,0x00000025,0x0000003e,0x00000023,0x00000035,0x0004003d,
    0x00000006,0x0000003f,0x0000003e,0x00050087,0x00000006,0x00000040,0x0000003d,0x0000003f,
    0x00050041,0x00000025,0x00000042,0x00000023,0x00000041,0x0004003d,0x00000006,0x00000043,
    0x00000042,0x0005008b,0x00000006,0x00000044,0x00000040,0x00000043,0x0003003e,0x00000039,
    0x00000044,0x0004003d,0x00000006,0x00000046,0x00000019,0x00050041,0x00000025,0x00000047,
    0x00000023,0x0000002c,0x0004003d,0x00000006,0x00000048,0x00000047,0x00050087,0x00000006,
    0x00000049,0x00000046,0x00000048,0x00050041,0x00000025,0x0000004a,0x00000023,0x00000035,
    0x0004003d,0x00000006,0x0000004b,0x0000004a,0x00050087,0x00000006,0x0000004c,0x00000049,
    0x0000004b,0x00050041,0x00000025,0x0000004d,0x00000023,0x00000041,0x0004003d,0x00000006,
    0x0000004e,0x0000004d,0x00050087,0x00000006,0x0000004f,0x0000004c,0x0000004e,0x0003003e,
    0x00000045,0x0000004f,0x0004003d,0x00000006,0x00000051,0x00000030,0x00050041,0x00000025,
    0x00000053,0x00000023,0x00000052,0x0004003d,0x00000006,0x00000054,0x00000053,0x00050084,
    0x00000006,0x00000055,0x00000051,0x00000054,0x00050041,0x00000025,0x00000057,0x00000023,
    0x00000056,0x0004003d,0x00000006,0x00000058,0x00000057,0x00050082,0x00000006,0x00000059,
    0x00000055,0x00000058,0x0003003e,0x00000050,0x00000059,0x0004003d,0x00000006,0x0000005b,
    0x0000002a,0x00050041,0x00000025,0x0000005d,0x00000023,0x0000005c,0x0004003d,0x00000006,
    0x0000005e,0x0000005d,0x00050084,0x00000006,0x0000005f,0x0000005b,0x0000005e,0x00050041,
    0x00000025,0x00000061,0x00000023,0x00000060,0x0004003d,0x00000006,0x00000062,0x00000061,
    0x00050082,0x00000006,0x00000063,0x0000005f,0x00000062,0x0003003e,0x0000005a,0x00000063,
    0x0004003d,0x00000006,0x00000065,0x00000050,0x00050041,0x00000025,0x00000067,0x00000023,
    0x00000066,0x0004003d,0x00000006,0x00000068,0x00000067,0x00050080,0x00000006,0x00000069,
    0x00000065,0x00000068,0x00050041,0x00000025,0x0000006b,0x00000023,0x0000006a,0x0004003d,
    0x00000006,0x0000006c,0x0000006b,0x0007000c,0x00000006,0x0000006d,0x00000001,0x00000027,
    0x00000069,0x0000006c,0x0003003e,0x00000064,0x0000006d,0x0004003d,0x00000006,0x0000006f,
    0x0000005a,0x00050041,0x00000025,0x00000071,0x00000023,0x00000070,0x0004003d,0x00000006,
    0x00000072,0x00000071,0x00050080,0x00000006,0x00000073,0x0000006f,0x00000072,0x00050041,
    0x00000025,0x00000075,0x00000023,0x00000074,0x0004003d,0x00000006,0x00000076,0x00000075,
    0x0007000c,0x00000006,0x00000077,0x00000001,0x00000027,0x00000073,0x00000076,0x0003003e,
    0x0000006e,0x00000077,0x0004003d,0x00000006,0x00000078,0x00000050,0x0007000c,0x00000006,
    0x00000079,0x00000001,0x0000002a,0x00000078,0x00000041,0x0003003e,0x00000050,0x00000079,
    0x0004003d,0x00000006,0x0000007a,0x0000005a,0x0007000c,0x00000006,0x0000007b,0x00000001,
    0x0000002a,0x0000007a,0x00000041,0x0003003e,0x0000005a,0x0000007b,0x0003003e,0x0000007e,
    0x0000007f,0x0003003e,0x00000080,0x00000081,0x0004003d,0x00000006,0x00000083,0x00000045,
    0x00050041,0x00000025,0x00000084,0x00000023,0x00000041,0x0004003d,0x00000006,0x00000085,
    0x00000084,0x00050084,0x00000006,0x00000086,0x00000083,0x00000085,0x0004003d,0x00000006,
    0x00000087,0x00000039,0x00050080,0x00000006,0x00000088,0x00000086,0x00000087,0x00050041,
    0x00000025,0x00000089,0x00000023,0x0000006a,0x0004003d,0x00000006,0x0000008a,0x00000089,
    0x00050084,0x00000006,0x0000008b,0x00000088,0x0000008a,0x00050041,0x00000025,0x0000008c,
    0x00000023,0x00000074,0x0004003d,0x00000006,0x0000008d,0x0000008c,0x00050084,0x00000006,
    0x0000008e,0x0000008b,0x0000008d,0x0003003e,0x00000082,0x0000008e,0x0004003d,0x00000006,
    0x00000090,0x00000050,0x0003003e,0x0000008f,0x00000090,0x000200f9,0x00000091,0x000200f8,
    0x00000091,0x000400f6,0x00000093,0x00000094,0x00000000,0x000200f9,0x00000095,0x000200f8,
    0x00000095,0x0004003d,0x00000006,0x00000096,0x0000008f,0x0004003d,0x00000006,0x00000097,
    0x00000064,0x000500b1,0x00000028,0x00000098,0x00000096,0x00000097,0x000400fa,0x00000098,
    0x00000092,0x00000093,0x000200f8,0x00000092,0x0004003d,0x00000006,0x0000009a,0x0000005a,
    0x0003003e,0x00000099,0x0000009a,0x000200f9,0x0000009b,0x000200f8,0x0000009b,0x000400f6,
    0x0000009d,0x0000009e,0x00000000,0x000200f9,0x0000009f,0x000200f8,0x0000009f,0x0004003d,
    0x00000006,0x000000a0,0x00000099,0x0004003d,0x00000006,0x000000a1,0x0000006e,0x000500b1,
    0x00000028,0x000000a2,0x000000a0,0x000000a1,0x000400fa,0x000000a2,0x0000009c,0x0000009d,
    0x000200f8,0x0000009c,0x0004003d,0x00000006,0x000000a7,0x00000082,0x0004003d,0x00000006,
    0x000000a8,0x0000008f,0x00050041,0x00000025,0x000000a9,0x00000023,0x00000074,0x0004003d,
    0x00000006,0x000000aa,0x000000a9,0x00050084,0x00000006,0x000000ab,0x000000a8,0x000000aa,
    0x00050080,0x00000006,0x000000ac,0x000000a7,0x000000ab,0x0004003d,0x00000006,0x000000ad,
    0x00000099,0x00050080,0x00000006,0x000000ae,0x000000ac,0x000000ad,0x00060041,0x000000af,
    0x000000b0,0x000000a6,0x00000041,0x000000ae,0x0004003d,0x0000007c,0x000000b1,0x000000b0,
    0x0004003d,0x0000007c,0x000000b2,0x0000007e,0x000500ba,0x00000028,0x000000b3,0x000000b1,
    0x000000b2,0x000300f7,0x000000b5,0x00000000,0x000400fa,0x000000b3,0x000000b4,0x000000b5,
    0x000200f8,0x000000b4,0x0004003d,0x00000006,0x000000b6,0x0000008f,0x00050041,0x00000025,
    0x000000b7,0x00000023,0x00000074,0x0004003d,0x00000006,0x000000b8,0x000000b7,0x00050084,
    0x00000006,0x000000b9,0x000000b6,0x000000b8,0x0004003d,0x00000006,0x000000ba,0x00000099,
    0x00050080,0x00000006,0x000000bb,0x000000b9,0x000000ba,0x0003003e,0x00000080,0x000000bb,
    0x0004003d,0x00000006,0x000000bc,0x00000082,0x0004003d,0x00000006,0x000000bd,0x00000080,
    0x00050080,0x00000006,0x000000be,0x000000bc,0x000000bd,0x00060041,0x000000af,0x000000bf,
    0x000000a6,0x00000041,0x000000be,0x0004003d,0x0000007c,0x000000c0,0x000000bf,0x0003003e,
    0x0000007e,0x000000c0,0x000200f9,0x000000b5,0x000200f8,0x000000b5,0x000200f9,0x0000009e,
    0x000200f8,0x0000009e,0x0004003d,0x00000006,0x000000c1,0x00000099,0x00050080,0x00000006,
    0x000000c2,0x000000c1,0x0000006a,0x0003003e,0x00000099,0x000000c2,0x000200f9,0x0000009b,
    0x000200f8,0x0000009d,0x000200f9,0x00000094,0x000200f8,0x00000094,0x0004003d,0x00000006,
    0x000000c3,0x0000008f,0x00050080,0x00000006,0x000000c4,0x000000c3,0x0000006a,0x0003003e,
    0x0000008f,0x000000c4,0x000200f9,0x00000091,0x000200f8,0x00000093,0x0004003d,0x00000006,
    0x000000c9,0x00000019,0x0004003d,0x0000007c,0x000000ca,0x0000007e,0x00060041,0x000000af,
    0x000000cb,0x000000c8,0x00000041,0x000000c9,0x0003003e,0x000000cb,0x000000ca,0x00050041,
    0x00000025,0x000000cd,0x00000023,0x000000cc,0x0004003d,0x00000006,0x000000ce,0x000000cd,
    0x000500aa,0x00000028,0x000000cf,0x000000ce,0x0000006a,0x000300f7,0x000000d1,0x00000000,
    0x000400fa,0x000000cf,0x000000d0,0x000000d1,0x000200f8,0x000000d0,0x0004003d,0x00000006,
    0x000000d6,0x00000019,0x0004003d,0x00000006,0x000000d7,0x00000080,0x0004006f,0x0000007c,
    0x000000d8,0x000000d7,0x00060041,0x000000af,0x000000d9,0x000000d5,0x00000041,0x000000d6,
    0x0003003e,0x000000d9,0x000000d8,0x000200f9,0x000000d1,0x000200f8,0x000000d1,0x000200f9,
    0x0000001e,0x000200f8,0x0000001e,0x0004003d,0x00000006,0x000000da,0x00000008,0x0004003d,
    0x00000006,0x000000db,0x00000019,0x00050080,0x00000006,0x000000dc,0x000000db,0x000000da,
    0x0003003e,0x00000019,0x000000dc,0x000200f9,0x0000001b,0x000200f8,0x0000001d,0x000100fd,
    0x00010038
};

}}} // namespace cv::dnn::vkcom
