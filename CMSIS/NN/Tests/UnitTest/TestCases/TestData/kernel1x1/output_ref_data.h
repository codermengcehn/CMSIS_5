/*
 * Copyright (C) 2010-2021 Arm Limited or its affiliates.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Generated by generate_test_data.py using TFL version 2.6.0 as reference.
#pragma once
#include <stdint.h>

const q7_t kernel1x1_output_ref[3825] = {
    82,   -53,  36,   -54,  -13,  41,   2,    31,  5,    4,    -76,  14,   18,   44,   -2,   -35,  5,    97,   -68,
    13,   -49,  20,   10,   7,    -33,  45,   11,  -73,  -9,   2,    65,   -15,  -36,  2,    84,   -76,  49,   -16,
    -9,   22,   -22,  -6,   70,   -24,  -82,  -27, -11,  20,   -50,  -52,  -58,  78,   -59,  17,   -40,  11,   26,
    5,    -8,   49,   -9,   -52,  -8,   -12,  46,  -21,  -27,  -25,  102,  -72,  31,   -32,  21,   2,    -14,  -36,
    55,   16,   -93,  -18,  -9,   49,   -22,  -53, -15,  83,   -63,  17,   -40,  12,   21,   4,    -17,  53,   -7,
    -58,  -12,  -9,   49,   -24,  -31,  -23,  79,  -60,  -13,  -73,  7,    32,   42,   -15,  32,   -11,  -31,  3,
    18,   81,   -10,  -4,   15,   100,  -79,  19,  -45,  9,    8,    5,    -39,  57,   -1,   -80,  -19,  9,    62,
    -31,  -42,  -6,   102,  -87,  7,    -51,  9,   4,    17,   -56,  70,   -11,  -71,  -27,  14,   73,   -41,  -35,
    -6,   78,   -77,  29,   -39,  -23,  35,   7,   0,    59,   -40,  -59,  -20,  13,   40,   -50,  -32,  -37,  94,
    -71,  23,   -68,  -20,  33,   20,   3,    15,  -5,   -78,  4,    42,   68,   -16,  -32,  22,   92,   -70,  33,
    -60,  -23,  35,   10,   11,   15,   -5,   -84, 3,    37,   57,   -18,  -38,  13,   96,   -93,  20,   -50,  -21,
    20,   17,   -32,  66,   -34,  -73,  -28,  31,  62,   -56,  -36,  -16,  71,   -54,  33,   -51,  -22,  51,   7,
    39,   14,   -17,  -59,  10,   15,   38,   -14, -26,  -12,  104,  -94,  24,   -61,  -28,  21,   19,   -26,  45,
    -22,  -88,  -19,  50,   70,   -46,  -41,  9,   104,  -99,  50,   -42,  -39,  21,   -3,   -15,  54,   -29,  -107,
    -28,  44,   47,   -59,  -58,  -16,  92,   -89, 42,   -46,  -40,  33,   5,    1,    48,   -37,  -86,  -20,  39,
    45,   -54,  -44,  -20,  93,   -65,  10,   -60, 9,    20,   17,   -19,  30,   7,    -67,  0,    15,   70,   -10,
    -29,  14,   94,   -88,  2,    -57,  -5,   16,  28,   -45,  67,   -28,  -57,  -26,  25,   75,   -47,  -25,  -7,
    86,   -65,  42,   -46,  -19,  36,   -3,   18,  23,   -7,   -83,  0,    20,   41,   -20,  -42,  -8,   80,   -56,
    20,   -66,  -15,  44,   20,   23,   6,    -5,  -60,  14,   27,   59,   -5,   -23,  15,   108,  -97,  34,   -69,
    -45,  28,   20,   -12,  28,   -22,  -101, -13, 71,   72,   -44,  -45,  23,   91,   -71,  18,   -80,  -33,  43,
    32,   14,   2,    -12,  -73,  11,   59,   75,  -14,  -25,  36,   84,   -68,  38,   -33,  -7,   27,   -8,   1,
    48,   -13,  -76,  -13,  0,    35,   -32,  -43, -30,  90,   -77,  27,   -46,  -12,  24,   7,    -13,  49,   -18,
    -74,  -15,  18,   52,   -37,  -38,  -15,  85,  -72,  38,   -24,  -1,   20,   -13,  -11,  64,   -16,  -75,  -22,
    -10,  31,   -40,  -46,  -44,  87,   -81,  -6,  -69,  -10,  27,   40,   -30,  52,   -30,  -44,  -15,  33,   81,
    -38,  -14,  5,    87,   -71,  33,   -40,  -9,  26,   -1,   -3,   45,   -13,  -76,  -12,  9,    43,   -31,  -40,
    -20,  88,   -53,  9,    -64,  12,   27,   18,  -2,   13,   16,   -62,  12,   12,   69,   6,    -24,  22,   93,
    -61,  37,   -30,  17,   13,   -17,  -12,  43,  15,   -87,  -8,   -13,  39,   -15,  -50,  -19,  97,   -68,  32,
    -51,  -3,   22,   0,    -5,   25,   9,    -89, -1,   19,   55,   -14,  -44,  7,    92,   -78,  19,   -70,  -30,
    37,   27,   1,    23,   -20,  -71,  -2,   50,  70,   -28,  -28,  18,   108,  -100, 33,   -58,  -34,  19,   13,
    -27,  48,   -24,  -99,  -24,  55,   66,   -53, -49,  5,    82,   -63,  49,   -27,  -7,   29,   -19,  13,   41,
    -7,   -83,  -9,   -6,   24,   -26,  -48,  -35, 100,  -70,  28,   -70,  -19,  30,   15,   5,    4,    7,    -92,
    8,    47,   69,   -8,   -39,  34,   84,   -59, 46,   -41,  -14,  36,   -10,  24,   20,   -1,   -85,  3,    10,
    34,   -15,  -45,  -12,  92,   -64,  14,   -50, 15,   16,   9,    -22,  40,   7,    -69,  -6,   3,    62,   -14,
    -33,  1,    92,   -70,  29,   -59,  -18,  32,  12,   5,    20,   -6,   -80,  1,    33,   59,   -19,  -36,  11,
    80,   -83,  21,   -65,  -47,  48,   31,   12,  35,   -49,  -56,  -9,   51,   59,   -47,  -21,  -5,   96,   -82,
    30,   -35,  -1,   12,   -3,   -30,  65,   -13, -82,  -25,  6,    48,   -43,  -46,  -25,  93,   -74,  24,   -51,
    -7,   23,   9,    -14,  41,   -8,   -77,  -10, 20,   57,   -28,  -37,  -3,   89,   -60,  40,   -28,  13,   17,
    -19,  -6,   44,   9,    -85,  -9,   -15,  33,  -18,  -49,  -26,  99,   -78,  35,   -40,  -3,   14,   -5,   -20,
    48,   -2,   -91,  -16,  13,   50,   -31,  -49, -11,  107,  -102, 55,   -49,  -52,  27,   -1,   -5,   41,   -30,
    -114, -23,  60,   49,   -58,  -59,  -5,   72,  -45,  0,    -54,  22,   32,   20,   -2,   32,   1,    -34,  7,
    -13,  59,   -1,   -12,  -6,   84,   -47,  4,   -65,  20,   28,   20,   -2,   11,   20,   -55,  16,   6,    70,
    13,   -20,  24,   95,   -83,  33,   -31,  -1,  12,   -7,   -30,  70,   -16,  -82,  -28,  2,    44,   -46,  -48,
    -33,  74,   -55,  31,   -43,  -8,   40,   2,   21,   29,   -12,  -59,  2,    1,    37,   -17,  -30,  -21,  92,
    -59,  47,   -39,  -3,   26,   -16,  13,   20,  14,   -96,  3,    6,    37,   -9,   -52,  -6,   86,   -43,  19,
    -74,  0,    40,   18,   27,   -18,  25,   -71, 30,   26,   67,   23,   -25,  42,   90,   -64,  37,   -60,  -23,
    38,   6,    22,   5,    0,    -87,  9,    35,  53,   -10,  -39,  15,   82,   -56,  -14,  -74,  15,   28,   40,
    -18,  26,   1,    -35,  7,    14,   84,   -1,  -6,   23,   80,   -65,  21,   -40,  2,    27,   5,    -8,   51,
    -15,  -58,  -12,  -3,   45,   -29,  -30,  -26, 93,   -87,  9,    -53,  -9,   18,   22,   -38,  66,   -28,  -62,
    -25,  23,   68,   -48,  -29,  -12,  90,   -76, 43,   -60,  -43,  43,   9,    24,   14,   -21,  -88,  1,    50,
    50,   -29,  -41,  7,    84,   -70,  9,    -73, -23,  41,   34,   5,    21,   -21,  -54,  3,    41,   71,   -21,
    -17,  16,   110,  -93,  58,   -45,  -37,  20,  -11,  -6,   34,   -9,   -123, -17,  48,   46,   -44,  -66,  0,
    87,   -58,  42,   -45,  -8,   33,   -7,   20,  16,   6,    -86,  6,    11,   40,   -9,   -44,  -3,   93,   -77,
    50,   -43,  -31,  33,   -6,   13,   30,   -15, -96,  -9,   31,   39,   -35,  -51,  -11,  85,   -83,  42,   -39,
    -34,  34,   0,    4,    52,   -37,  -78,  -20, 25,   37,   -52,  -42,  -32,  105,  -69,  32,   -47,  10,   10,
    -5,   -22,  31,   22,   -100, -5,   12,   58,  -11,  -51,  11,   115,  -102, 39,   -53,  -30,  12,   5,    -33,
    49,   -15,  -113, -26,  53,   65,   -52,  -57, 7,    73,   -36,  4,    -61,  22,   36,   18,   14,   8,    17,
    -41,  22,   -7,   61,   18,   -13,  13,   80,  -49,  18,   -57,  5,    36,   12,   14,   13,   8,    -59,  13,
    7,    55,   3,    -25,  8,    92,   -103, 38,  -23,  -25,  15,   -4,   -37,  99,   -53,  -78,  -50,  12,   36,
    -84,  -48,  -61,  93,   -52,  16,   -53,  27,  16,   4,    -13,  21,   30,   -74,  8,    -3,   62,   9,    -35,
    16,   86,   -57,  0,    -74,  6,    31,   31,  -6,   14,   6,    -53,  12,   23,   78,   2,    -16,  29,   101,
    -58,  34,   -52,  10,   18,   -6,   -2,   10,  32,   -98,  9,    13,   56,   6,    -48,  21,   79,   -63,  36,
    -53,  -28,  46,   7,    30,   17,   -18,  -71, 5,    27,   43,   -21,  -33,  -5,   87,   -69,  22,   -34,  14,
    14,   -2,   -26,  63,   -7,   -66,  -19,  -12, 46,   -31,  -38,  -29,  83,   -80,  25,   -55,  -33,  39,   19,
    3,    43,   -38,  -62,  -13,  35,   54,   -44, -28,  -14,  83,   -78,  37,   -47,  -33,  39,   7,    11,   41,
    -33,  -73,  -12,  29,   42,   -43,  -37,  -20, 78,   -79,  28,   -41,  -25,  35,   10,   -2,   61,   -44,  -57,
    -22,  15,   41,   -53,  -30,  -38,  71,   -51, -4,   -64,  7,    39,   31,   2,    29,   -11,  -30,  7,    5,
    66,   -7,   -6,   2,    77,   -57,  19,   -48, 1,    33,   10,   5,    35,   -9,   -54,  -1,   1,    49,   -16,
    -25,  -14,  98,   -82,  67,   -32,  -34,  28,  -23,  13,   35,   -12,  -116, -14,  28,   27,   -41,  -65,  -21,
    75,   -83,  22,   -38,  -26,  36,   14,   -8,  74,   -55,  -47,  -28,  12,   41,   -63,  -25,  -48,  111,  -104,
    40,   -45,  -29,  11,   1,    -36,  63,   -24, -107, -33,  43,   57,   -61,  -57,  -10,  107,  -104, 19,   -44,
    -9,   3,    12,   -61,  85,   -29,  -83,  -42, 26,   66,   -65,  -45,  -20,  84,   -49,  4,    -53,  29,   20,
    13,   -15,  32,   16,   -52,  5,    -11,  63,  3,    -23,  4,    87,   -77,  12,   -59,  -15,  30,   25,   -14,
    45,   -25,  -58,  -11,  27,   65,   -35,  -24, -3,   90,   -91,  34,   -27,  -14,  16,   -4,   -30,  84,   -37,
    -75,  -38,  5,    39,   -65,  -45,  -49,  92,  -57,  43,   -59,  -17,  37,   -1,   29,   -7,   15,   -95,  17,
    31,   50,   3,    -44,  22,   76,   -62,  -1,  -71,  -10,  41,   37,   1,    27,   -21,  -37,  4,    25,   71,
    -17,  -9,   9,    112,  -74,  44,   -40,  10,  3,    -17,  -25,  33,   28,   -117, -9,   12,   53,   -14,  -64,
    9,    87,   -53,  44,   -46,  -5,   34,   -10, 26,   7,    15,   -89,  12,   9,    39,   0,    -45,  2,    108,
    -88,  25,   -57,  -11,  13,   11,   -32,  42,  -3,   -95,  -16,  38,   70,   -34,  -46,  13,   90,   -77,  23,
    -56,  -20,  30,   16,   -6,   39,   -20,  -71, -10,  31,   59,   -34,  -33,  -3,   87,   -66,  18,   -59,  -8,
    31,   17,   -1,   28,   -8,   -65,  0,    22,  61,   -18,  -28,  5,    86,   -74,  37,   -68,  -49,  51,   19,
    32,   6,    -26,  -80,  6,    58,   55,   -27, -33,  14,   99,   -91,  59,   -33,  -36,  25,   -15,  -1,   51,
    -25,  -108, -24,  31,   33,   -55,  -61,  -28, 101,  -60,  37,   -51,  6,    19,   -7,   0,    11,   29,   -101,
    8,    15,   54,   2,    -50,  19,   77,   -66, -10,  -68,  -2,   34,   41,   -16,  44,   -26,  -29,  -5,   19,
    76,   -25,  -5,   1,    82,   -50,  25,   -67, -11,  43,   15,   30,   -6,   9,    -69,  22,   26,   58,   8,
    -27,  24,   82,   -62,  44,   -22,  3,    24,  -20,  3,    51,   -6,   -78,  -13,  -16,  24,   -28,  -47,  -42,
    74,   -49,  26,   -43,  4,    37,   1,    18,  27,   -2,   -57,  6,    -7,   40,   -8,   -28,  -17,  84,   -61,
    0,    -68,  4,    30,   30,   -11,  27,   -3,  -49,  4,    19,   74,   -9,   -16,  16,   90,   -73,  55,   -35,
    -24,  31,   -15,  15,   33,   -11,  -98,  -9,  18,   30,   -33,  -54,  -21,  91,   -66,  24,   -53,  -2,   25,
    8,    -5,   30,   1,    -75,  -2,   16,   57,  -16,  -36,  3,    79,   -39,  15,   -67,  8,    40,   16,   25,
    -8,   21,   -58,  27,   11,   61,   21,   -21, 27,   84,   -66,  50,   -41,  -27,  40,   -9,   28,   22,   -12,
    -87,  0,    20,   32,   -24,  -46,  -15,  92,  -64,  52,   -44,  -18,  33,   -12,  23,   14,   5,    -99,  4,
    21,   37,   -14,  -52,  -2,   102,  -66,  30,  -46,  14,   10,   -6,   -20,  31,   23,   -95,  -4,   7,    57,
    -8,   -49,  8,    110,  -70,  39,   -51,  5,   10,   -8,   -15,  19,   29,   -112, 0,    22,   60,   -6,   -57,
    22,   78,   -64,  33,   -27,  3,    25,   -9,  -4,   59,   -16,  -64,  -16,  -15,  31,   -33,  -38,  -43,  113,
    -102, 30,   -60,  -30,  14,   15,   -35,  49,  -20,  -102, -25,  57,   72,   -51,  -49,  12,   88,   -93,  46,
    -49,  -58,  43,   9,    14,   44,   -51,  -83, -20,  51,   42,   -62,  -42,  -22,  86,   -50,  31,   -59,  -4,
    37,   4,    26,   -2,   16,   -78,  19,   18,  52,   8,    -35,  18,   70,   -56,  4,    -59,  -3,   42,   27,
    7,    34,   -21,  -33,  2,    7,    58,   -17, -10,  -9,   106,  -93,  38,   -42,  -17,  12,   -2,   -30,  58,
    -14,  -100, -26,  28,   53,   -48,  -54,  -12, 78,   -52,  30,   -29,  17,   24,   -11,  1,    44,   3,    -64,
    -5,   -23,  33,   -14,  -37,  -32,  89,   -56, 23,   -60,  0,    31,   10,   8,    10,   13,   -75,  12,   19,
    60,   1,    -33,  19,   99,   -90,  27,   -49, -18,  18,   10,   -27,  58,   -24,  -82,  -24,  30,   59,   -49,
    -42,  -11,  83,   -76,  38,   -43,  -29,  37,  3,    10,   42,   -30,  -74,  -12,  24,   40,   -41,  -38,  -23,
    69,   -67,  16,   -58,  -29,  50,   27,   18,  36,   -42,  -39,  -4,   25,   52,   -35,  -14,  -17,  95,   -89,
    56,   -43,  -48,  35,   -5,   13,   37,   -30, -102, -16,  44,   37,   -51,  -54,  -17,  89,   -63,  27,   -74,
    -30,  45,   22,   27,   -6,   -3,   -78,  17,  50,   65,   -5,   -29,  32,   81,   -68,  26,   -64,  -33,  47,
    21,   23,   16,   -24,  -65,  4,    41,   56,  -24,  -26,  6,    83,   -54,  23,   -70,  -17,  45,   19,   28,
    -5,   2,    -68,  19,   34,   61,   2,    -25, 26,   101,  -93,  12,   -51,  -6,   10,   18,   -50,  71,   -23,
    -73,  -30,  25,   70,   -51,  -36,  -10,  94,  -59,  28,   -68,  -11,  34,   12,   14,   -3,   15,   -85,  16,
    35,   64,   3,    -36,  33,   79,   -41,  31,  -61,  -7,   46,   6,    42,   -13,  16,   -71,  27,   17,   49,
    16,   -29,  20,   77,   -47,  31,   -55,  -8,  44,   5,    34,   3,    4,    -66,  17,   12,   45,   2,    -29,
    4,    106,  -93,  28,   -46,  -10,  9,    5,   -40,  62,   -14,  -92,  -27,  27,   62,   -47,  -48,  -8,   103,
    -90,  54,   -38,  -29,  20,   -12,  -8,   46,  -15,  -111, -21,  32,   41,   -47,  -61,  -15,  90,   -95,  21,
    -46,  -26,  23,   17,   -30,  75,   -47,  -65, -33,  28,   56,   -65,  -33,  -29,  83,   -76,  34,   -53,  -36,
    42,   12,   15,   33,   -32,  -71,  -8,   35,  47,   -39,  -33,  -12,  73,   -52,  32,   -52,  -18,  48,   7,
    37,   11,   -10,  -61,  12,   14,   40,   -9,  -27,  -6,   71,   -50,  28,   -44,  -4,   42,   3,    25,   25,
    -9,   -54,  6,    -3,   38,   -11,  -26,  -19, 67,   -37,  18,   -53,  6,    46,   11,   33,   8,    3,    -44,
    20,   -6,   45,   9,    -17,  -3,   99,   -69, 34,   -61,  -15,  28,   7,    5,    10,   9,    -95,  5,    37,
    61,   -10,  -44,  23,   93,   -70,  24,   -37, 15,   11,   -3,   -28,  55,   3,    -76,  -16,  -6,   51,   -25,
    -42,  -17,  94,   -79,  19,   -51,  -5,   19,  13,   -25,  51,   -13,  -72,  -16,  19,   62,   -34,  -35,  -6,
    87,   -76,  48,   -57,  -50,  48,   7,    34,  13,   -26,  -88,  1,    50,   44,   -32,  -41,  0,    99,   -87,
    61,   -36,  -36,  27,   -15,  6,    40,   -18, -111, -18,  33,   34,   -46,  -62,  -19,  90,   -77,  43,   -56,
    -42,  42,   7,    22,   19,   -22,  -88,  -2,  46,   47,   -32,  -41,  1,    90,   -70,  55,   -33,  -20,  30,
    -18,  16,   33,   -7,   -98,  -8,   13,   29,  -29,  -55,  -22,  72,   -42,  30,   -57,  -10,  50,   7,    45,
    -5,   4,    -60,  23,   12,   43,   8,    -25, 6,    89,   -86,  46,   -46,  -44,  38,   3,    12,   40,   -36,
    -86,  -16,  40,   41,   -50,  -44,  -19,  103, -87,  42,   -44,  -21,  19,   -3,   -15,  45,   -11,  -101, -18,
    32,   50,   -41,  -54,  -7,   101,  -77,  25,  -66,  -17,  26,   16,   -8,   20,   0,    -89,  -1,   43,   70,
    -19,  -39,  24,   88,   -87,  44,   -32,  -29, 28,   -5,   -5,   63,   -37,  -82,  -27,  18,   34,   -58,  -47,
    -40,  100,  -96,  39,   -39,  -26,  17,   0,   -26,  66,   -30,  -93,  -32,  30,   49,   -60,  -51,  -24,  90,
    -61,  11,   -83,  -17,  40,   33,   13,   -6,  4,    -67,  19,   49,   80,   3,    -21,  45,   98,   -100, 23,
    -39,  -15,  11,   9,    -48,  86,   -38,  -76, -41,  21,   56,   -68,  -42,  -32,  106,  -77,  57,   -43,  -20,
    21,   -16,  4,    21,   9,    -119, -5,   31,  42,   -23,  -64,  4,    88,   -60,  22,   -74,  -20,  42,   23,
    21,   -4,   2,    -73,  17,   43,   68,   -1,  -27,  33,   98,   -72,  35,   -46,  -4,   19,   -4,   -10,  33,
    6,    -93,  -7,   17,   52,   -21,  -48,  0,   97,   -84,  31,   -49,  -18,  22,   7,    -16,  46,   -16,  -85,
    -17,  29,   56,   -39,  -43,  -6,   100,  -94, 56,   -45,  -49,  32,   -5,   6,    39,   -29,  -108, -19,  49,
    41,   -53,  -57,  -13,  104,  -86,  36,   -61, -31,  26,   11,   -6,   26,   -11,  -99,  -8,   52,   63,   -33,
    -47,  16,   72,   -52,  37,   -56,  -30,  56,  8,    49,   1,    -15,  -64,  16,   25,   39,   -9,   -28,  -2,
    68,   -67,  18,   -48,  -24,  46,   19,   13,  49,   -45,  -38,  -10,  13,   44,   -41,  -17,  -32,  106,  -79,
    41,   -44,  -5,   12,   -8,   -18,  36,   9,   -107, -12,  22,   53,   -25,  -57,  3,    81,   -91,  30,   -40,
    -36,  34,   11,   -10,  72,   -56,  -61,  -31, 25,   42,   -69,  -33,  -43,  102,  -75,  34,   -36,  11,   6,
    -11,  -31,  52,   10,   -95,  -18,  2,    50,  -27,  -53,  -12,  69,   -73,  1,    -62,  -24,  46,   38,   0,
    51,   -51,  -26,  -11,  25,   62,   -43,  -6,  -19,  72,   -49,  24,   -52,  -7,   44,   10,   27,   16,   -7,
    -54,  11,   6,    45,   -6,   -23,  -6,   96,  -91,  41,   -25,  -13,  13,   -11,  -29,  79,   -28,  -88,  -36,
    7,    37,   -61,  -53,  -44,  106,  -92,  29,  -43,  -6,   6,    2,    -42,  64,   -11,  -94,  -29,  23,   59,
    -47,  -51,  -11,  65,   -42,  12,   -48,  11,  41,   12,   19,   28,   -6,   -35,  9,    -14,  45,   -3,   -14,
    -18,  103,  -95,  53,   -30,  -27,  16,   -14, -18,  62,   -23,  -107, -31,  25,   37,   -58,  -62,  -30,  89,
    -76,  0,    -79,  -20,  35,   43,   -12,  28,  -22,  -52,  -2,   47,   84,   -25,  -14,  24,   105,  -74,  27,
    -43,  14,   5,    -4,   -34,  46,   15,   -94, -14,  7,    59,   -20,  -50,  1,    99,   -78,  11,   -54,  8,
    11,   15,   -39,  52,   -2,   -74,  -16,  16,  70,   -28,  -35,  3,    86,   -56,  16,   -62,  1,    31,   16,
    4,    15,   7,    -65,  10,   18,   63,   -2,  -27,  17,   103,  -84,  35,   -52,  -18,  20,   4,    -15,  38,
    -7,   -96,  -13,  35,   58,   -34,  -48,  4,   89,   -59,  17,   -34,  32,   9,    -5,   -29,  55,   13,   -66,
    -11,  -24,  49,   -14,  -37,  -20,  106,  -82, 19,   -71,  -15,  21,   23,   -21,  23,   0,    -89,  -4,   50,
    79,   -21,  -38,  32,   86,   -67,  12,   -73, -19,  39,   30,   6,    16,   -13,  -60,  6,    40,   71,   -15,
    -20,  21,   104,  -84,  50,   -52,  -33,  26,  -3,   2,    24,   -6,   -111, -8,   46,   51,   -33,  -56,  8,
    82,   -91,  20,   -44,  -31,  32,   19,   -18, 75,   -56,  -54,  -32,  25,   50,   -67,  -27,  -38,  89,   -80,
    39,   -21,  -2,   15,   -14,  -23,  77,   -23, -79,  -31,  -9,   31,   -52,  -49,  -50,  84,   -82,  30,   -68,
    -54,  51,   27,   22,   21,   -42,  -69,  -3,  60,   58,   -41,  -27,  5,    67,   -52,  13,   -55,  -8,   46,
    20,   20,   27,   -21,  -38,  6,    6,    50,  -15,  -13,  -13,  92,   -62,  48,   -45,  -14,  32,   -10,  20,
    13,   8,    -97,  5,    18,   39,   -11,  -50, 1,    70,   -52,  -2,   -58,  11,   36,   27,   -2,   37,   -13,
    -29,  3,    -3,   61,   -11,  -8,   -8,   98,  -66,  33,   -44,  8,    15,   -6,   -12,  31,   16,   -92,  -4,
    7,    52,   -12,  -48,  2,    109,  -97,  58,  -40,  -37,  19,   -12,  -11,  46,   -18,  -120, -24,  43,   43,
    -53,  -66,  -11,  115,  -98,  34,   -62,  -30, 15,   12,   -28,  37,   -10,  -110, -18,  59,   72,   -42,  -53,
    21,   84,   -72,  29,   -29,  3,    19,   -6,  -18,  67,   -18,  -67,  -22,  -10,  38,   -40,  -39,  -41,  75,
    -54,  27,   -53,  -13,  44,   10,   26,   17,  -10,  -59,  8,    13,   46,   -11,  -26,  -5,   100,  -93,  27,
    -34,  -4,   7,    0,    -46,  81,   -23,  -82, -36,  10,   52,   -57,  -47,  -31,  113,  -102, 25,   -49,  -12,
    2,    9,    -55,  69,   -16,  -98,  -34,  36,  70,   -55,  -51,  -3,   98,   -82,  5,    -67,  -7,   19,   30,
    -33,  43,   -12,  -67,  -12,  36,   81,   -30, -27,  16,   84,   -75,  24,   -65,  -35,  43,   24,   13,   25,
    -29,  -65,  -2,   44,   60,   -32,  -26,  4,   110,  -104, 23,   -52,  -20,  8,    14,   -51,  69,   -25,  -93,
    -34,  42,   70,   -60,  -47,  -4,   94,   -96, 30,   -41,  -26,  21,   8,    -28,  73,   -41,  -77,  -34,  27,
    51,   -64,  -42,  -31,  115,  -79,  52,   -45, -8,   10,   -17,  -13,  22,   23,   -126, -6,   30,   52,   -17,
    -68,  16,   89,   -74,  29,   -75,  -45,  49,  26,   26,   3,    -21,  -78,  8,    62,   65,   -22,  -29,  25,
    100,  -92,  35,   -62,  -44,  33,   17,   -3,  32,   -28,  -92,  -13,  59,   62,   -45,  -42,  8,    88,   -58,
    44,   -42,  -7,   31,   -10,  18,   18,   8,   -89,  5,    9,    38,   -9,   -46,  -5,   93,   -84,  48,   -25,
    -17,  19,   -16,  -12,  65,   -23,  -92,  -28, 8,    31,   -52,  -55,  -41,  93,   -83,  47,   -20,  -8,   14,
    -19,  -20,  72,   -20,  -90,  -31,  -3,   29,  -52,  -56,  -47,  67,   -67,  17,   -58,  -33,  53,   27,   23,
    35,   -46,  -38,  -3,   26,   49,   -36,  -13, -20,  96,   -93,  35,   -32,  -15,  14,   -3,   -32,  77,   -31,
    -84,  -36,  14,   44,   -61,  -48,  -38,  79,  -48,  17,   -47,  17,   29,   5,    4,    26,   10,   -57,  7,
    -10,  50,   0,    -27,  -6,   94,   -66,  34,  -65,  -22,  36,   11,   17,   3,    4,    -88,  11,   41,   60,
    -8,   -39,  25,   105,  -101, 63,   -34,  -46, 23,   -14,  -6,   54,   -31,  -117, -30,  43,   35,   -64,  -66,
    -25,  109,  -93,  22,   -49,  -3,   4,    8,   -50,  63,   -9,   -91,  -28,  26,   68,   -44,  -47,  -2,   85,
    -51,  29,   -55,  0,    34,   4,    19,   6,   14,   -75,  15,   12,   51,   4,    -34,  12,   91,   -53,  20,
    -54,  17,   21,   5,    -5,   19,   22,   -74, 8,    3,    59,   4,    -35,  13,   98,   -103, 41,   -44,  -46,
    26,   6,    -16,  64,   -47,  -91,  -33,  46,  48,   -70,  -48,  -25,  111,  -76,  39,   -48,  2,    8,    -8,
    -22,  29,   22,   -112, -7,   23,   59,   -15, -58,  15,   86,   -82,  47,   -56,  -56,  49,   9,    30,   22,
    -38,  -84,  -5,   53,   43,   -43,  -40,  -7,  74,   -76,  18,   -56,  -33,  46,   25,   9,    46,   -48,  -46,
    -12,  30,   52,   -46,  -18,  -21,  71,   -64, 17,   -59,  -26,  49,   24,   20,   29,   -34,  -45,  0,    25,
    52,   -28,  -16,  -11,  91,   -70,  31,   -56, -19,  33,   9,    7,    22,   -7,   -81,  0,    30,   55,   -20,
    -38,  6,    85,   -37,  6,    -70,  24,   30,  18,   10,   -9,   36,   -60,  29,   6,    72,   31,   -21,  39,
    81,   -66,  38,   -30,  -5,   28,   -9,   3,   51,   -16,  -71,  -13,  -5,   31,   -33,  -41,  -37,  102,  -70,
    20,   -36,  31,   -2,   -6,   -46,  59,   19,  -84,  -18,  -13,  57,   -19,  -47,  -10,  82,   -71,  36,   -54,
    -35,  45,   11,   23,   24,   -26,  -72,  -1,  34,   46,   -31,  -33,  -7,   84,   -75,  10,   -49,  -2,   24,
    18,   -23,  59,   -24,  -52,  -18,  9,    59,  -38,  -25,  -18,  98,   -71,  28,   -34,  17,   6,    -9,   -32,
    57,   8,    -85,  -18,  -8,   49,   -25,  -48, -18,  82,   -73,  16,   -53,  -14,  33,   19,   -6,   46,   -26,
    -56,  -11,  20,   56,   -35,  -25,  -13,  92,  -65,  1,    -72,  3,    26,   30,   -16,  22,   4,    -60,  5,
    27,   80,   -7,   -21,  27,   78,   -53,  12,  -46,  16,   27,   9,    -5,   38,   1,    -50,  0,    -11,  52,
    -9,   -24,  -12,  71,   -52,  1,    -54,  11,  34,   22,   -2,   39,   -12,  -33,  1,    -5,   58,   -13,  -11,
    -12,  91,   -79,  47,   -36,  -24,  28,   -8,  2,    46,   -20,  -89,  -17,  19,   36,   -42,  -49,  -26,  71,
    -46,  25,   -50,  -2,   43,   6,    28,   16,  -3,   -54,  12,   0,    42,   -3,   -24,  -9,   102,  -85,  16,
    -80,  -33,  32,   34,   -9,   17,   -15,  -81, -2,   66,   83,   -27,  -30,  37,   86,   -57,  -1,   -81,  -3,
    36,   38,   1,    5,    4,    -52,  16,   34,  83,   3,    -13,  38,   116,  -85,  41,   -55,  -12,  10,   -3,
    -22,  26,   15,   -120, -9,   42,   64,   -22, -60,  24,   78,   -69,  33,   -65,  -47,  55,   20,   37,   10,
    -32,  -66,  7,    48,   50,   -27,  -26,  4,   86,   -62,  10,   -74,  -13,  38,   30,   7,    9,    -4,   -60,
    11,   37,   73,   -7,   -20,  27};
