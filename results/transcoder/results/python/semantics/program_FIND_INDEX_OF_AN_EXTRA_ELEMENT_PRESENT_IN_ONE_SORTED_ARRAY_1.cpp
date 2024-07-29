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
#include <fstream>
#include <iomanip>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <numeric>
#include <algorithm>
using namespace std;
int f_gold ( int arr1 [ ], int arr2 [ ], int n ) {
  int index = n;
  int left = 0, right = n - 1;
  while ( left <= right ) {
    int mid = ( left + right ) / 2;
    if ( arr2 [ mid ] == arr1 [ mid ] ) left = mid + 1;
    else {
      index = mid;
      right = mid - 1;
    }
  }
  return index;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int arr1 [ ] , int arr2 [ ] , int n ) {
  int index = n ;
  int left = 0 ;
  int right = n - 1 ;
  while ( true )  {
  if (env_var_0 == 0 && !(arr1 <= arr1)) break;
  if (env_var_0 == 1 && !(arr1 <= arr1+index)) break;
  if (env_var_0 == 2 && !(arr1 <= arr1+left)) break;
  if (env_var_0 == 3 && !(arr1 <= arr1+n)) break;
  if (env_var_0 == 4 && !(arr1 <= arr1+right)) break;
  if (env_var_0 == 5 && !(arr1 <= arr1[index])) break;
  if (env_var_0 == 6 && !(arr1 <= arr1[left])) break;
  if (env_var_0 == 7 && !(arr1 <= arr1[n])) break;
  if (env_var_0 == 8 && !(arr1 <= arr1[right])) break;
  if (env_var_0 == 9 && !(arr1 <= arr2)) break;
  if (env_var_0 == 10 && !(arr1 <= arr2+index)) break;
  if (env_var_0 == 11 && !(arr1 <= arr2+left)) break;
  if (env_var_0 == 12 && !(arr1 <= arr2+n)) break;
  if (env_var_0 == 13 && !(arr1 <= arr2+right)) break;
  if (env_var_0 == 14 && !(arr1 <= arr2[index])) break;
  if (env_var_0 == 15 && !(arr1 <= arr2[left])) break;
  if (env_var_0 == 16 && !(arr1 <= arr2[n])) break;
  if (env_var_0 == 17 && !(arr1 <= arr2[right])) break;
  if (env_var_0 == 18 && !(arr1 <= index)) break;
  if (env_var_0 == 19 && !(arr1 <= left)) break;
  if (env_var_0 == 20 && !(arr1 <= n)) break;
  if (env_var_0 == 21 && !(arr1 <= right)) break;
  if (env_var_0 == 22 && !(arr1+index <= arr1)) break;
  if (env_var_0 == 23 && !(arr1+index <= arr1+index)) break;
  if (env_var_0 == 24 && !(arr1+index <= arr1+left)) break;
  if (env_var_0 == 25 && !(arr1+index <= arr1+n)) break;
  if (env_var_0 == 26 && !(arr1+index <= arr1+right)) break;
  if (env_var_0 == 27 && !(arr1+index <= arr1[index])) break;
  if (env_var_0 == 28 && !(arr1+index <= arr1[left])) break;
  if (env_var_0 == 29 && !(arr1+index <= arr1[n])) break;
  if (env_var_0 == 30 && !(arr1+index <= arr1[right])) break;
  if (env_var_0 == 31 && !(arr1+index <= arr2)) break;
  if (env_var_0 == 32 && !(arr1+index <= arr2+index)) break;
  if (env_var_0 == 33 && !(arr1+index <= arr2+left)) break;
  if (env_var_0 == 34 && !(arr1+index <= arr2+n)) break;
  if (env_var_0 == 35 && !(arr1+index <= arr2+right)) break;
  if (env_var_0 == 36 && !(arr1+index <= arr2[index])) break;
  if (env_var_0 == 37 && !(arr1+index <= arr2[left])) break;
  if (env_var_0 == 38 && !(arr1+index <= arr2[n])) break;
  if (env_var_0 == 39 && !(arr1+index <= arr2[right])) break;
  if (env_var_0 == 40 && !(arr1+index <= index)) break;
  if (env_var_0 == 41 && !(arr1+index <= left)) break;
  if (env_var_0 == 42 && !(arr1+index <= n)) break;
  if (env_var_0 == 43 && !(arr1+index <= right)) break;
  if (env_var_0 == 44 && !(arr1+left <= arr1)) break;
  if (env_var_0 == 45 && !(arr1+left <= arr1+index)) break;
  if (env_var_0 == 46 && !(arr1+left <= arr1+left)) break;
  if (env_var_0 == 47 && !(arr1+left <= arr1+n)) break;
  if (env_var_0 == 48 && !(arr1+left <= arr1+right)) break;
  if (env_var_0 == 49 && !(arr1+left <= arr1[index])) break;
  if (env_var_0 == 50 && !(arr1+left <= arr1[left])) break;
  if (env_var_0 == 51 && !(arr1+left <= arr1[n])) break;
  if (env_var_0 == 52 && !(arr1+left <= arr1[right])) break;
  if (env_var_0 == 53 && !(arr1+left <= arr2)) break;
  if (env_var_0 == 54 && !(arr1+left <= arr2+index)) break;
  if (env_var_0 == 55 && !(arr1+left <= arr2+left)) break;
  if (env_var_0 == 56 && !(arr1+left <= arr2+n)) break;
  if (env_var_0 == 57 && !(arr1+left <= arr2+right)) break;
  if (env_var_0 == 58 && !(arr1+left <= arr2[index])) break;
  if (env_var_0 == 59 && !(arr1+left <= arr2[left])) break;
  if (env_var_0 == 60 && !(arr1+left <= arr2[n])) break;
  if (env_var_0 == 61 && !(arr1+left <= arr2[right])) break;
  if (env_var_0 == 62 && !(arr1+left <= index)) break;
  if (env_var_0 == 63 && !(arr1+left <= left)) break;
  if (env_var_0 == 64 && !(arr1+left <= n)) break;
  if (env_var_0 == 65 && !(arr1+left <= right)) break;
  if (env_var_0 == 66 && !(arr1+n <= arr1)) break;
  if (env_var_0 == 67 && !(arr1+n <= arr1+index)) break;
  if (env_var_0 == 68 && !(arr1+n <= arr1+left)) break;
  if (env_var_0 == 69 && !(arr1+n <= arr1+n)) break;
  if (env_var_0 == 70 && !(arr1+n <= arr1+right)) break;
  if (env_var_0 == 71 && !(arr1+n <= arr1[index])) break;
  if (env_var_0 == 72 && !(arr1+n <= arr1[left])) break;
  if (env_var_0 == 73 && !(arr1+n <= arr1[n])) break;
  if (env_var_0 == 74 && !(arr1+n <= arr1[right])) break;
  if (env_var_0 == 75 && !(arr1+n <= arr2)) break;
  if (env_var_0 == 76 && !(arr1+n <= arr2+index)) break;
  if (env_var_0 == 77 && !(arr1+n <= arr2+left)) break;
  if (env_var_0 == 78 && !(arr1+n <= arr2+n)) break;
  if (env_var_0 == 79 && !(arr1+n <= arr2+right)) break;
  if (env_var_0 == 80 && !(arr1+n <= arr2[index])) break;
  if (env_var_0 == 81 && !(arr1+n <= arr2[left])) break;
  if (env_var_0 == 82 && !(arr1+n <= arr2[n])) break;
  if (env_var_0 == 83 && !(arr1+n <= arr2[right])) break;
  if (env_var_0 == 84 && !(arr1+n <= index)) break;
  if (env_var_0 == 85 && !(arr1+n <= left)) break;
  if (env_var_0 == 86 && !(arr1+n <= n)) break;
  if (env_var_0 == 87 && !(arr1+n <= right)) break;
  if (env_var_0 == 88 && !(arr1+right <= arr1)) break;
  if (env_var_0 == 89 && !(arr1+right <= arr1+index)) break;
  if (env_var_0 == 90 && !(arr1+right <= arr1+left)) break;
  if (env_var_0 == 91 && !(arr1+right <= arr1+n)) break;
  if (env_var_0 == 92 && !(arr1+right <= arr1+right)) break;
  if (env_var_0 == 93 && !(arr1+right <= arr1[index])) break;
  if (env_var_0 == 94 && !(arr1+right <= arr1[left])) break;
  if (env_var_0 == 95 && !(arr1+right <= arr1[n])) break;
  if (env_var_0 == 96 && !(arr1+right <= arr1[right])) break;
  if (env_var_0 == 97 && !(arr1+right <= arr2)) break;
  if (env_var_0 == 98 && !(arr1+right <= arr2+index)) break;
  if (env_var_0 == 99 && !(arr1+right <= arr2+left)) break;
  if (env_var_0 == 100 && !(arr1+right <= arr2+n)) break;
  if (env_var_0 == 101 && !(arr1+right <= arr2+right)) break;
  if (env_var_0 == 102 && !(arr1+right <= arr2[index])) break;
  if (env_var_0 == 103 && !(arr1+right <= arr2[left])) break;
  if (env_var_0 == 104 && !(arr1+right <= arr2[n])) break;
  if (env_var_0 == 105 && !(arr1+right <= arr2[right])) break;
  if (env_var_0 == 106 && !(arr1+right <= index)) break;
  if (env_var_0 == 107 && !(arr1+right <= left)) break;
  if (env_var_0 == 108 && !(arr1+right <= n)) break;
  if (env_var_0 == 109 && !(arr1+right <= right)) break;
  if (env_var_0 == 110 && !(arr1[index] <= arr1)) break;
  if (env_var_0 == 111 && !(arr1[index] <= arr1+index)) break;
  if (env_var_0 == 112 && !(arr1[index] <= arr1+left)) break;
  if (env_var_0 == 113 && !(arr1[index] <= arr1+n)) break;
  if (env_var_0 == 114 && !(arr1[index] <= arr1+right)) break;
  if (env_var_0 == 115 && !(arr1[index] <= arr1[index])) break;
  if (env_var_0 == 116 && !(arr1[index] <= arr1[left])) break;
  if (env_var_0 == 117 && !(arr1[index] <= arr1[n])) break;
  if (env_var_0 == 118 && !(arr1[index] <= arr1[right])) break;
  if (env_var_0 == 119 && !(arr1[index] <= arr2)) break;
  if (env_var_0 == 120 && !(arr1[index] <= arr2+index)) break;
  if (env_var_0 == 121 && !(arr1[index] <= arr2+left)) break;
  if (env_var_0 == 122 && !(arr1[index] <= arr2+n)) break;
  if (env_var_0 == 123 && !(arr1[index] <= arr2+right)) break;
  if (env_var_0 == 124 && !(arr1[index] <= arr2[index])) break;
  if (env_var_0 == 125 && !(arr1[index] <= arr2[left])) break;
  if (env_var_0 == 126 && !(arr1[index] <= arr2[n])) break;
  if (env_var_0 == 127 && !(arr1[index] <= arr2[right])) break;
  if (env_var_0 == 128 && !(arr1[index] <= index)) break;
  if (env_var_0 == 129 && !(arr1[index] <= left)) break;
  if (env_var_0 == 130 && !(arr1[index] <= n)) break;
  if (env_var_0 == 131 && !(arr1[index] <= right)) break;
  if (env_var_0 == 132 && !(arr1[left] <= arr1)) break;
  if (env_var_0 == 133 && !(arr1[left] <= arr1+index)) break;
  if (env_var_0 == 134 && !(arr1[left] <= arr1+left)) break;
  if (env_var_0 == 135 && !(arr1[left] <= arr1+n)) break;
  if (env_var_0 == 136 && !(arr1[left] <= arr1+right)) break;
  if (env_var_0 == 137 && !(arr1[left] <= arr1[index])) break;
  if (env_var_0 == 138 && !(arr1[left] <= arr1[left])) break;
  if (env_var_0 == 139 && !(arr1[left] <= arr1[n])) break;
  if (env_var_0 == 140 && !(arr1[left] <= arr1[right])) break;
  if (env_var_0 == 141 && !(arr1[left] <= arr2)) break;
  if (env_var_0 == 142 && !(arr1[left] <= arr2+index)) break;
  if (env_var_0 == 143 && !(arr1[left] <= arr2+left)) break;
  if (env_var_0 == 144 && !(arr1[left] <= arr2+n)) break;
  if (env_var_0 == 145 && !(arr1[left] <= arr2+right)) break;
  if (env_var_0 == 146 && !(arr1[left] <= arr2[index])) break;
  if (env_var_0 == 147 && !(arr1[left] <= arr2[left])) break;
  if (env_var_0 == 148 && !(arr1[left] <= arr2[n])) break;
  if (env_var_0 == 149 && !(arr1[left] <= arr2[right])) break;
  if (env_var_0 == 150 && !(arr1[left] <= index)) break;
  if (env_var_0 == 151 && !(arr1[left] <= left)) break;
  if (env_var_0 == 152 && !(arr1[left] <= n)) break;
  if (env_var_0 == 153 && !(arr1[left] <= right)) break;
  if (env_var_0 == 154 && !(arr1[n] <= arr1)) break;
  if (env_var_0 == 155 && !(arr1[n] <= arr1+index)) break;
  if (env_var_0 == 156 && !(arr1[n] <= arr1+left)) break;
  if (env_var_0 == 157 && !(arr1[n] <= arr1+n)) break;
  if (env_var_0 == 158 && !(arr1[n] <= arr1+right)) break;
  if (env_var_0 == 159 && !(arr1[n] <= arr1[index])) break;
  if (env_var_0 == 160 && !(arr1[n] <= arr1[left])) break;
  if (env_var_0 == 161 && !(arr1[n] <= arr1[n])) break;
  if (env_var_0 == 162 && !(arr1[n] <= arr1[right])) break;
  if (env_var_0 == 163 && !(arr1[n] <= arr2)) break;
  if (env_var_0 == 164 && !(arr1[n] <= arr2+index)) break;
  if (env_var_0 == 165 && !(arr1[n] <= arr2+left)) break;
  if (env_var_0 == 166 && !(arr1[n] <= arr2+n)) break;
  if (env_var_0 == 167 && !(arr1[n] <= arr2+right)) break;
  if (env_var_0 == 168 && !(arr1[n] <= arr2[index])) break;
  if (env_var_0 == 169 && !(arr1[n] <= arr2[left])) break;
  if (env_var_0 == 170 && !(arr1[n] <= arr2[n])) break;
  if (env_var_0 == 171 && !(arr1[n] <= arr2[right])) break;
  if (env_var_0 == 172 && !(arr1[n] <= index)) break;
  if (env_var_0 == 173 && !(arr1[n] <= left)) break;
  if (env_var_0 == 174 && !(arr1[n] <= n)) break;
  if (env_var_0 == 175 && !(arr1[n] <= right)) break;
  if (env_var_0 == 176 && !(arr1[right] <= arr1)) break;
  if (env_var_0 == 177 && !(arr1[right] <= arr1+index)) break;
  if (env_var_0 == 178 && !(arr1[right] <= arr1+left)) break;
  if (env_var_0 == 179 && !(arr1[right] <= arr1+n)) break;
  if (env_var_0 == 180 && !(arr1[right] <= arr1+right)) break;
  if (env_var_0 == 181 && !(arr1[right] <= arr1[index])) break;
  if (env_var_0 == 182 && !(arr1[right] <= arr1[left])) break;
  if (env_var_0 == 183 && !(arr1[right] <= arr1[n])) break;
  if (env_var_0 == 184 && !(arr1[right] <= arr1[right])) break;
  if (env_var_0 == 185 && !(arr1[right] <= arr2)) break;
  if (env_var_0 == 186 && !(arr1[right] <= arr2+index)) break;
  if (env_var_0 == 187 && !(arr1[right] <= arr2+left)) break;
  if (env_var_0 == 188 && !(arr1[right] <= arr2+n)) break;
  if (env_var_0 == 189 && !(arr1[right] <= arr2+right)) break;
  if (env_var_0 == 190 && !(arr1[right] <= arr2[index])) break;
  if (env_var_0 == 191 && !(arr1[right] <= arr2[left])) break;
  if (env_var_0 == 192 && !(arr1[right] <= arr2[n])) break;
  if (env_var_0 == 193 && !(arr1[right] <= arr2[right])) break;
  if (env_var_0 == 194 && !(arr1[right] <= index)) break;
  if (env_var_0 == 195 && !(arr1[right] <= left)) break;
  if (env_var_0 == 196 && !(arr1[right] <= n)) break;
  if (env_var_0 == 197 && !(arr1[right] <= right)) break;
  if (env_var_0 == 198 && !(arr2 <= arr1)) break;
  if (env_var_0 == 199 && !(arr2 <= arr1+index)) break;
  if (env_var_0 == 200 && !(arr2 <= arr1+left)) break;
  if (env_var_0 == 201 && !(arr2 <= arr1+n)) break;
  if (env_var_0 == 202 && !(arr2 <= arr1+right)) break;
  if (env_var_0 == 203 && !(arr2 <= arr1[index])) break;
  if (env_var_0 == 204 && !(arr2 <= arr1[left])) break;
  if (env_var_0 == 205 && !(arr2 <= arr1[n])) break;
  if (env_var_0 == 206 && !(arr2 <= arr1[right])) break;
  if (env_var_0 == 207 && !(arr2 <= arr2)) break;
  if (env_var_0 == 208 && !(arr2 <= arr2+index)) break;
  if (env_var_0 == 209 && !(arr2 <= arr2+left)) break;
  if (env_var_0 == 210 && !(arr2 <= arr2+n)) break;
  if (env_var_0 == 211 && !(arr2 <= arr2+right)) break;
  if (env_var_0 == 212 && !(arr2 <= arr2[index])) break;
  if (env_var_0 == 213 && !(arr2 <= arr2[left])) break;
  if (env_var_0 == 214 && !(arr2 <= arr2[n])) break;
  if (env_var_0 == 215 && !(arr2 <= arr2[right])) break;
  if (env_var_0 == 216 && !(arr2 <= index)) break;
  if (env_var_0 == 217 && !(arr2 <= left)) break;
  if (env_var_0 == 218 && !(arr2 <= n)) break;
  if (env_var_0 == 219 && !(arr2 <= right)) break;
  if (env_var_0 == 220 && !(arr2+index <= arr1)) break;
  if (env_var_0 == 221 && !(arr2+index <= arr1+index)) break;
  if (env_var_0 == 222 && !(arr2+index <= arr1+left)) break;
  if (env_var_0 == 223 && !(arr2+index <= arr1+n)) break;
  if (env_var_0 == 224 && !(arr2+index <= arr1+right)) break;
  if (env_var_0 == 225 && !(arr2+index <= arr1[index])) break;
  if (env_var_0 == 226 && !(arr2+index <= arr1[left])) break;
  if (env_var_0 == 227 && !(arr2+index <= arr1[n])) break;
  if (env_var_0 == 228 && !(arr2+index <= arr1[right])) break;
  if (env_var_0 == 229 && !(arr2+index <= arr2)) break;
  if (env_var_0 == 230 && !(arr2+index <= arr2+index)) break;
  if (env_var_0 == 231 && !(arr2+index <= arr2+left)) break;
  if (env_var_0 == 232 && !(arr2+index <= arr2+n)) break;
  if (env_var_0 == 233 && !(arr2+index <= arr2+right)) break;
  if (env_var_0 == 234 && !(arr2+index <= arr2[index])) break;
  if (env_var_0 == 235 && !(arr2+index <= arr2[left])) break;
  if (env_var_0 == 236 && !(arr2+index <= arr2[n])) break;
  if (env_var_0 == 237 && !(arr2+index <= arr2[right])) break;
  if (env_var_0 == 238 && !(arr2+index <= index)) break;
  if (env_var_0 == 239 && !(arr2+index <= left)) break;
  if (env_var_0 == 240 && !(arr2+index <= n)) break;
  if (env_var_0 == 241 && !(arr2+index <= right)) break;
  if (env_var_0 == 242 && !(arr2+left <= arr1)) break;
  if (env_var_0 == 243 && !(arr2+left <= arr1+index)) break;
  if (env_var_0 == 244 && !(arr2+left <= arr1+left)) break;
  if (env_var_0 == 245 && !(arr2+left <= arr1+n)) break;
  if (env_var_0 == 246 && !(arr2+left <= arr1+right)) break;
  if (env_var_0 == 247 && !(arr2+left <= arr1[index])) break;
  if (env_var_0 == 248 && !(arr2+left <= arr1[left])) break;
  if (env_var_0 == 249 && !(arr2+left <= arr1[n])) break;
  if (env_var_0 == 250 && !(arr2+left <= arr1[right])) break;
  if (env_var_0 == 251 && !(arr2+left <= arr2)) break;
  if (env_var_0 == 252 && !(arr2+left <= arr2+index)) break;
  if (env_var_0 == 253 && !(arr2+left <= arr2+left)) break;
  if (env_var_0 == 254 && !(arr2+left <= arr2+n)) break;
  if (env_var_0 == 255 && !(arr2+left <= arr2+right)) break;
  if (env_var_0 == 256 && !(arr2+left <= arr2[index])) break;
  if (env_var_0 == 257 && !(arr2+left <= arr2[left])) break;
  if (env_var_0 == 258 && !(arr2+left <= arr2[n])) break;
  if (env_var_0 == 259 && !(arr2+left <= arr2[right])) break;
  if (env_var_0 == 260 && !(arr2+left <= index)) break;
  if (env_var_0 == 261 && !(arr2+left <= left)) break;
  if (env_var_0 == 262 && !(arr2+left <= n)) break;
  if (env_var_0 == 263 && !(arr2+left <= right)) break;
  if (env_var_0 == 264 && !(arr2+n <= arr1)) break;
  if (env_var_0 == 265 && !(arr2+n <= arr1+index)) break;
  if (env_var_0 == 266 && !(arr2+n <= arr1+left)) break;
  if (env_var_0 == 267 && !(arr2+n <= arr1+n)) break;
  if (env_var_0 == 268 && !(arr2+n <= arr1+right)) break;
  if (env_var_0 == 269 && !(arr2+n <= arr1[index])) break;
  if (env_var_0 == 270 && !(arr2+n <= arr1[left])) break;
  if (env_var_0 == 271 && !(arr2+n <= arr1[n])) break;
  if (env_var_0 == 272 && !(arr2+n <= arr1[right])) break;
  if (env_var_0 == 273 && !(arr2+n <= arr2)) break;
  if (env_var_0 == 274 && !(arr2+n <= arr2+index)) break;
  if (env_var_0 == 275 && !(arr2+n <= arr2+left)) break;
  if (env_var_0 == 276 && !(arr2+n <= arr2+n)) break;
  if (env_var_0 == 277 && !(arr2+n <= arr2+right)) break;
  if (env_var_0 == 278 && !(arr2+n <= arr2[index])) break;
  if (env_var_0 == 279 && !(arr2+n <= arr2[left])) break;
  if (env_var_0 == 280 && !(arr2+n <= arr2[n])) break;
  if (env_var_0 == 281 && !(arr2+n <= arr2[right])) break;
  if (env_var_0 == 282 && !(arr2+n <= index)) break;
  if (env_var_0 == 283 && !(arr2+n <= left)) break;
  if (env_var_0 == 284 && !(arr2+n <= n)) break;
  if (env_var_0 == 285 && !(arr2+n <= right)) break;
  if (env_var_0 == 286 && !(arr2+right <= arr1)) break;
  if (env_var_0 == 287 && !(arr2+right <= arr1+index)) break;
  if (env_var_0 == 288 && !(arr2+right <= arr1+left)) break;
  if (env_var_0 == 289 && !(arr2+right <= arr1+n)) break;
  if (env_var_0 == 290 && !(arr2+right <= arr1+right)) break;
  if (env_var_0 == 291 && !(arr2+right <= arr1[index])) break;
  if (env_var_0 == 292 && !(arr2+right <= arr1[left])) break;
  if (env_var_0 == 293 && !(arr2+right <= arr1[n])) break;
  if (env_var_0 == 294 && !(arr2+right <= arr1[right])) break;
  if (env_var_0 == 295 && !(arr2+right <= arr2)) break;
  if (env_var_0 == 296 && !(arr2+right <= arr2+index)) break;
  if (env_var_0 == 297 && !(arr2+right <= arr2+left)) break;
  if (env_var_0 == 298 && !(arr2+right <= arr2+n)) break;
  if (env_var_0 == 299 && !(arr2+right <= arr2+right)) break;
  if (env_var_0 == 300 && !(arr2+right <= arr2[index])) break;
  if (env_var_0 == 301 && !(arr2+right <= arr2[left])) break;
  if (env_var_0 == 302 && !(arr2+right <= arr2[n])) break;
  if (env_var_0 == 303 && !(arr2+right <= arr2[right])) break;
  if (env_var_0 == 304 && !(arr2+right <= index)) break;
  if (env_var_0 == 305 && !(arr2+right <= left)) break;
  if (env_var_0 == 306 && !(arr2+right <= n)) break;
  if (env_var_0 == 307 && !(arr2+right <= right)) break;
  if (env_var_0 == 308 && !(arr2[index] <= arr1)) break;
  if (env_var_0 == 309 && !(arr2[index] <= arr1+index)) break;
  if (env_var_0 == 310 && !(arr2[index] <= arr1+left)) break;
  if (env_var_0 == 311 && !(arr2[index] <= arr1+n)) break;
  if (env_var_0 == 312 && !(arr2[index] <= arr1+right)) break;
  if (env_var_0 == 313 && !(arr2[index] <= arr1[index])) break;
  if (env_var_0 == 314 && !(arr2[index] <= arr1[left])) break;
  if (env_var_0 == 315 && !(arr2[index] <= arr1[n])) break;
  if (env_var_0 == 316 && !(arr2[index] <= arr1[right])) break;
  if (env_var_0 == 317 && !(arr2[index] <= arr2)) break;
  if (env_var_0 == 318 && !(arr2[index] <= arr2+index)) break;
  if (env_var_0 == 319 && !(arr2[index] <= arr2+left)) break;
  if (env_var_0 == 320 && !(arr2[index] <= arr2+n)) break;
  if (env_var_0 == 321 && !(arr2[index] <= arr2+right)) break;
  if (env_var_0 == 322 && !(arr2[index] <= arr2[index])) break;
  if (env_var_0 == 323 && !(arr2[index] <= arr2[left])) break;
  if (env_var_0 == 324 && !(arr2[index] <= arr2[n])) break;
  if (env_var_0 == 325 && !(arr2[index] <= arr2[right])) break;
  if (env_var_0 == 326 && !(arr2[index] <= index)) break;
  if (env_var_0 == 327 && !(arr2[index] <= left)) break;
  if (env_var_0 == 328 && !(arr2[index] <= n)) break;
  if (env_var_0 == 329 && !(arr2[index] <= right)) break;
  if (env_var_0 == 330 && !(arr2[left] <= arr1)) break;
  if (env_var_0 == 331 && !(arr2[left] <= arr1+index)) break;
  if (env_var_0 == 332 && !(arr2[left] <= arr1+left)) break;
  if (env_var_0 == 333 && !(arr2[left] <= arr1+n)) break;
  if (env_var_0 == 334 && !(arr2[left] <= arr1+right)) break;
  if (env_var_0 == 335 && !(arr2[left] <= arr1[index])) break;
  if (env_var_0 == 336 && !(arr2[left] <= arr1[left])) break;
  if (env_var_0 == 337 && !(arr2[left] <= arr1[n])) break;
  if (env_var_0 == 338 && !(arr2[left] <= arr1[right])) break;
  if (env_var_0 == 339 && !(arr2[left] <= arr2)) break;
  if (env_var_0 == 340 && !(arr2[left] <= arr2+index)) break;
  if (env_var_0 == 341 && !(arr2[left] <= arr2+left)) break;
  if (env_var_0 == 342 && !(arr2[left] <= arr2+n)) break;
  if (env_var_0 == 343 && !(arr2[left] <= arr2+right)) break;
  if (env_var_0 == 344 && !(arr2[left] <= arr2[index])) break;
  if (env_var_0 == 345 && !(arr2[left] <= arr2[left])) break;
  if (env_var_0 == 346 && !(arr2[left] <= arr2[n])) break;
  if (env_var_0 == 347 && !(arr2[left] <= arr2[right])) break;
  if (env_var_0 == 348 && !(arr2[left] <= index)) break;
  if (env_var_0 == 349 && !(arr2[left] <= left)) break;
  if (env_var_0 == 350 && !(arr2[left] <= n)) break;
  if (env_var_0 == 351 && !(arr2[left] <= right)) break;
  if (env_var_0 == 352 && !(arr2[n] <= arr1)) break;
  if (env_var_0 == 353 && !(arr2[n] <= arr1+index)) break;
  if (env_var_0 == 354 && !(arr2[n] <= arr1+left)) break;
  if (env_var_0 == 355 && !(arr2[n] <= arr1+n)) break;
  if (env_var_0 == 356 && !(arr2[n] <= arr1+right)) break;
  if (env_var_0 == 357 && !(arr2[n] <= arr1[index])) break;
  if (env_var_0 == 358 && !(arr2[n] <= arr1[left])) break;
  if (env_var_0 == 359 && !(arr2[n] <= arr1[n])) break;
  if (env_var_0 == 360 && !(arr2[n] <= arr1[right])) break;
  if (env_var_0 == 361 && !(arr2[n] <= arr2)) break;
  if (env_var_0 == 362 && !(arr2[n] <= arr2+index)) break;
  if (env_var_0 == 363 && !(arr2[n] <= arr2+left)) break;
  if (env_var_0 == 364 && !(arr2[n] <= arr2+n)) break;
  if (env_var_0 == 365 && !(arr2[n] <= arr2+right)) break;
  if (env_var_0 == 366 && !(arr2[n] <= arr2[index])) break;
  if (env_var_0 == 367 && !(arr2[n] <= arr2[left])) break;
  if (env_var_0 == 368 && !(arr2[n] <= arr2[n])) break;
  if (env_var_0 == 369 && !(arr2[n] <= arr2[right])) break;
  if (env_var_0 == 370 && !(arr2[n] <= index)) break;
  if (env_var_0 == 371 && !(arr2[n] <= left)) break;
  if (env_var_0 == 372 && !(arr2[n] <= n)) break;
  if (env_var_0 == 373 && !(arr2[n] <= right)) break;
  if (env_var_0 == 374 && !(arr2[right] <= arr1)) break;
  if (env_var_0 == 375 && !(arr2[right] <= arr1+index)) break;
  if (env_var_0 == 376 && !(arr2[right] <= arr1+left)) break;
  if (env_var_0 == 377 && !(arr2[right] <= arr1+n)) break;
  if (env_var_0 == 378 && !(arr2[right] <= arr1+right)) break;
  if (env_var_0 == 379 && !(arr2[right] <= arr1[index])) break;
  if (env_var_0 == 380 && !(arr2[right] <= arr1[left])) break;
  if (env_var_0 == 381 && !(arr2[right] <= arr1[n])) break;
  if (env_var_0 == 382 && !(arr2[right] <= arr1[right])) break;
  if (env_var_0 == 383 && !(arr2[right] <= arr2)) break;
  if (env_var_0 == 384 && !(arr2[right] <= arr2+index)) break;
  if (env_var_0 == 385 && !(arr2[right] <= arr2+left)) break;
  if (env_var_0 == 386 && !(arr2[right] <= arr2+n)) break;
  if (env_var_0 == 387 && !(arr2[right] <= arr2+right)) break;
  if (env_var_0 == 388 && !(arr2[right] <= arr2[index])) break;
  if (env_var_0 == 389 && !(arr2[right] <= arr2[left])) break;
  if (env_var_0 == 390 && !(arr2[right] <= arr2[n])) break;
  if (env_var_0 == 391 && !(arr2[right] <= arr2[right])) break;
  if (env_var_0 == 392 && !(arr2[right] <= index)) break;
  if (env_var_0 == 393 && !(arr2[right] <= left)) break;
  if (env_var_0 == 394 && !(arr2[right] <= n)) break;
  if (env_var_0 == 395 && !(arr2[right] <= right)) break;
  if (env_var_0 == 396 && !(index <= arr1)) break;
  if (env_var_0 == 397 && !(index <= arr1+index)) break;
  if (env_var_0 == 398 && !(index <= arr1+left)) break;
  if (env_var_0 == 399 && !(index <= arr1+n)) break;
  if (env_var_0 == 400 && !(index <= arr1+right)) break;
  if (env_var_0 == 401 && !(index <= arr1[index])) break;
  if (env_var_0 == 402 && !(index <= arr1[left])) break;
  if (env_var_0 == 403 && !(index <= arr1[n])) break;
  if (env_var_0 == 404 && !(index <= arr1[right])) break;
  if (env_var_0 == 405 && !(index <= arr2)) break;
  if (env_var_0 == 406 && !(index <= arr2+index)) break;
  if (env_var_0 == 407 && !(index <= arr2+left)) break;
  if (env_var_0 == 408 && !(index <= arr2+n)) break;
  if (env_var_0 == 409 && !(index <= arr2+right)) break;
  if (env_var_0 == 410 && !(index <= arr2[index])) break;
  if (env_var_0 == 411 && !(index <= arr2[left])) break;
  if (env_var_0 == 412 && !(index <= arr2[n])) break;
  if (env_var_0 == 413 && !(index <= arr2[right])) break;
  if (env_var_0 == 414 && !(index <= index)) break;
  if (env_var_0 == 415 && !(index <= left)) break;
  if (env_var_0 == 416 && !(index <= n)) break;
  if (env_var_0 == 417 && !(index <= right)) break;
  if (env_var_0 == 418 && !(left <= arr1)) break;
  if (env_var_0 == 419 && !(left <= arr1+index)) break;
  if (env_var_0 == 420 && !(left <= arr1+left)) break;
  if (env_var_0 == 421 && !(left <= arr1+n)) break;
  if (env_var_0 == 422 && !(left <= arr1+right)) break;
  if (env_var_0 == 423 && !(left <= arr1[index])) break;
  if (env_var_0 == 424 && !(left <= arr1[left])) break;
  if (env_var_0 == 425 && !(left <= arr1[n])) break;
  if (env_var_0 == 426 && !(left <= arr1[right])) break;
  if (env_var_0 == 427 && !(left <= arr2)) break;
  if (env_var_0 == 428 && !(left <= arr2+index)) break;
  if (env_var_0 == 429 && !(left <= arr2+left)) break;
  if (env_var_0 == 430 && !(left <= arr2+n)) break;
  if (env_var_0 == 431 && !(left <= arr2+right)) break;
  if (env_var_0 == 432 && !(left <= arr2[index])) break;
  if (env_var_0 == 433 && !(left <= arr2[left])) break;
  if (env_var_0 == 434 && !(left <= arr2[n])) break;
  if (env_var_0 == 435 && !(left <= arr2[right])) break;
  if (env_var_0 == 436 && !(left <= index)) break;
  if (env_var_0 == 437 && !(left <= left)) break;
  if (env_var_0 == 438 && !(left <= n)) break;
  if (env_var_0 == 439 && !(left <= right)) break;
  if (env_var_0 == 440 && !(n <= arr1)) break;
  if (env_var_0 == 441 && !(n <= arr1+index)) break;
  if (env_var_0 == 442 && !(n <= arr1+left)) break;
  if (env_var_0 == 443 && !(n <= arr1+n)) break;
  if (env_var_0 == 444 && !(n <= arr1+right)) break;
  if (env_var_0 == 445 && !(n <= arr1[index])) break;
  if (env_var_0 == 446 && !(n <= arr1[left])) break;
  if (env_var_0 == 447 && !(n <= arr1[n])) break;
  if (env_var_0 == 448 && !(n <= arr1[right])) break;
  if (env_var_0 == 449 && !(n <= arr2)) break;
  if (env_var_0 == 450 && !(n <= arr2+index)) break;
  if (env_var_0 == 451 && !(n <= arr2+left)) break;
  if (env_var_0 == 452 && !(n <= arr2+n)) break;
  if (env_var_0 == 453 && !(n <= arr2+right)) break;
  if (env_var_0 == 454 && !(n <= arr2[index])) break;
  if (env_var_0 == 455 && !(n <= arr2[left])) break;
  if (env_var_0 == 456 && !(n <= arr2[n])) break;
  if (env_var_0 == 457 && !(n <= arr2[right])) break;
  if (env_var_0 == 458 && !(n <= index)) break;
  if (env_var_0 == 459 && !(n <= left)) break;
  if (env_var_0 == 460 && !(n <= n)) break;
  if (env_var_0 == 461 && !(n <= right)) break;
  if (env_var_0 == 462 && !(right <= arr1)) break;
  if (env_var_0 == 463 && !(right <= arr1+index)) break;
  if (env_var_0 == 464 && !(right <= arr1+left)) break;
  if (env_var_0 == 465 && !(right <= arr1+n)) break;
  if (env_var_0 == 466 && !(right <= arr1+right)) break;
  if (env_var_0 == 467 && !(right <= arr1[index])) break;
  if (env_var_0 == 468 && !(right <= arr1[left])) break;
  if (env_var_0 == 469 && !(right <= arr1[n])) break;
  if (env_var_0 == 470 && !(right <= arr1[right])) break;
  if (env_var_0 == 471 && !(right <= arr2)) break;
  if (env_var_0 == 472 && !(right <= arr2+index)) break;
  if (env_var_0 == 473 && !(right <= arr2+left)) break;
  if (env_var_0 == 474 && !(right <= arr2+n)) break;
  if (env_var_0 == 475 && !(right <= arr2+right)) break;
  if (env_var_0 == 476 && !(right <= arr2[index])) break;
  if (env_var_0 == 477 && !(right <= arr2[left])) break;
  if (env_var_0 == 478 && !(right <= arr2[n])) break;
  if (env_var_0 == 479 && !(right <= arr2[right])) break;
  if (env_var_0 == 480 && !(right <= index)) break;
  if (env_var_0 == 481 && !(right <= left)) break;
  if (env_var_0 == 482 && !(right <= n)) break;
  if (env_var_0 == 483 && !(right <= right)) break;
  {
    int mid = ( int ) ( ( left + right ) / 2 ) ;
    if ( ( arr2 [ mid ] == arr1 [ mid ] ) || ( arr2 [ mid ] == arr1 [ mid ] ) ) {
      left = mid + 1 ;
    }
    else {
      index = mid ;
      right = mid - 1 ;
    }
  }}
  return index ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{7,18,19,25,26,27,31,39,44,46,59,60,66,72,78,83,84,92,94},{-14,-56,92,-90,96,-84,64,-38,-20,84,56,92,18,-78,98,-96,-60,88,-52,-28,30,-90,14,76,56,20,-18,-94,-82,-2,96,-60,-64,-90,42,6,20,-38,82,-86,-4,82,54,-88},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{13,64,73,50,73,19,92,10,64,79,58,41,97,53,53,10,96,45,47,38,99},{-96,-94,-90,-90,-78,-70,-64,-64,-58,-58,-52,-40,-36,-34,-34,-30,-26,-2,0,2,14,18,24,28,28,30,34,40,42,48,66,72,86,90,92,98},{1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,1,1,0},{10,51,74,74,75,80,90},{-44,48,20,-38,-48,-26,56,-62,-94,-18,30,66,-16,80,96,-40,-80,32,88,-56,-76,16,72,-94,4,-34,-92,70,-90,-54,64,-90},{0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},{19,53,13,91,52,62,39,84,68,45,32,40,13,68,79,76,11,42,76,30,81,3,30,15,85,76,1}};
    vector<vector<int>> param1 {{2,5,12,13,17,20,22,46,51,63,64,66,66,76,87,87,90,91,96},{54,44,-50,26,4,-26,-76,98,-14,36,82,0,-60,18,52,82,-12,-8,-26,-58,22,-70,24,48,56,-46,92,98,-50,-72,-66,8,40,12,-80,-86,90,-30,76,-92,80,-62,0,-48},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{24,42,54,13,88,63,50,73,64,66,86,84,53,4,44,58,44,42,36,94,34},{-94,-92,-90,-88,-86,-82,-82,-80,-76,-74,-64,-60,-58,-46,-44,-36,-30,-30,-30,-18,-16,-8,-6,12,14,20,26,38,40,42,42,68,78,82,88,98},{0,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,1,1,1,1,0},{12,20,36,38,61,64,93},{-76,92,-66,20,86,40,64,16,54,-6,54,-88,-24,38,86,2,30,70,98,-46,28,34,40,-88,-96,92,22,14,-36,-96,-48,-72},{0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{33,65,36,82,30,95,42,33,9,21,25,90,54,59,21,45,3,93,67,50,97,72,77,54,75,8,6}};
    vector<int> param2 {11,26,31,13,29,19,5,28,14,25};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),&param1[i].front(),param2[i]) == f_gold(&param0[i].front(),&param1[i].front(),param2[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
