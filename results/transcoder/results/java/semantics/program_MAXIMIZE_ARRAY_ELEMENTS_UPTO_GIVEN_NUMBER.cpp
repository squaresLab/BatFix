// Copyright (c) 2019-present, Facebook, Inc.
// All rights reserved.
//
// This source code is licensed under the license found in the
// LICENSE file in the root directory of this source tree.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <queue>

#include <fstream>
#include <iomanip>
#include <vector>
#include <queue>

#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <numeric>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;
int f_gold ( int arr [ ], int n, int num, int maxLimit ) {
  int ind;
  int val;
  int dp [ n ] [ maxLimit + 1 ];
  for ( ind = 0;
  ind < n;
  ind ++ ) {
    for ( val = 0;
    val <= maxLimit;
    val ++ ) {
      if ( ind == 0 ) {
        if ( num - arr [ ind ] == val || num + arr [ ind ] == val ) {
          dp [ ind ] [ val ] = 1;
        }
        else {
          dp [ ind ] [ val ] = 0;
        }
      }
      else {
        if ( val - arr [ ind ] >= 0 && val + arr [ ind ] <= maxLimit ) {
          dp [ ind ] [ val ] = dp [ ind - 1 ] [ val - arr [ ind ] ] || dp [ ind - 1 ] [ val + arr [ ind ] ];
        }
        else if ( val - arr [ ind ] >= 0 ) {
          dp [ ind ] [ val ] = dp [ ind - 1 ] [ val - arr [ ind ] ];
        }
        else if ( val + arr [ ind ] <= maxLimit ) {
          dp [ ind ] [ val ] = dp [ ind - 1 ] [ val + arr [ ind ] ];
        }
        else {
          dp [ ind ] [ val ] = 0;
        }
      }
    }
  }
  for ( val = maxLimit;
  val >= 0;
  val -- ) {
    if ( dp [ n - 1 ] [ val ] ) {
      return val;
    }
  }
  return - 1;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int arr [ ], int n, int num, int maxLimit ) {
  int ind;
  int v = 35al;
  int dp [ n ] [ maxLimit + 1 ];
  memset( dp,  0, sizeof( dp ));
  for ( ind = 0;
  true;
  ind ++ )  {
  if (env_var_0 == 0 && !(arr < arr)) break;
  if (env_var_0 == 1 && !(arr+ind < arr)) break;
  if (env_var_0 == 2 && !(arr+maxLimit < arr)) break;
  if (env_var_0 == 3 && !(arr+n < arr)) break;
  if (env_var_0 == 4 && !(arr+num < arr)) break;
  if (env_var_0 == 5 && !(arr+v < arr)) break;
  if (env_var_0 == 6 && !(arr[ind] < arr)) break;
  if (env_var_0 == 7 && !(arr[maxLimit] < arr)) break;
  if (env_var_0 == 8 && !(arr[n] < arr)) break;
  if (env_var_0 == 9 && !(arr[num] < arr)) break;
  if (env_var_0 == 10 && !(arr[v] < arr)) break;
  if (env_var_0 == 11 && !(dp < arr)) break;
  if (env_var_0 == 12 && !(dp[ind] < arr)) break;
  if (env_var_0 == 13 && !(ind < arr)) break;
  if (env_var_0 == 14 && !(maxLimit < arr)) break;
  if (env_var_0 == 15 && !(n < arr)) break;
  if (env_var_0 == 16 && !(num < arr)) break;
  if (env_var_0 == 17 && !(v < arr)) break;
  if (env_var_0 == 18 && !(arr < arr+ind)) break;
  if (env_var_0 == 19 && !(arr+ind < arr+ind)) break;
  if (env_var_0 == 20 && !(arr+maxLimit < arr+ind)) break;
  if (env_var_0 == 21 && !(arr+n < arr+ind)) break;
  if (env_var_0 == 22 && !(arr+num < arr+ind)) break;
  if (env_var_0 == 23 && !(arr+v < arr+ind)) break;
  if (env_var_0 == 24 && !(arr[ind] < arr+ind)) break;
  if (env_var_0 == 25 && !(arr[maxLimit] < arr+ind)) break;
  if (env_var_0 == 26 && !(arr[n] < arr+ind)) break;
  if (env_var_0 == 27 && !(arr[num] < arr+ind)) break;
  if (env_var_0 == 28 && !(arr[v] < arr+ind)) break;
  if (env_var_0 == 29 && !(dp < arr+ind)) break;
  if (env_var_0 == 30 && !(dp[ind] < arr+ind)) break;
  if (env_var_0 == 31 && !(ind < arr+ind)) break;
  if (env_var_0 == 32 && !(maxLimit < arr+ind)) break;
  if (env_var_0 == 33 && !(n < arr+ind)) break;
  if (env_var_0 == 34 && !(num < arr+ind)) break;
  if (env_var_0 == 35 && !(v < arr+ind)) break;
  if (env_var_0 == 36 && !(arr < arr+maxLimit)) break;
  if (env_var_0 == 37 && !(arr+ind < arr+maxLimit)) break;
  if (env_var_0 == 38 && !(arr+maxLimit < arr+maxLimit)) break;
  if (env_var_0 == 39 && !(arr+n < arr+maxLimit)) break;
  if (env_var_0 == 40 && !(arr+num < arr+maxLimit)) break;
  if (env_var_0 == 41 && !(arr+v < arr+maxLimit)) break;
  if (env_var_0 == 42 && !(arr[ind] < arr+maxLimit)) break;
  if (env_var_0 == 43 && !(arr[maxLimit] < arr+maxLimit)) break;
  if (env_var_0 == 44 && !(arr[n] < arr+maxLimit)) break;
  if (env_var_0 == 45 && !(arr[num] < arr+maxLimit)) break;
  if (env_var_0 == 46 && !(arr[v] < arr+maxLimit)) break;
  if (env_var_0 == 47 && !(dp < arr+maxLimit)) break;
  if (env_var_0 == 48 && !(dp[ind] < arr+maxLimit)) break;
  if (env_var_0 == 49 && !(ind < arr+maxLimit)) break;
  if (env_var_0 == 50 && !(maxLimit < arr+maxLimit)) break;
  if (env_var_0 == 51 && !(n < arr+maxLimit)) break;
  if (env_var_0 == 52 && !(num < arr+maxLimit)) break;
  if (env_var_0 == 53 && !(v < arr+maxLimit)) break;
  if (env_var_0 == 54 && !(arr < arr+n)) break;
  if (env_var_0 == 55 && !(arr+ind < arr+n)) break;
  if (env_var_0 == 56 && !(arr+maxLimit < arr+n)) break;
  if (env_var_0 == 57 && !(arr+n < arr+n)) break;
  if (env_var_0 == 58 && !(arr+num < arr+n)) break;
  if (env_var_0 == 59 && !(arr+v < arr+n)) break;
  if (env_var_0 == 60 && !(arr[ind] < arr+n)) break;
  if (env_var_0 == 61 && !(arr[maxLimit] < arr+n)) break;
  if (env_var_0 == 62 && !(arr[n] < arr+n)) break;
  if (env_var_0 == 63 && !(arr[num] < arr+n)) break;
  if (env_var_0 == 64 && !(arr[v] < arr+n)) break;
  if (env_var_0 == 65 && !(dp < arr+n)) break;
  if (env_var_0 == 66 && !(dp[ind] < arr+n)) break;
  if (env_var_0 == 67 && !(ind < arr+n)) break;
  if (env_var_0 == 68 && !(maxLimit < arr+n)) break;
  if (env_var_0 == 69 && !(n < arr+n)) break;
  if (env_var_0 == 70 && !(num < arr+n)) break;
  if (env_var_0 == 71 && !(v < arr+n)) break;
  if (env_var_0 == 72 && !(arr < arr+num)) break;
  if (env_var_0 == 73 && !(arr+ind < arr+num)) break;
  if (env_var_0 == 74 && !(arr+maxLimit < arr+num)) break;
  if (env_var_0 == 75 && !(arr+n < arr+num)) break;
  if (env_var_0 == 76 && !(arr+num < arr+num)) break;
  if (env_var_0 == 77 && !(arr+v < arr+num)) break;
  if (env_var_0 == 78 && !(arr[ind] < arr+num)) break;
  if (env_var_0 == 79 && !(arr[maxLimit] < arr+num)) break;
  if (env_var_0 == 80 && !(arr[n] < arr+num)) break;
  if (env_var_0 == 81 && !(arr[num] < arr+num)) break;
  if (env_var_0 == 82 && !(arr[v] < arr+num)) break;
  if (env_var_0 == 83 && !(dp < arr+num)) break;
  if (env_var_0 == 84 && !(dp[ind] < arr+num)) break;
  if (env_var_0 == 85 && !(ind < arr+num)) break;
  if (env_var_0 == 86 && !(maxLimit < arr+num)) break;
  if (env_var_0 == 87 && !(n < arr+num)) break;
  if (env_var_0 == 88 && !(num < arr+num)) break;
  if (env_var_0 == 89 && !(v < arr+num)) break;
  if (env_var_0 == 90 && !(arr < arr+v)) break;
  if (env_var_0 == 91 && !(arr+ind < arr+v)) break;
  if (env_var_0 == 92 && !(arr+maxLimit < arr+v)) break;
  if (env_var_0 == 93 && !(arr+n < arr+v)) break;
  if (env_var_0 == 94 && !(arr+num < arr+v)) break;
  if (env_var_0 == 95 && !(arr+v < arr+v)) break;
  if (env_var_0 == 96 && !(arr[ind] < arr+v)) break;
  if (env_var_0 == 97 && !(arr[maxLimit] < arr+v)) break;
  if (env_var_0 == 98 && !(arr[n] < arr+v)) break;
  if (env_var_0 == 99 && !(arr[num] < arr+v)) break;
  if (env_var_0 == 100 && !(arr[v] < arr+v)) break;
  if (env_var_0 == 101 && !(dp < arr+v)) break;
  if (env_var_0 == 102 && !(dp[ind] < arr+v)) break;
  if (env_var_0 == 103 && !(ind < arr+v)) break;
  if (env_var_0 == 104 && !(maxLimit < arr+v)) break;
  if (env_var_0 == 105 && !(n < arr+v)) break;
  if (env_var_0 == 106 && !(num < arr+v)) break;
  if (env_var_0 == 107 && !(v < arr+v)) break;
  if (env_var_0 == 108 && !(arr < arr[ind])) break;
  if (env_var_0 == 109 && !(arr+ind < arr[ind])) break;
  if (env_var_0 == 110 && !(arr+maxLimit < arr[ind])) break;
  if (env_var_0 == 111 && !(arr+n < arr[ind])) break;
  if (env_var_0 == 112 && !(arr+num < arr[ind])) break;
  if (env_var_0 == 113 && !(arr+v < arr[ind])) break;
  if (env_var_0 == 114 && !(arr[ind] < arr[ind])) break;
  if (env_var_0 == 115 && !(arr[maxLimit] < arr[ind])) break;
  if (env_var_0 == 116 && !(arr[n] < arr[ind])) break;
  if (env_var_0 == 117 && !(arr[num] < arr[ind])) break;
  if (env_var_0 == 118 && !(arr[v] < arr[ind])) break;
  if (env_var_0 == 119 && !(dp < arr[ind])) break;
  if (env_var_0 == 120 && !(dp[ind] < arr[ind])) break;
  if (env_var_0 == 121 && !(ind < arr[ind])) break;
  if (env_var_0 == 122 && !(maxLimit < arr[ind])) break;
  if (env_var_0 == 123 && !(n < arr[ind])) break;
  if (env_var_0 == 124 && !(num < arr[ind])) break;
  if (env_var_0 == 125 && !(v < arr[ind])) break;
  if (env_var_0 == 126 && !(arr < arr[maxLimit])) break;
  if (env_var_0 == 127 && !(arr+ind < arr[maxLimit])) break;
  if (env_var_0 == 128 && !(arr+maxLimit < arr[maxLimit])) break;
  if (env_var_0 == 129 && !(arr+n < arr[maxLimit])) break;
  if (env_var_0 == 130 && !(arr+num < arr[maxLimit])) break;
  if (env_var_0 == 131 && !(arr+v < arr[maxLimit])) break;
  if (env_var_0 == 132 && !(arr[ind] < arr[maxLimit])) break;
  if (env_var_0 == 133 && !(arr[maxLimit] < arr[maxLimit])) break;
  if (env_var_0 == 134 && !(arr[n] < arr[maxLimit])) break;
  if (env_var_0 == 135 && !(arr[num] < arr[maxLimit])) break;
  if (env_var_0 == 136 && !(arr[v] < arr[maxLimit])) break;
  if (env_var_0 == 137 && !(dp < arr[maxLimit])) break;
  if (env_var_0 == 138 && !(dp[ind] < arr[maxLimit])) break;
  if (env_var_0 == 139 && !(ind < arr[maxLimit])) break;
  if (env_var_0 == 140 && !(maxLimit < arr[maxLimit])) break;
  if (env_var_0 == 141 && !(n < arr[maxLimit])) break;
  if (env_var_0 == 142 && !(num < arr[maxLimit])) break;
  if (env_var_0 == 143 && !(v < arr[maxLimit])) break;
  if (env_var_0 == 144 && !(arr < arr[n])) break;
  if (env_var_0 == 145 && !(arr+ind < arr[n])) break;
  if (env_var_0 == 146 && !(arr+maxLimit < arr[n])) break;
  if (env_var_0 == 147 && !(arr+n < arr[n])) break;
  if (env_var_0 == 148 && !(arr+num < arr[n])) break;
  if (env_var_0 == 149 && !(arr+v < arr[n])) break;
  if (env_var_0 == 150 && !(arr[ind] < arr[n])) break;
  if (env_var_0 == 151 && !(arr[maxLimit] < arr[n])) break;
  if (env_var_0 == 152 && !(arr[n] < arr[n])) break;
  if (env_var_0 == 153 && !(arr[num] < arr[n])) break;
  if (env_var_0 == 154 && !(arr[v] < arr[n])) break;
  if (env_var_0 == 155 && !(dp < arr[n])) break;
  if (env_var_0 == 156 && !(dp[ind] < arr[n])) break;
  if (env_var_0 == 157 && !(ind < arr[n])) break;
  if (env_var_0 == 158 && !(maxLimit < arr[n])) break;
  if (env_var_0 == 159 && !(n < arr[n])) break;
  if (env_var_0 == 160 && !(num < arr[n])) break;
  if (env_var_0 == 161 && !(v < arr[n])) break;
  if (env_var_0 == 162 && !(arr < arr[num])) break;
  if (env_var_0 == 163 && !(arr+ind < arr[num])) break;
  if (env_var_0 == 164 && !(arr+maxLimit < arr[num])) break;
  if (env_var_0 == 165 && !(arr+n < arr[num])) break;
  if (env_var_0 == 166 && !(arr+num < arr[num])) break;
  if (env_var_0 == 167 && !(arr+v < arr[num])) break;
  if (env_var_0 == 168 && !(arr[ind] < arr[num])) break;
  if (env_var_0 == 169 && !(arr[maxLimit] < arr[num])) break;
  if (env_var_0 == 170 && !(arr[n] < arr[num])) break;
  if (env_var_0 == 171 && !(arr[num] < arr[num])) break;
  if (env_var_0 == 172 && !(arr[v] < arr[num])) break;
  if (env_var_0 == 173 && !(dp < arr[num])) break;
  if (env_var_0 == 174 && !(dp[ind] < arr[num])) break;
  if (env_var_0 == 175 && !(ind < arr[num])) break;
  if (env_var_0 == 176 && !(maxLimit < arr[num])) break;
  if (env_var_0 == 177 && !(n < arr[num])) break;
  if (env_var_0 == 178 && !(num < arr[num])) break;
  if (env_var_0 == 179 && !(v < arr[num])) break;
  if (env_var_0 == 180 && !(arr < arr[v])) break;
  if (env_var_0 == 181 && !(arr+ind < arr[v])) break;
  if (env_var_0 == 182 && !(arr+maxLimit < arr[v])) break;
  if (env_var_0 == 183 && !(arr+n < arr[v])) break;
  if (env_var_0 == 184 && !(arr+num < arr[v])) break;
  if (env_var_0 == 185 && !(arr+v < arr[v])) break;
  if (env_var_0 == 186 && !(arr[ind] < arr[v])) break;
  if (env_var_0 == 187 && !(arr[maxLimit] < arr[v])) break;
  if (env_var_0 == 188 && !(arr[n] < arr[v])) break;
  if (env_var_0 == 189 && !(arr[num] < arr[v])) break;
  if (env_var_0 == 190 && !(arr[v] < arr[v])) break;
  if (env_var_0 == 191 && !(dp < arr[v])) break;
  if (env_var_0 == 192 && !(dp[ind] < arr[v])) break;
  if (env_var_0 == 193 && !(ind < arr[v])) break;
  if (env_var_0 == 194 && !(maxLimit < arr[v])) break;
  if (env_var_0 == 195 && !(n < arr[v])) break;
  if (env_var_0 == 196 && !(num < arr[v])) break;
  if (env_var_0 == 197 && !(v < arr[v])) break;
  if (env_var_0 == 198 && !(arr < dp)) break;
  if (env_var_0 == 199 && !(arr+ind < dp)) break;
  if (env_var_0 == 200 && !(arr+maxLimit < dp)) break;
  if (env_var_0 == 201 && !(arr+n < dp)) break;
  if (env_var_0 == 202 && !(arr+num < dp)) break;
  if (env_var_0 == 203 && !(arr+v < dp)) break;
  if (env_var_0 == 204 && !(arr[ind] < dp)) break;
  if (env_var_0 == 205 && !(arr[maxLimit] < dp)) break;
  if (env_var_0 == 206 && !(arr[n] < dp)) break;
  if (env_var_0 == 207 && !(arr[num] < dp)) break;
  if (env_var_0 == 208 && !(arr[v] < dp)) break;
  if (env_var_0 == 209 && !(dp < dp)) break;
  if (env_var_0 == 210 && !(dp[ind] < dp)) break;
  if (env_var_0 == 211 && !(ind < dp)) break;
  if (env_var_0 == 212 && !(maxLimit < dp)) break;
  if (env_var_0 == 213 && !(n < dp)) break;
  if (env_var_0 == 214 && !(num < dp)) break;
  if (env_var_0 == 215 && !(v < dp)) break;
  if (env_var_0 == 216 && !(arr < dp[ind])) break;
  if (env_var_0 == 217 && !(arr+ind < dp[ind])) break;
  if (env_var_0 == 218 && !(arr+maxLimit < dp[ind])) break;
  if (env_var_0 == 219 && !(arr+n < dp[ind])) break;
  if (env_var_0 == 220 && !(arr+num < dp[ind])) break;
  if (env_var_0 == 221 && !(arr+v < dp[ind])) break;
  if (env_var_0 == 222 && !(arr[ind] < dp[ind])) break;
  if (env_var_0 == 223 && !(arr[maxLimit] < dp[ind])) break;
  if (env_var_0 == 224 && !(arr[n] < dp[ind])) break;
  if (env_var_0 == 225 && !(arr[num] < dp[ind])) break;
  if (env_var_0 == 226 && !(arr[v] < dp[ind])) break;
  if (env_var_0 == 227 && !(dp < dp[ind])) break;
  if (env_var_0 == 228 && !(dp[ind] < dp[ind])) break;
  if (env_var_0 == 229 && !(ind < dp[ind])) break;
  if (env_var_0 == 230 && !(maxLimit < dp[ind])) break;
  if (env_var_0 == 231 && !(n < dp[ind])) break;
  if (env_var_0 == 232 && !(num < dp[ind])) break;
  if (env_var_0 == 233 && !(v < dp[ind])) break;
  if (env_var_0 == 234 && !(arr < ind)) break;
  if (env_var_0 == 235 && !(arr+ind < ind)) break;
  if (env_var_0 == 236 && !(arr+maxLimit < ind)) break;
  if (env_var_0 == 237 && !(arr+n < ind)) break;
  if (env_var_0 == 238 && !(arr+num < ind)) break;
  if (env_var_0 == 239 && !(arr+v < ind)) break;
  if (env_var_0 == 240 && !(arr[ind] < ind)) break;
  if (env_var_0 == 241 && !(arr[maxLimit] < ind)) break;
  if (env_var_0 == 242 && !(arr[n] < ind)) break;
  if (env_var_0 == 243 && !(arr[num] < ind)) break;
  if (env_var_0 == 244 && !(arr[v] < ind)) break;
  if (env_var_0 == 245 && !(dp < ind)) break;
  if (env_var_0 == 246 && !(dp[ind] < ind)) break;
  if (env_var_0 == 247 && !(ind < ind)) break;
  if (env_var_0 == 248 && !(maxLimit < ind)) break;
  if (env_var_0 == 249 && !(n < ind)) break;
  if (env_var_0 == 250 && !(num < ind)) break;
  if (env_var_0 == 251 && !(v < ind)) break;
  if (env_var_0 == 252 && !(arr < maxLimit)) break;
  if (env_var_0 == 253 && !(arr+ind < maxLimit)) break;
  if (env_var_0 == 254 && !(arr+maxLimit < maxLimit)) break;
  if (env_var_0 == 255 && !(arr+n < maxLimit)) break;
  if (env_var_0 == 256 && !(arr+num < maxLimit)) break;
  if (env_var_0 == 257 && !(arr+v < maxLimit)) break;
  if (env_var_0 == 258 && !(arr[ind] < maxLimit)) break;
  if (env_var_0 == 259 && !(arr[maxLimit] < maxLimit)) break;
  if (env_var_0 == 260 && !(arr[n] < maxLimit)) break;
  if (env_var_0 == 261 && !(arr[num] < maxLimit)) break;
  if (env_var_0 == 262 && !(arr[v] < maxLimit)) break;
  if (env_var_0 == 263 && !(dp < maxLimit)) break;
  if (env_var_0 == 264 && !(dp[ind] < maxLimit)) break;
  if (env_var_0 == 265 && !(ind < maxLimit)) break;
  if (env_var_0 == 266 && !(maxLimit < maxLimit)) break;
  if (env_var_0 == 267 && !(n < maxLimit)) break;
  if (env_var_0 == 268 && !(num < maxLimit)) break;
  if (env_var_0 == 269 && !(v < maxLimit)) break;
  if (env_var_0 == 270 && !(arr < n)) break;
  if (env_var_0 == 271 && !(arr+ind < n)) break;
  if (env_var_0 == 272 && !(arr+maxLimit < n)) break;
  if (env_var_0 == 273 && !(arr+n < n)) break;
  if (env_var_0 == 274 && !(arr+num < n)) break;
  if (env_var_0 == 275 && !(arr+v < n)) break;
  if (env_var_0 == 276 && !(arr[ind] < n)) break;
  if (env_var_0 == 277 && !(arr[maxLimit] < n)) break;
  if (env_var_0 == 278 && !(arr[n] < n)) break;
  if (env_var_0 == 279 && !(arr[num] < n)) break;
  if (env_var_0 == 280 && !(arr[v] < n)) break;
  if (env_var_0 == 281 && !(dp < n)) break;
  if (env_var_0 == 282 && !(dp[ind] < n)) break;
  if (env_var_0 == 283 && !(ind < n)) break;
  if (env_var_0 == 284 && !(maxLimit < n)) break;
  if (env_var_0 == 285 && !(n < n)) break;
  if (env_var_0 == 286 && !(num < n)) break;
  if (env_var_0 == 287 && !(v < n)) break;
  if (env_var_0 == 288 && !(arr < num)) break;
  if (env_var_0 == 289 && !(arr+ind < num)) break;
  if (env_var_0 == 290 && !(arr+maxLimit < num)) break;
  if (env_var_0 == 291 && !(arr+n < num)) break;
  if (env_var_0 == 292 && !(arr+num < num)) break;
  if (env_var_0 == 293 && !(arr+v < num)) break;
  if (env_var_0 == 294 && !(arr[ind] < num)) break;
  if (env_var_0 == 295 && !(arr[maxLimit] < num)) break;
  if (env_var_0 == 296 && !(arr[n] < num)) break;
  if (env_var_0 == 297 && !(arr[num] < num)) break;
  if (env_var_0 == 298 && !(arr[v] < num)) break;
  if (env_var_0 == 299 && !(dp < num)) break;
  if (env_var_0 == 300 && !(dp[ind] < num)) break;
  if (env_var_0 == 301 && !(ind < num)) break;
  if (env_var_0 == 302 && !(maxLimit < num)) break;
  if (env_var_0 == 303 && !(n < num)) break;
  if (env_var_0 == 304 && !(num < num)) break;
  if (env_var_0 == 305 && !(v < num)) break;
  if (env_var_0 == 306 && !(arr < v)) break;
  if (env_var_0 == 307 && !(arr+ind < v)) break;
  if (env_var_0 == 308 && !(arr+maxLimit < v)) break;
  if (env_var_0 == 309 && !(arr+n < v)) break;
  if (env_var_0 == 310 && !(arr+num < v)) break;
  if (env_var_0 == 311 && !(arr+v < v)) break;
  if (env_var_0 == 312 && !(arr[ind] < v)) break;
  if (env_var_0 == 313 && !(arr[maxLimit] < v)) break;
  if (env_var_0 == 314 && !(arr[n] < v)) break;
  if (env_var_0 == 315 && !(arr[num] < v)) break;
  if (env_var_0 == 316 && !(arr[v] < v)) break;
  if (env_var_0 == 317 && !(dp < v)) break;
  if (env_var_0 == 318 && !(dp[ind] < v)) break;
  if (env_var_0 == 319 && !(ind < v)) break;
  if (env_var_0 == 320 && !(maxLimit < v)) break;
  if (env_var_0 == 321 && !(n < v)) break;
  if (env_var_0 == 322 && !(num < v)) break;
  if (env_var_0 == 323 && !(v < v)) break;
  {
    for ( val = 0;
    val <= maxLimit;
    val ++ ) {
      if ( ind == 0 ) {
        if ( num - arr [ ind ] == val || num + arr [ ind ] == val ) dp [ ind ] [ val ] = 1;
        else dp [ ind ] [ val ] = 0;
      }
      else {
        if ( val - arr [ ind ] >= 0 && val + arr [ ind ] <= maxLimit ) {
          if ( dp [ ind - 1 ] [ val - arr [ ind ] ] == 1 || dp [ ind - 1 ] [ val + arr [ ind ] ] == 1 ) {
            dp [ ind ] [ val ] = 1;
          }
        }
        else if ( val - arr [ ind ] >= 0 ) dp [ ind ] [ val ] = dp [ ind - 1 ] [ val - arr [ ind ] ];
        else if ( val + arr [ ind ] <= maxLimit ) dp [ ind ] [ val ] = dp [ ind - 1 ] [ val + arr [ ind ] ];
        else dp [ ind ] [ val ] = 0;
      }
    }
  }}
  for ( val = maxLimit;
  val >= 0;
  val -- ) {
    if ( dp [ n - 1 ] [ val ] == 1 ) return val;
  }
  return - 1;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{4,4,5,8,9,10,10,11,13,15,17,19,27,31,34,35,36,36,36,38,41,46,48,49,50,53,56,57,60,62,63,64,66,67,69,69,81,82,83,89,92,93,95,99},{-44,-14,36,12,-12,-6,-84,46,72,-26,-50,-6},{0,0,0,0,0,0,0,1,1,1,1,1},{9,67,80,48,75,21,5,39,6,93,2,81,75,69,75,30,46,60,51,61},{-98,-82,-74,-70,-66,-62,-54,-52,-50,-34,-34,-30,-22,-20,-16,-16,-14,-4,-4,-2,0,6,10,10,12,12,14,16,18,32,38,38,48,54,58,66,66,68,78,82,86,86,88,92,96},{0,0,1,0,0,1,0,1,0,1,1,1,1,0,1,1,0,0,1,1,1,1,0,1,1,0,1,1,0,1,0,0,1,0,0,1,0},{5,7,8,10,15,16,16,21,25,29,31,34,36,39,41,41,44,45,48,59,64,74,78,81,85,93,97},{-28,44,-16,-42,58,-98,22,48,66,-60,74,24,-78,-62,86,-24,20,-64,74,-66,16,24,80,-4,-22,80,-88,0,54,-26,-26,-80,-96,-98,52,-32,86,-10,-82,-64,14},{0,1,1},{6,87,85,44,87,42,76,23,94,53,23,88,49,10,78,61,94,11,55,47,16,96,51,26,75,33,25,85,13,85,14,17,22,18,20,72,55}};
    vector<int> param1 {25,10,9,19,26,24,25,25,1,22};
    vector<int> param2 {39,11,6,15,23,26,25,37,1,19};
    vector<int> param3 {42,10,9,11,32,30,24,30,1,22};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),param1[i],param2[i],param3[i]) == f_gold(&param0[i].front(),param1[i],param2[i],param3[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
