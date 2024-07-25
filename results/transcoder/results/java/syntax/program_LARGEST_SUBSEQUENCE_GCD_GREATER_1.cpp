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
using namespace std;
int f_gold ( int arr [ ], int n ) {
  int ans = 0;
  int maxele = * max_element ( arr, arr + n );
  for ( int i = 2;
  i <= maxele;
  ++ i ) {
    int count = 0;
    for ( int j = 0;
    j < n;
    ++ j ) {
      if ( arr [ j ] % i == 0 ) ++ count;
    }
    ans = max ( ans, count );
  }
  return ans;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int arr [ ], int n ) {
  int ans = 0;
  auto maxele = std :: max ( arr, arr + n );
  ;
  for ( int i = 2;
  true;
  ++ i )  {
  if (env_var_0 == 0 && !(ans <= ans)) break;
  if (env_var_0 == 1 && !(ans <= arr)) break;
  if (env_var_0 == 2 && !(ans <= arr+ans)) break;
  if (env_var_0 == 3 && !(ans <= arr+i)) break;
  if (env_var_0 == 4 && !(ans <= arr+n)) break;
  if (env_var_0 == 5 && !(ans <= arr[ans])) break;
  if (env_var_0 == 6 && !(ans <= arr[i])) break;
  if (env_var_0 == 7 && !(ans <= arr[n])) break;
  if (env_var_0 == 8 && !(ans <= i)) break;
  if (env_var_0 == 9 && !(ans <= maxele)) break;
  if (env_var_0 == 10 && !(ans <= maxele+ans)) break;
  if (env_var_0 == 11 && !(ans <= maxele+i)) break;
  if (env_var_0 == 12 && !(ans <= maxele+n)) break;
  if (env_var_0 == 13 && !(ans <= maxele[ans])) break;
  if (env_var_0 == 14 && !(ans <= maxele[i])) break;
  if (env_var_0 == 15 && !(ans <= maxele[n])) break;
  if (env_var_0 == 16 && !(ans <= n)) break;
  if (env_var_0 == 17 && !(arr <= ans)) break;
  if (env_var_0 == 18 && !(arr <= arr)) break;
  if (env_var_0 == 19 && !(arr <= arr+ans)) break;
  if (env_var_0 == 20 && !(arr <= arr+i)) break;
  if (env_var_0 == 21 && !(arr <= arr+n)) break;
  if (env_var_0 == 22 && !(arr <= arr[ans])) break;
  if (env_var_0 == 23 && !(arr <= arr[i])) break;
  if (env_var_0 == 24 && !(arr <= arr[n])) break;
  if (env_var_0 == 25 && !(arr <= i)) break;
  if (env_var_0 == 26 && !(arr <= maxele)) break;
  if (env_var_0 == 27 && !(arr <= maxele+ans)) break;
  if (env_var_0 == 28 && !(arr <= maxele+i)) break;
  if (env_var_0 == 29 && !(arr <= maxele+n)) break;
  if (env_var_0 == 30 && !(arr <= maxele[ans])) break;
  if (env_var_0 == 31 && !(arr <= maxele[i])) break;
  if (env_var_0 == 32 && !(arr <= maxele[n])) break;
  if (env_var_0 == 33 && !(arr <= n)) break;
  if (env_var_0 == 34 && !(arr+ans <= ans)) break;
  if (env_var_0 == 35 && !(arr+ans <= arr)) break;
  if (env_var_0 == 36 && !(arr+ans <= arr+ans)) break;
  if (env_var_0 == 37 && !(arr+ans <= arr+i)) break;
  if (env_var_0 == 38 && !(arr+ans <= arr+n)) break;
  if (env_var_0 == 39 && !(arr+ans <= arr[ans])) break;
  if (env_var_0 == 40 && !(arr+ans <= arr[i])) break;
  if (env_var_0 == 41 && !(arr+ans <= arr[n])) break;
  if (env_var_0 == 42 && !(arr+ans <= i)) break;
  if (env_var_0 == 43 && !(arr+ans <= maxele)) break;
  if (env_var_0 == 44 && !(arr+ans <= maxele+ans)) break;
  if (env_var_0 == 45 && !(arr+ans <= maxele+i)) break;
  if (env_var_0 == 46 && !(arr+ans <= maxele+n)) break;
  if (env_var_0 == 47 && !(arr+ans <= maxele[ans])) break;
  if (env_var_0 == 48 && !(arr+ans <= maxele[i])) break;
  if (env_var_0 == 49 && !(arr+ans <= maxele[n])) break;
  if (env_var_0 == 50 && !(arr+ans <= n)) break;
  if (env_var_0 == 51 && !(arr+i <= ans)) break;
  if (env_var_0 == 52 && !(arr+i <= arr)) break;
  if (env_var_0 == 53 && !(arr+i <= arr+ans)) break;
  if (env_var_0 == 54 && !(arr+i <= arr+i)) break;
  if (env_var_0 == 55 && !(arr+i <= arr+n)) break;
  if (env_var_0 == 56 && !(arr+i <= arr[ans])) break;
  if (env_var_0 == 57 && !(arr+i <= arr[i])) break;
  if (env_var_0 == 58 && !(arr+i <= arr[n])) break;
  if (env_var_0 == 59 && !(arr+i <= i)) break;
  if (env_var_0 == 60 && !(arr+i <= maxele)) break;
  if (env_var_0 == 61 && !(arr+i <= maxele+ans)) break;
  if (env_var_0 == 62 && !(arr+i <= maxele+i)) break;
  if (env_var_0 == 63 && !(arr+i <= maxele+n)) break;
  if (env_var_0 == 64 && !(arr+i <= maxele[ans])) break;
  if (env_var_0 == 65 && !(arr+i <= maxele[i])) break;
  if (env_var_0 == 66 && !(arr+i <= maxele[n])) break;
  if (env_var_0 == 67 && !(arr+i <= n)) break;
  if (env_var_0 == 68 && !(arr+n <= ans)) break;
  if (env_var_0 == 69 && !(arr+n <= arr)) break;
  if (env_var_0 == 70 && !(arr+n <= arr+ans)) break;
  if (env_var_0 == 71 && !(arr+n <= arr+i)) break;
  if (env_var_0 == 72 && !(arr+n <= arr+n)) break;
  if (env_var_0 == 73 && !(arr+n <= arr[ans])) break;
  if (env_var_0 == 74 && !(arr+n <= arr[i])) break;
  if (env_var_0 == 75 && !(arr+n <= arr[n])) break;
  if (env_var_0 == 76 && !(arr+n <= i)) break;
  if (env_var_0 == 77 && !(arr+n <= maxele)) break;
  if (env_var_0 == 78 && !(arr+n <= maxele+ans)) break;
  if (env_var_0 == 79 && !(arr+n <= maxele+i)) break;
  if (env_var_0 == 80 && !(arr+n <= maxele+n)) break;
  if (env_var_0 == 81 && !(arr+n <= maxele[ans])) break;
  if (env_var_0 == 82 && !(arr+n <= maxele[i])) break;
  if (env_var_0 == 83 && !(arr+n <= maxele[n])) break;
  if (env_var_0 == 84 && !(arr+n <= n)) break;
  if (env_var_0 == 85 && !(arr[ans] <= ans)) break;
  if (env_var_0 == 86 && !(arr[ans] <= arr)) break;
  if (env_var_0 == 87 && !(arr[ans] <= arr+ans)) break;
  if (env_var_0 == 88 && !(arr[ans] <= arr+i)) break;
  if (env_var_0 == 89 && !(arr[ans] <= arr+n)) break;
  if (env_var_0 == 90 && !(arr[ans] <= arr[ans])) break;
  if (env_var_0 == 91 && !(arr[ans] <= arr[i])) break;
  if (env_var_0 == 92 && !(arr[ans] <= arr[n])) break;
  if (env_var_0 == 93 && !(arr[ans] <= i)) break;
  if (env_var_0 == 94 && !(arr[ans] <= maxele)) break;
  if (env_var_0 == 95 && !(arr[ans] <= maxele+ans)) break;
  if (env_var_0 == 96 && !(arr[ans] <= maxele+i)) break;
  if (env_var_0 == 97 && !(arr[ans] <= maxele+n)) break;
  if (env_var_0 == 98 && !(arr[ans] <= maxele[ans])) break;
  if (env_var_0 == 99 && !(arr[ans] <= maxele[i])) break;
  if (env_var_0 == 100 && !(arr[ans] <= maxele[n])) break;
  if (env_var_0 == 101 && !(arr[ans] <= n)) break;
  if (env_var_0 == 102 && !(arr[i] <= ans)) break;
  if (env_var_0 == 103 && !(arr[i] <= arr)) break;
  if (env_var_0 == 104 && !(arr[i] <= arr+ans)) break;
  if (env_var_0 == 105 && !(arr[i] <= arr+i)) break;
  if (env_var_0 == 106 && !(arr[i] <= arr+n)) break;
  if (env_var_0 == 107 && !(arr[i] <= arr[ans])) break;
  if (env_var_0 == 108 && !(arr[i] <= arr[i])) break;
  if (env_var_0 == 109 && !(arr[i] <= arr[n])) break;
  if (env_var_0 == 110 && !(arr[i] <= i)) break;
  if (env_var_0 == 111 && !(arr[i] <= maxele)) break;
  if (env_var_0 == 112 && !(arr[i] <= maxele+ans)) break;
  if (env_var_0 == 113 && !(arr[i] <= maxele+i)) break;
  if (env_var_0 == 114 && !(arr[i] <= maxele+n)) break;
  if (env_var_0 == 115 && !(arr[i] <= maxele[ans])) break;
  if (env_var_0 == 116 && !(arr[i] <= maxele[i])) break;
  if (env_var_0 == 117 && !(arr[i] <= maxele[n])) break;
  if (env_var_0 == 118 && !(arr[i] <= n)) break;
  if (env_var_0 == 119 && !(arr[n] <= ans)) break;
  if (env_var_0 == 120 && !(arr[n] <= arr)) break;
  if (env_var_0 == 121 && !(arr[n] <= arr+ans)) break;
  if (env_var_0 == 122 && !(arr[n] <= arr+i)) break;
  if (env_var_0 == 123 && !(arr[n] <= arr+n)) break;
  if (env_var_0 == 124 && !(arr[n] <= arr[ans])) break;
  if (env_var_0 == 125 && !(arr[n] <= arr[i])) break;
  if (env_var_0 == 126 && !(arr[n] <= arr[n])) break;
  if (env_var_0 == 127 && !(arr[n] <= i)) break;
  if (env_var_0 == 128 && !(arr[n] <= maxele)) break;
  if (env_var_0 == 129 && !(arr[n] <= maxele+ans)) break;
  if (env_var_0 == 130 && !(arr[n] <= maxele+i)) break;
  if (env_var_0 == 131 && !(arr[n] <= maxele+n)) break;
  if (env_var_0 == 132 && !(arr[n] <= maxele[ans])) break;
  if (env_var_0 == 133 && !(arr[n] <= maxele[i])) break;
  if (env_var_0 == 134 && !(arr[n] <= maxele[n])) break;
  if (env_var_0 == 135 && !(arr[n] <= n)) break;
  if (env_var_0 == 136 && !(i <= ans)) break;
  if (env_var_0 == 137 && !(i <= arr)) break;
  if (env_var_0 == 138 && !(i <= arr+ans)) break;
  if (env_var_0 == 139 && !(i <= arr+i)) break;
  if (env_var_0 == 140 && !(i <= arr+n)) break;
  if (env_var_0 == 141 && !(i <= arr[ans])) break;
  if (env_var_0 == 142 && !(i <= arr[i])) break;
  if (env_var_0 == 143 && !(i <= arr[n])) break;
  if (env_var_0 == 144 && !(i <= i)) break;
  if (env_var_0 == 145 && !(i <= maxele)) break;
  if (env_var_0 == 146 && !(i <= maxele+ans)) break;
  if (env_var_0 == 147 && !(i <= maxele+i)) break;
  if (env_var_0 == 148 && !(i <= maxele+n)) break;
  if (env_var_0 == 149 && !(i <= maxele[ans])) break;
  if (env_var_0 == 150 && !(i <= maxele[i])) break;
  if (env_var_0 == 151 && !(i <= maxele[n])) break;
  if (env_var_0 == 152 && !(i <= n)) break;
  if (env_var_0 == 153 && !(maxele <= ans)) break;
  if (env_var_0 == 154 && !(maxele <= arr)) break;
  if (env_var_0 == 155 && !(maxele <= arr+ans)) break;
  if (env_var_0 == 156 && !(maxele <= arr+i)) break;
  if (env_var_0 == 157 && !(maxele <= arr+n)) break;
  if (env_var_0 == 158 && !(maxele <= arr[ans])) break;
  if (env_var_0 == 159 && !(maxele <= arr[i])) break;
  if (env_var_0 == 160 && !(maxele <= arr[n])) break;
  if (env_var_0 == 161 && !(maxele <= i)) break;
  if (env_var_0 == 162 && !(maxele <= maxele)) break;
  if (env_var_0 == 163 && !(maxele <= maxele+ans)) break;
  if (env_var_0 == 164 && !(maxele <= maxele+i)) break;
  if (env_var_0 == 165 && !(maxele <= maxele+n)) break;
  if (env_var_0 == 166 && !(maxele <= maxele[ans])) break;
  if (env_var_0 == 167 && !(maxele <= maxele[i])) break;
  if (env_var_0 == 168 && !(maxele <= maxele[n])) break;
  if (env_var_0 == 169 && !(maxele <= n)) break;
  if (env_var_0 == 170 && !(maxele+ans <= ans)) break;
  if (env_var_0 == 171 && !(maxele+ans <= arr)) break;
  if (env_var_0 == 172 && !(maxele+ans <= arr+ans)) break;
  if (env_var_0 == 173 && !(maxele+ans <= arr+i)) break;
  if (env_var_0 == 174 && !(maxele+ans <= arr+n)) break;
  if (env_var_0 == 175 && !(maxele+ans <= arr[ans])) break;
  if (env_var_0 == 176 && !(maxele+ans <= arr[i])) break;
  if (env_var_0 == 177 && !(maxele+ans <= arr[n])) break;
  if (env_var_0 == 178 && !(maxele+ans <= i)) break;
  if (env_var_0 == 179 && !(maxele+ans <= maxele)) break;
  if (env_var_0 == 180 && !(maxele+ans <= maxele+ans)) break;
  if (env_var_0 == 181 && !(maxele+ans <= maxele+i)) break;
  if (env_var_0 == 182 && !(maxele+ans <= maxele+n)) break;
  if (env_var_0 == 183 && !(maxele+ans <= maxele[ans])) break;
  if (env_var_0 == 184 && !(maxele+ans <= maxele[i])) break;
  if (env_var_0 == 185 && !(maxele+ans <= maxele[n])) break;
  if (env_var_0 == 186 && !(maxele+ans <= n)) break;
  if (env_var_0 == 187 && !(maxele+i <= ans)) break;
  if (env_var_0 == 188 && !(maxele+i <= arr)) break;
  if (env_var_0 == 189 && !(maxele+i <= arr+ans)) break;
  if (env_var_0 == 190 && !(maxele+i <= arr+i)) break;
  if (env_var_0 == 191 && !(maxele+i <= arr+n)) break;
  if (env_var_0 == 192 && !(maxele+i <= arr[ans])) break;
  if (env_var_0 == 193 && !(maxele+i <= arr[i])) break;
  if (env_var_0 == 194 && !(maxele+i <= arr[n])) break;
  if (env_var_0 == 195 && !(maxele+i <= i)) break;
  if (env_var_0 == 196 && !(maxele+i <= maxele)) break;
  if (env_var_0 == 197 && !(maxele+i <= maxele+ans)) break;
  if (env_var_0 == 198 && !(maxele+i <= maxele+i)) break;
  if (env_var_0 == 199 && !(maxele+i <= maxele+n)) break;
  if (env_var_0 == 200 && !(maxele+i <= maxele[ans])) break;
  if (env_var_0 == 201 && !(maxele+i <= maxele[i])) break;
  if (env_var_0 == 202 && !(maxele+i <= maxele[n])) break;
  if (env_var_0 == 203 && !(maxele+i <= n)) break;
  if (env_var_0 == 204 && !(maxele+n <= ans)) break;
  if (env_var_0 == 205 && !(maxele+n <= arr)) break;
  if (env_var_0 == 206 && !(maxele+n <= arr+ans)) break;
  if (env_var_0 == 207 && !(maxele+n <= arr+i)) break;
  if (env_var_0 == 208 && !(maxele+n <= arr+n)) break;
  if (env_var_0 == 209 && !(maxele+n <= arr[ans])) break;
  if (env_var_0 == 210 && !(maxele+n <= arr[i])) break;
  if (env_var_0 == 211 && !(maxele+n <= arr[n])) break;
  if (env_var_0 == 212 && !(maxele+n <= i)) break;
  if (env_var_0 == 213 && !(maxele+n <= maxele)) break;
  if (env_var_0 == 214 && !(maxele+n <= maxele+ans)) break;
  if (env_var_0 == 215 && !(maxele+n <= maxele+i)) break;
  if (env_var_0 == 216 && !(maxele+n <= maxele+n)) break;
  if (env_var_0 == 217 && !(maxele+n <= maxele[ans])) break;
  if (env_var_0 == 218 && !(maxele+n <= maxele[i])) break;
  if (env_var_0 == 219 && !(maxele+n <= maxele[n])) break;
  if (env_var_0 == 220 && !(maxele+n <= n)) break;
  if (env_var_0 == 221 && !(maxele[ans] <= ans)) break;
  if (env_var_0 == 222 && !(maxele[ans] <= arr)) break;
  if (env_var_0 == 223 && !(maxele[ans] <= arr+ans)) break;
  if (env_var_0 == 224 && !(maxele[ans] <= arr+i)) break;
  if (env_var_0 == 225 && !(maxele[ans] <= arr+n)) break;
  if (env_var_0 == 226 && !(maxele[ans] <= arr[ans])) break;
  if (env_var_0 == 227 && !(maxele[ans] <= arr[i])) break;
  if (env_var_0 == 228 && !(maxele[ans] <= arr[n])) break;
  if (env_var_0 == 229 && !(maxele[ans] <= i)) break;
  if (env_var_0 == 230 && !(maxele[ans] <= maxele)) break;
  if (env_var_0 == 231 && !(maxele[ans] <= maxele+ans)) break;
  if (env_var_0 == 232 && !(maxele[ans] <= maxele+i)) break;
  if (env_var_0 == 233 && !(maxele[ans] <= maxele+n)) break;
  if (env_var_0 == 234 && !(maxele[ans] <= maxele[ans])) break;
  if (env_var_0 == 235 && !(maxele[ans] <= maxele[i])) break;
  if (env_var_0 == 236 && !(maxele[ans] <= maxele[n])) break;
  if (env_var_0 == 237 && !(maxele[ans] <= n)) break;
  if (env_var_0 == 238 && !(maxele[i] <= ans)) break;
  if (env_var_0 == 239 && !(maxele[i] <= arr)) break;
  if (env_var_0 == 240 && !(maxele[i] <= arr+ans)) break;
  if (env_var_0 == 241 && !(maxele[i] <= arr+i)) break;
  if (env_var_0 == 242 && !(maxele[i] <= arr+n)) break;
  if (env_var_0 == 243 && !(maxele[i] <= arr[ans])) break;
  if (env_var_0 == 244 && !(maxele[i] <= arr[i])) break;
  if (env_var_0 == 245 && !(maxele[i] <= arr[n])) break;
  if (env_var_0 == 246 && !(maxele[i] <= i)) break;
  if (env_var_0 == 247 && !(maxele[i] <= maxele)) break;
  if (env_var_0 == 248 && !(maxele[i] <= maxele+ans)) break;
  if (env_var_0 == 249 && !(maxele[i] <= maxele+i)) break;
  if (env_var_0 == 250 && !(maxele[i] <= maxele+n)) break;
  if (env_var_0 == 251 && !(maxele[i] <= maxele[ans])) break;
  if (env_var_0 == 252 && !(maxele[i] <= maxele[i])) break;
  if (env_var_0 == 253 && !(maxele[i] <= maxele[n])) break;
  if (env_var_0 == 254 && !(maxele[i] <= n)) break;
  if (env_var_0 == 255 && !(maxele[n] <= ans)) break;
  if (env_var_0 == 256 && !(maxele[n] <= arr)) break;
  if (env_var_0 == 257 && !(maxele[n] <= arr+ans)) break;
  if (env_var_0 == 258 && !(maxele[n] <= arr+i)) break;
  if (env_var_0 == 259 && !(maxele[n] <= arr+n)) break;
  if (env_var_0 == 260 && !(maxele[n] <= arr[ans])) break;
  if (env_var_0 == 261 && !(maxele[n] <= arr[i])) break;
  if (env_var_0 == 262 && !(maxele[n] <= arr[n])) break;
  if (env_var_0 == 263 && !(maxele[n] <= i)) break;
  if (env_var_0 == 264 && !(maxele[n] <= maxele)) break;
  if (env_var_0 == 265 && !(maxele[n] <= maxele+ans)) break;
  if (env_var_0 == 266 && !(maxele[n] <= maxele+i)) break;
  if (env_var_0 == 267 && !(maxele[n] <= maxele+n)) break;
  if (env_var_0 == 268 && !(maxele[n] <= maxele[ans])) break;
  if (env_var_0 == 269 && !(maxele[n] <= maxele[i])) break;
  if (env_var_0 == 270 && !(maxele[n] <= maxele[n])) break;
  if (env_var_0 == 271 && !(maxele[n] <= n)) break;
  if (env_var_0 == 272 && !(n <= ans)) break;
  if (env_var_0 == 273 && !(n <= arr)) break;
  if (env_var_0 == 274 && !(n <= arr+ans)) break;
  if (env_var_0 == 275 && !(n <= arr+i)) break;
  if (env_var_0 == 276 && !(n <= arr+n)) break;
  if (env_var_0 == 277 && !(n <= arr[ans])) break;
  if (env_var_0 == 278 && !(n <= arr[i])) break;
  if (env_var_0 == 279 && !(n <= arr[n])) break;
  if (env_var_0 == 280 && !(n <= i)) break;
  if (env_var_0 == 281 && !(n <= maxele)) break;
  if (env_var_0 == 282 && !(n <= maxele+ans)) break;
  if (env_var_0 == 283 && !(n <= maxele+i)) break;
  if (env_var_0 == 284 && !(n <= maxele+n)) break;
  if (env_var_0 == 285 && !(n <= maxele[ans])) break;
  if (env_var_0 == 286 && !(n <= maxele[i])) break;
  if (env_var_0 == 287 && !(n <= maxele[n])) break;
  if (env_var_0 == 288 && !(n <= n)) break;
  {
    int count = 0;
    for ( int j = 0;
    j < n;
    ++ j ) {
      if ( arr [ j ] % i == 0 ) ++ count;
    }
    ans = std :: max ( ans, count );
  }}
  return ans;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{10,18,22,22,22,29,30,32,33,34,37,39,40,41,44,47,49,50,50,51,53,67,69,70,71,71,73,75,78,80,81,82,91,91,93,97,97,99},{-42,62,6,98,38,-4,-38,72,42,4,-22,-94,78,-90,14},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{89,92,96,71,24,27,18,19,41,1,45,8},{-98,-94,-92,-90,-82,-80,-76,-76,-72,-62,-60,-58,-56,-52,-42,-36,-32,-32,-24,-22,-20,-10,-10,-10,-8,-2,-2,0,2,4,6,6,8,10,14,18,22,26,30,46,46,62,68,74,78,82,86,86},{1,0,0,0,0,1,0,1,0,0,1,0,0,0,0,1,1,1,1,1,1,0,0,0,0,1,0,1,1,1,1,1,0,1,0,1,1,1,0,0,0,0,1,0,1,0,0,0,1},{4,8,10,10,11,17,18,25,32,33,34,37,40,41,44,47,47,52,63,77,85,87,89,89,91,95,96,98},{-86,52,-48,70,10,-94,16,14,38,62},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{95,32,87,37,86,71,30,88,96,52,88,92,79,86,19,5,74,67}};
    vector<int> param1 {35,10,23,7,40,41,23,9,30,13};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),param1[i]) == f_gold(&param0[i].front(),param1[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}

