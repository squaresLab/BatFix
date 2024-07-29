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
string f_gold ( string str ) {
  int n = str . length ( );
  string arr [ n ];
  string concat = str + str;
  for ( int i = 0;
  i < n;
  i ++ ) arr [ i ] = concat . substr ( i, n );
  sort ( arr, arr + n );
  return arr [ 0 ];
}


int foo;
 int env_var_0 = atoi(getenv("env_var_0"));
int f_filled(std::string str_) {
    int n = str_.size();
    int arr;
    std::string concat = str_ + str_;
    for (int i = 0; i < n; i++) {
        if(env_var_0 == 0) { concat.__append_default_init( arr ); }
        if(env_var_0 == 1) { concat.__append_default_init( concat[arr] ); }
        if(env_var_0 == 2) { concat.__append_default_init( concat[i] ); }
        if(env_var_0 == 3) { concat.__append_default_init( concat[n] ); }
        if(env_var_0 == 4) { concat.__append_default_init( i ); }
        if(env_var_0 == 5) { concat.__append_default_init( n ); }
        if(env_var_0 == 6) { concat.__append_default_init( str_[arr] ); }
        if(env_var_0 == 7) { concat.__append_default_init( str_[i] ); }
        if(env_var_0 == 8) { concat.__append_default_init( str_[n] ); }
        if(env_var_0 == 9) { concat.__resize_default_init( arr ); }
        if(env_var_0 == 10) { concat.__resize_default_init( concat[arr] ); }
        if(env_var_0 == 11) { concat.__resize_default_init( concat[i] ); }
        if(env_var_0 == 12) { concat.__resize_default_init( concat[n] ); }
        if(env_var_0 == 13) { concat.__resize_default_init( i ); }
        if(env_var_0 == 14) { concat.__resize_default_init( n ); }
        if(env_var_0 == 15) { concat.__resize_default_init( str_[arr] ); }
        if(env_var_0 == 16) { concat.__resize_default_init( str_[i] ); }
        if(env_var_0 == 17) { concat.__resize_default_init( str_[n] ); }
        if(env_var_0 == 18) { concat.__shrink_or_extend( arr ); }
        if(env_var_0 == 19) { concat.__shrink_or_extend( concat[arr] ); }
        if(env_var_0 == 20) { concat.__shrink_or_extend( concat[i] ); }
        if(env_var_0 == 21) { concat.__shrink_or_extend( concat[n] ); }
        if(env_var_0 == 22) { concat.__shrink_or_extend( i ); }
        if(env_var_0 == 23) { concat.__shrink_or_extend( n ); }
        if(env_var_0 == 24) { concat.__shrink_or_extend( str_[arr] ); }
        if(env_var_0 == 25) { concat.__shrink_or_extend( str_[i] ); }
        if(env_var_0 == 26) { concat.__shrink_or_extend( str_[n] ); }
        if(env_var_0 == 27) { concat.append( concat ); }
        if(env_var_0 == 28) { concat.append( str_ ); }
        if(env_var_0 == 29) { concat.assign( concat ); }
        if(env_var_0 == 30) { concat.assign( str_ ); }
        if(env_var_0 == 31) { concat.at( arr ); }
        if(env_var_0 == 32) { concat.at( concat[arr] ); }
        if(env_var_0 == 33) { concat.at( concat[i] ); }
        if(env_var_0 == 34) { concat.at( concat[n] ); }
        if(env_var_0 == 35) { concat.at( i ); }
        if(env_var_0 == 36) { concat.at( n ); }
        if(env_var_0 == 37) { concat.at( str_[arr] ); }
        if(env_var_0 == 38) { concat.at( str_[i] ); }
        if(env_var_0 == 39) { concat.at( str_[n] ); }
        if(env_var_0 == 40) { concat.compare( concat ); }
        if(env_var_0 == 41) { concat.compare( str_ ); }
        if(env_var_0 == 42) { concat.push_back( arr ); }
        if(env_var_0 == 43) { concat.push_back( concat[arr] ); }
        if(env_var_0 == 44) { concat.push_back( concat[i] ); }
        if(env_var_0 == 45) { concat.push_back( concat[n] ); }
        if(env_var_0 == 46) { concat.push_back( i ); }
        if(env_var_0 == 47) { concat.push_back( n ); }
        if(env_var_0 == 48) { concat.push_back( str_[arr] ); }
        if(env_var_0 == 49) { concat.push_back( str_[i] ); }
        if(env_var_0 == 50) { concat.push_back( str_[n] ); }
        if(env_var_0 == 51) { concat.reserve( arr ); }
        if(env_var_0 == 52) { concat.reserve( concat[arr] ); }
        if(env_var_0 == 53) { concat.reserve( concat[i] ); }
        if(env_var_0 == 54) { concat.reserve( concat[n] ); }
        if(env_var_0 == 55) { concat.reserve( i ); }
        if(env_var_0 == 56) { concat.reserve( n ); }
        if(env_var_0 == 57) { concat.reserve( str_[arr] ); }
        if(env_var_0 == 58) { concat.reserve( str_[i] ); }
        if(env_var_0 == 59) { concat.reserve( str_[n] ); }
        if(env_var_0 == 60) { concat.resize( arr ); }
        if(env_var_0 == 61) { concat.resize( concat[arr] ); }
        if(env_var_0 == 62) { concat.resize( concat[i] ); }
        if(env_var_0 == 63) { concat.resize( concat[n] ); }
        if(env_var_0 == 64) { concat.resize( i ); }
        if(env_var_0 == 65) { concat.resize( n ); }
        if(env_var_0 == 66) { concat.resize( str_[arr] ); }
        if(env_var_0 == 67) { concat.resize( str_[i] ); }
        if(env_var_0 == 68) { concat.resize( str_[n] ); }
        if(env_var_0 == 69) { concat.swap( concat ); }
        if(env_var_0 == 70) { concat.swap( str_ ); }
        if(env_var_0 == 71) { isupper( arr ); }
        if(env_var_0 == 72) { isupper( concat[arr] ); }
        if(env_var_0 == 73) { isupper( concat[i] ); }
        if(env_var_0 == 74) { isupper( concat[n] ); }
        if(env_var_0 == 75) { isupper( i ); }
        if(env_var_0 == 76) { isupper( n ); }
        if(env_var_0 == 77) { isupper( str_[arr] ); }
        if(env_var_0 == 78) { isupper( str_[i] ); }
        if(env_var_0 == 79) { isupper( str_[n] ); }
        if(env_var_0 == 80) { std::max( arr,arr ); }
        if(env_var_0 == 81) { std::max( arr,concat[arr] ); }
        if(env_var_0 == 82) { std::max( arr,concat[i] ); }
        if(env_var_0 == 83) { std::max( arr,concat[n] ); }
        if(env_var_0 == 84) { std::max( arr,i ); }
        if(env_var_0 == 85) { std::max( arr,n ); }
        if(env_var_0 == 86) { std::max( arr,str_[arr] ); }
        if(env_var_0 == 87) { std::max( arr,str_[i] ); }
        if(env_var_0 == 88) { std::max( arr,str_[n] ); }
        if(env_var_0 == 89) { std::max( concat[arr],arr ); }
        if(env_var_0 == 90) { std::max( concat[arr],concat[arr] ); }
        if(env_var_0 == 91) { std::max( concat[arr],concat[i] ); }
        if(env_var_0 == 92) { std::max( concat[arr],concat[n] ); }
        if(env_var_0 == 93) { std::max( concat[arr],i ); }
        if(env_var_0 == 94) { std::max( concat[arr],n ); }
        if(env_var_0 == 95) { std::max( concat[arr],str_[arr] ); }
        if(env_var_0 == 96) { std::max( concat[arr],str_[i] ); }
        if(env_var_0 == 97) { std::max( concat[arr],str_[n] ); }
        if(env_var_0 == 98) { std::max( concat[i],arr ); }
        if(env_var_0 == 99) { std::max( concat[i],concat[arr] ); }
        if(env_var_0 == 100) { std::max( concat[i],concat[i] ); }
        if(env_var_0 == 101) { std::max( concat[i],concat[n] ); }
        if(env_var_0 == 102) { std::max( concat[i],i ); }
        if(env_var_0 == 103) { std::max( concat[i],n ); }
        if(env_var_0 == 104) { std::max( concat[i],str_[arr] ); }
        if(env_var_0 == 105) { std::max( concat[i],str_[i] ); }
        if(env_var_0 == 106) { std::max( concat[i],str_[n] ); }
        if(env_var_0 == 107) { std::max( concat[n],arr ); }
        if(env_var_0 == 108) { std::max( concat[n],concat[arr] ); }
        if(env_var_0 == 109) { std::max( concat[n],concat[i] ); }
        if(env_var_0 == 110) { std::max( concat[n],concat[n] ); }
        if(env_var_0 == 111) { std::max( concat[n],i ); }
        if(env_var_0 == 112) { std::max( concat[n],n ); }
        if(env_var_0 == 113) { std::max( concat[n],str_[arr] ); }
        if(env_var_0 == 114) { std::max( concat[n],str_[i] ); }
        if(env_var_0 == 115) { std::max( concat[n],str_[n] ); }
        if(env_var_0 == 116) { std::max( i,arr ); }
        if(env_var_0 == 117) { std::max( i,concat[arr] ); }
        if(env_var_0 == 118) { std::max( i,concat[i] ); }
        if(env_var_0 == 119) { std::max( i,concat[n] ); }
        if(env_var_0 == 120) { std::max( i,i ); }
        if(env_var_0 == 121) { std::max( i,n ); }
        if(env_var_0 == 122) { std::max( i,str_[arr] ); }
        if(env_var_0 == 123) { std::max( i,str_[i] ); }
        if(env_var_0 == 124) { std::max( i,str_[n] ); }
        if(env_var_0 == 125) { std::max( n,arr ); }
        if(env_var_0 == 126) { std::max( n,concat[arr] ); }
        if(env_var_0 == 127) { std::max( n,concat[i] ); }
        if(env_var_0 == 128) { std::max( n,concat[n] ); }
        if(env_var_0 == 129) { std::max( n,i ); }
        if(env_var_0 == 130) { std::max( n,n ); }
        if(env_var_0 == 131) { std::max( n,str_[arr] ); }
        if(env_var_0 == 132) { std::max( n,str_[i] ); }
        if(env_var_0 == 133) { std::max( n,str_[n] ); }
        if(env_var_0 == 134) { std::max( str_[arr],arr ); }
        if(env_var_0 == 135) { std::max( str_[arr],concat[arr] ); }
        if(env_var_0 == 136) { std::max( str_[arr],concat[i] ); }
        if(env_var_0 == 137) { std::max( str_[arr],concat[n] ); }
        if(env_var_0 == 138) { std::max( str_[arr],i ); }
        if(env_var_0 == 139) { std::max( str_[arr],n ); }
        if(env_var_0 == 140) { std::max( str_[arr],str_[arr] ); }
        if(env_var_0 == 141) { std::max( str_[arr],str_[i] ); }
        if(env_var_0 == 142) { std::max( str_[arr],str_[n] ); }
        if(env_var_0 == 143) { std::max( str_[i],arr ); }
        if(env_var_0 == 144) { std::max( str_[i],concat[arr] ); }
        if(env_var_0 == 145) { std::max( str_[i],concat[i] ); }
        if(env_var_0 == 146) { std::max( str_[i],concat[n] ); }
        if(env_var_0 == 147) { std::max( str_[i],i ); }
        if(env_var_0 == 148) { std::max( str_[i],n ); }
        if(env_var_0 == 149) { std::max( str_[i],str_[arr] ); }
        if(env_var_0 == 150) { std::max( str_[i],str_[i] ); }
        if(env_var_0 == 151) { std::max( str_[i],str_[n] ); }
        if(env_var_0 == 152) { std::max( str_[n],arr ); }
        if(env_var_0 == 153) { std::max( str_[n],concat[arr] ); }
        if(env_var_0 == 154) { std::max( str_[n],concat[i] ); }
        if(env_var_0 == 155) { std::max( str_[n],concat[n] ); }
        if(env_var_0 == 156) { std::max( str_[n],i ); }
        if(env_var_0 == 157) { std::max( str_[n],n ); }
        if(env_var_0 == 158) { std::max( str_[n],str_[arr] ); }
        if(env_var_0 == 159) { std::max( str_[n],str_[i] ); }
        if(env_var_0 == 160) { std::max( str_[n],str_[n] ); }
        if(env_var_0 == 161) { std::max(); }
        if(env_var_0 == 162) { std::min( arr,arr ); }
        if(env_var_0 == 163) { std::min( arr,concat[arr] ); }
        if(env_var_0 == 164) { std::min( arr,concat[i] ); }
        if(env_var_0 == 165) { std::min( arr,concat[n] ); }
        if(env_var_0 == 166) { std::min( arr,i ); }
        if(env_var_0 == 167) { std::min( arr,n ); }
        if(env_var_0 == 168) { std::min( arr,str_[arr] ); }
        if(env_var_0 == 169) { std::min( arr,str_[i] ); }
        if(env_var_0 == 170) { std::min( arr,str_[n] ); }
        if(env_var_0 == 171) { std::min( concat[arr],arr ); }
        if(env_var_0 == 172) { std::min( concat[arr],concat[arr] ); }
        if(env_var_0 == 173) { std::min( concat[arr],concat[i] ); }
        if(env_var_0 == 174) { std::min( concat[arr],concat[n] ); }
        if(env_var_0 == 175) { std::min( concat[arr],i ); }
        if(env_var_0 == 176) { std::min( concat[arr],n ); }
        if(env_var_0 == 177) { std::min( concat[arr],str_[arr] ); }
        if(env_var_0 == 178) { std::min( concat[arr],str_[i] ); }
        if(env_var_0 == 179) { std::min( concat[arr],str_[n] ); }
        if(env_var_0 == 180) { std::min( concat[i],arr ); }
        if(env_var_0 == 181) { std::min( concat[i],concat[arr] ); }
        if(env_var_0 == 182) { std::min( concat[i],concat[i] ); }
        if(env_var_0 == 183) { std::min( concat[i],concat[n] ); }
        if(env_var_0 == 184) { std::min( concat[i],i ); }
        if(env_var_0 == 185) { std::min( concat[i],n ); }
        if(env_var_0 == 186) { std::min( concat[i],str_[arr] ); }
        if(env_var_0 == 187) { std::min( concat[i],str_[i] ); }
        if(env_var_0 == 188) { std::min( concat[i],str_[n] ); }
        if(env_var_0 == 189) { std::min( concat[n],arr ); }
        if(env_var_0 == 190) { std::min( concat[n],concat[arr] ); }
        if(env_var_0 == 191) { std::min( concat[n],concat[i] ); }
        if(env_var_0 == 192) { std::min( concat[n],concat[n] ); }
        if(env_var_0 == 193) { std::min( concat[n],i ); }
        if(env_var_0 == 194) { std::min( concat[n],n ); }
        if(env_var_0 == 195) { std::min( concat[n],str_[arr] ); }
        if(env_var_0 == 196) { std::min( concat[n],str_[i] ); }
        if(env_var_0 == 197) { std::min( concat[n],str_[n] ); }
        if(env_var_0 == 198) { std::min( i,arr ); }
        if(env_var_0 == 199) { std::min( i,concat[arr] ); }
        if(env_var_0 == 200) { std::min( i,concat[i] ); }
        if(env_var_0 == 201) { std::min( i,concat[n] ); }
        if(env_var_0 == 202) { std::min( i,i ); }
        if(env_var_0 == 203) { std::min( i,n ); }
        if(env_var_0 == 204) { std::min( i,str_[arr] ); }
        if(env_var_0 == 205) { std::min( i,str_[i] ); }
        if(env_var_0 == 206) { std::min( i,str_[n] ); }
        if(env_var_0 == 207) { std::min( n,arr ); }
        if(env_var_0 == 208) { std::min( n,concat[arr] ); }
        if(env_var_0 == 209) { std::min( n,concat[i] ); }
        if(env_var_0 == 210) { std::min( n,concat[n] ); }
        if(env_var_0 == 211) { std::min( n,i ); }
        if(env_var_0 == 212) { std::min( n,n ); }
        if(env_var_0 == 213) { std::min( n,str_[arr] ); }
        if(env_var_0 == 214) { std::min( n,str_[i] ); }
        if(env_var_0 == 215) { std::min( n,str_[n] ); }
        if(env_var_0 == 216) { std::min( str_[arr],arr ); }
        if(env_var_0 == 217) { std::min( str_[arr],concat[arr] ); }
        if(env_var_0 == 218) { std::min( str_[arr],concat[i] ); }
        if(env_var_0 == 219) { std::min( str_[arr],concat[n] ); }
        if(env_var_0 == 220) { std::min( str_[arr],i ); }
        if(env_var_0 == 221) { std::min( str_[arr],n ); }
        if(env_var_0 == 222) { std::min( str_[arr],str_[arr] ); }
        if(env_var_0 == 223) { std::min( str_[arr],str_[i] ); }
        if(env_var_0 == 224) { std::min( str_[arr],str_[n] ); }
        if(env_var_0 == 225) { std::min( str_[i],arr ); }
        if(env_var_0 == 226) { std::min( str_[i],concat[arr] ); }
        if(env_var_0 == 227) { std::min( str_[i],concat[i] ); }
        if(env_var_0 == 228) { std::min( str_[i],concat[n] ); }
        if(env_var_0 == 229) { std::min( str_[i],i ); }
        if(env_var_0 == 230) { std::min( str_[i],n ); }
        if(env_var_0 == 231) { std::min( str_[i],str_[arr] ); }
        if(env_var_0 == 232) { std::min( str_[i],str_[i] ); }
        if(env_var_0 == 233) { std::min( str_[i],str_[n] ); }
        if(env_var_0 == 234) { std::min( str_[n],arr ); }
        if(env_var_0 == 235) { std::min( str_[n],concat[arr] ); }
        if(env_var_0 == 236) { std::min( str_[n],concat[i] ); }
        if(env_var_0 == 237) { std::min( str_[n],concat[n] ); }
        if(env_var_0 == 238) { std::min( str_[n],i ); }
        if(env_var_0 == 239) { std::min( str_[n],n ); }
        if(env_var_0 == 240) { std::min( str_[n],str_[arr] ); }
        if(env_var_0 == 241) { std::min( str_[n],str_[i] ); }
        if(env_var_0 == 242) { std::min( str_[n],str_[n] ); }
        if(env_var_0 == 243) { toupper( arr ); }
        if(env_var_0 == 244) { toupper( concat[arr] ); }
        if(env_var_0 == 245) { toupper( concat[i] ); }
        if(env_var_0 == 246) { toupper( concat[n] ); }
        if(env_var_0 == 247) { toupper( i ); }
        if(env_var_0 == 248) { toupper( n ); }
        if(env_var_0 == 249) { toupper( str_[arr] ); }
        if(env_var_0 == 250) { toupper( str_[i] ); }
        if(env_var_0 == 251) { toupper( str_[n] ); }
        ;
    }
}





int main() {
    int n_success = 0;
    vector<string> param0 {"onWEchl","2","100","GHbCZA","50568798206105","001011110001","lljpYhznnyu","54499921759984","11101","qvypgCYEjsyjwZ"};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(foo
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
