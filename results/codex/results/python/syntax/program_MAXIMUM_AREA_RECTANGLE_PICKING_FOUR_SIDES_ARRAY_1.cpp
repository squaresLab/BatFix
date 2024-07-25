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
#include <queue>
using namespace std;
int f_gold ( int arr [ ], int n ) {
  unordered_set < int > s;
  int first = 0, second = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( s . find ( arr [ i ] ) == s . end ( ) ) {
      s . insert ( arr [ i ] );
      continue;
    }
    if ( arr [ i ] > first ) {
      second = first;
      first = arr [ i ];
    }
    else if ( arr [ i ] > second ) second = arr [ i ];
  }
  return ( first * second );
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled(int arr[], int n) {
    int s[n];
    int first = 0;
    int second = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i]) {
            if(env_var_0 == 0) { *toupper(); }
            if(env_var_0 == 1) { isupper( arr[first] ); }
            if(env_var_0 == 2) { isupper( arr[i] ); }
            if(env_var_0 == 3) { isupper( arr[n] ); }
            if(env_var_0 == 4) { isupper( arr[second] ); }
            if(env_var_0 == 5) { isupper( first ); }
            if(env_var_0 == 6) { isupper( i ); }
            if(env_var_0 == 7) { isupper( n ); }
            if(env_var_0 == 8) { isupper( s ); }
            if(env_var_0 == 9) { isupper( s[first] ); }
            if(env_var_0 == 10) { isupper( second ); }
            if(env_var_0 == 11) { std::max( arr[first],arr[first] ); }
            if(env_var_0 == 12) { std::max( arr[first],arr[i] ); }
            if(env_var_0 == 13) { std::max( arr[first],arr[n] ); }
            if(env_var_0 == 14) { std::max( arr[first],arr[second] ); }
            if(env_var_0 == 15) { std::max( arr[first],first ); }
            if(env_var_0 == 16) { std::max( arr[first],i ); }
            if(env_var_0 == 17) { std::max( arr[first],n ); }
            if(env_var_0 == 18) { std::max( arr[first],s ); }
            if(env_var_0 == 19) { std::max( arr[first],s[first] ); }
            if(env_var_0 == 20) { std::max( arr[first],second ); }
            if(env_var_0 == 21) { std::max( arr[i],arr[first] ); }
            if(env_var_0 == 22) { std::max( arr[i],arr[i] ); }
            if(env_var_0 == 23) { std::max( arr[i],arr[n] ); }
            if(env_var_0 == 24) { std::max( arr[i],arr[second] ); }
            if(env_var_0 == 25) { std::max( arr[i],first ); }
            if(env_var_0 == 26) { std::max( arr[i],i ); }
            if(env_var_0 == 27) { std::max( arr[i],n ); }
            if(env_var_0 == 28) { std::max( arr[i],s ); }
            if(env_var_0 == 29) { std::max( arr[i],s[first] ); }
            if(env_var_0 == 30) { std::max( arr[i],second ); }
            if(env_var_0 == 31) { std::max( arr[n],arr[first] ); }
            if(env_var_0 == 32) { std::max( arr[n],arr[i] ); }
            if(env_var_0 == 33) { std::max( arr[n],arr[n] ); }
            if(env_var_0 == 34) { std::max( arr[n],arr[second] ); }
            if(env_var_0 == 35) { std::max( arr[n],first ); }
            if(env_var_0 == 36) { std::max( arr[n],i ); }
            if(env_var_0 == 37) { std::max( arr[n],n ); }
            if(env_var_0 == 38) { std::max( arr[n],s ); }
            if(env_var_0 == 39) { std::max( arr[n],s[first] ); }
            if(env_var_0 == 40) { std::max( arr[n],second ); }
            if(env_var_0 == 41) { std::max( arr[second],arr[first] ); }
            if(env_var_0 == 42) { std::max( arr[second],arr[i] ); }
            if(env_var_0 == 43) { std::max( arr[second],arr[n] ); }
            if(env_var_0 == 44) { std::max( arr[second],arr[second] ); }
            if(env_var_0 == 45) { std::max( arr[second],first ); }
            if(env_var_0 == 46) { std::max( arr[second],i ); }
            if(env_var_0 == 47) { std::max( arr[second],n ); }
            if(env_var_0 == 48) { std::max( arr[second],s ); }
            if(env_var_0 == 49) { std::max( arr[second],s[first] ); }
            if(env_var_0 == 50) { std::max( arr[second],second ); }
            if(env_var_0 == 51) { std::max( first,arr[first] ); }
            if(env_var_0 == 52) { std::max( first,arr[i] ); }
            if(env_var_0 == 53) { std::max( first,arr[n] ); }
            if(env_var_0 == 54) { std::max( first,arr[second] ); }
            if(env_var_0 == 55) { std::max( first,first ); }
            if(env_var_0 == 56) { std::max( first,i ); }
            if(env_var_0 == 57) { std::max( first,n ); }
            if(env_var_0 == 58) { std::max( first,s ); }
            if(env_var_0 == 59) { std::max( first,s[first] ); }
            if(env_var_0 == 60) { std::max( first,second ); }
            if(env_var_0 == 61) { std::max( i,arr[first] ); }
            if(env_var_0 == 62) { std::max( i,arr[i] ); }
            if(env_var_0 == 63) { std::max( i,arr[n] ); }
            if(env_var_0 == 64) { std::max( i,arr[second] ); }
            if(env_var_0 == 65) { std::max( i,first ); }
            if(env_var_0 == 66) { std::max( i,i ); }
            if(env_var_0 == 67) { std::max( i,n ); }
            if(env_var_0 == 68) { std::max( i,s ); }
            if(env_var_0 == 69) { std::max( i,s[first] ); }
            if(env_var_0 == 70) { std::max( i,second ); }
            if(env_var_0 == 71) { std::max( n,arr[first] ); }
            if(env_var_0 == 72) { std::max( n,arr[i] ); }
            if(env_var_0 == 73) { std::max( n,arr[n] ); }
            if(env_var_0 == 74) { std::max( n,arr[second] ); }
            if(env_var_0 == 75) { std::max( n,first ); }
            if(env_var_0 == 76) { std::max( n,i ); }
            if(env_var_0 == 77) { std::max( n,n ); }
            if(env_var_0 == 78) { std::max( n,s ); }
            if(env_var_0 == 79) { std::max( n,s[first] ); }
            if(env_var_0 == 80) { std::max( n,second ); }
            if(env_var_0 == 81) { std::max( s,arr[first] ); }
            if(env_var_0 == 82) { std::max( s,arr[i] ); }
            if(env_var_0 == 83) { std::max( s,arr[n] ); }
            if(env_var_0 == 84) { std::max( s,arr[second] ); }
            if(env_var_0 == 85) { std::max( s,first ); }
            if(env_var_0 == 86) { std::max( s,i ); }
            if(env_var_0 == 87) { std::max( s,n ); }
            if(env_var_0 == 88) { std::max( s,s ); }
            if(env_var_0 == 89) { std::max( s,s[first] ); }
            if(env_var_0 == 90) { std::max( s,second ); }
            if(env_var_0 == 91) { std::max( s[first],arr[first] ); }
            if(env_var_0 == 92) { std::max( s[first],arr[i] ); }
            if(env_var_0 == 93) { std::max( s[first],arr[n] ); }
            if(env_var_0 == 94) { std::max( s[first],arr[second] ); }
            if(env_var_0 == 95) { std::max( s[first],first ); }
            if(env_var_0 == 96) { std::max( s[first],i ); }
            if(env_var_0 == 97) { std::max( s[first],n ); }
            if(env_var_0 == 98) { std::max( s[first],s ); }
            if(env_var_0 == 99) { std::max( s[first],s[first] ); }
            if(env_var_0 == 100) { std::max( s[first],second ); }
            if(env_var_0 == 101) { std::max( second,arr[first] ); }
            if(env_var_0 == 102) { std::max( second,arr[i] ); }
            if(env_var_0 == 103) { std::max( second,arr[n] ); }
            if(env_var_0 == 104) { std::max( second,arr[second] ); }
            if(env_var_0 == 105) { std::max( second,first ); }
            if(env_var_0 == 106) { std::max( second,i ); }
            if(env_var_0 == 107) { std::max( second,n ); }
            if(env_var_0 == 108) { std::max( second,s ); }
            if(env_var_0 == 109) { std::max( second,s[first] ); }
            if(env_var_0 == 110) { std::max( second,second ); }
            if(env_var_0 == 111) { std::min( arr[first],arr[first] ); }
            if(env_var_0 == 112) { std::min( arr[first],arr[i] ); }
            if(env_var_0 == 113) { std::min( arr[first],arr[n] ); }
            if(env_var_0 == 114) { std::min( arr[first],arr[second] ); }
            if(env_var_0 == 115) { std::min( arr[first],first ); }
            if(env_var_0 == 116) { std::min( arr[first],i ); }
            if(env_var_0 == 117) { std::min( arr[first],n ); }
            if(env_var_0 == 118) { std::min( arr[first],s ); }
            if(env_var_0 == 119) { std::min( arr[first],s[first] ); }
            if(env_var_0 == 120) { std::min( arr[first],second ); }
            if(env_var_0 == 121) { std::min( arr[i],arr[first] ); }
            if(env_var_0 == 122) { std::min( arr[i],arr[i] ); }
            if(env_var_0 == 123) { std::min( arr[i],arr[n] ); }
            if(env_var_0 == 124) { std::min( arr[i],arr[second] ); }
            if(env_var_0 == 125) { std::min( arr[i],first ); }
            if(env_var_0 == 126) { std::min( arr[i],i ); }
            if(env_var_0 == 127) { std::min( arr[i],n ); }
            if(env_var_0 == 128) { std::min( arr[i],s ); }
            if(env_var_0 == 129) { std::min( arr[i],s[first] ); }
            if(env_var_0 == 130) { std::min( arr[i],second ); }
            if(env_var_0 == 131) { std::min( arr[n],arr[first] ); }
            if(env_var_0 == 132) { std::min( arr[n],arr[i] ); }
            if(env_var_0 == 133) { std::min( arr[n],arr[n] ); }
            if(env_var_0 == 134) { std::min( arr[n],arr[second] ); }
            if(env_var_0 == 135) { std::min( arr[n],first ); }
            if(env_var_0 == 136) { std::min( arr[n],i ); }
            if(env_var_0 == 137) { std::min( arr[n],n ); }
            if(env_var_0 == 138) { std::min( arr[n],s ); }
            if(env_var_0 == 139) { std::min( arr[n],s[first] ); }
            if(env_var_0 == 140) { std::min( arr[n],second ); }
            if(env_var_0 == 141) { std::min( arr[second],arr[first] ); }
            if(env_var_0 == 142) { std::min( arr[second],arr[i] ); }
            if(env_var_0 == 143) { std::min( arr[second],arr[n] ); }
            if(env_var_0 == 144) { std::min( arr[second],arr[second] ); }
            if(env_var_0 == 145) { std::min( arr[second],first ); }
            if(env_var_0 == 146) { std::min( arr[second],i ); }
            if(env_var_0 == 147) { std::min( arr[second],n ); }
            if(env_var_0 == 148) { std::min( arr[second],s ); }
            if(env_var_0 == 149) { std::min( arr[second],s[first] ); }
            if(env_var_0 == 150) { std::min( arr[second],second ); }
            if(env_var_0 == 151) { std::min( first,arr[first] ); }
            if(env_var_0 == 152) { std::min( first,arr[i] ); }
            if(env_var_0 == 153) { std::min( first,arr[n] ); }
            if(env_var_0 == 154) { std::min( first,arr[second] ); }
            if(env_var_0 == 155) { std::min( first,first ); }
            if(env_var_0 == 156) { std::min( first,i ); }
            if(env_var_0 == 157) { std::min( first,n ); }
            if(env_var_0 == 158) { std::min( first,s ); }
            if(env_var_0 == 159) { std::min( first,s[first] ); }
            if(env_var_0 == 160) { std::min( first,second ); }
            if(env_var_0 == 161) { std::min( i,arr[first] ); }
            if(env_var_0 == 162) { std::min( i,arr[i] ); }
            if(env_var_0 == 163) { std::min( i,arr[n] ); }
            if(env_var_0 == 164) { std::min( i,arr[second] ); }
            if(env_var_0 == 165) { std::min( i,first ); }
            if(env_var_0 == 166) { std::min( i,i ); }
            if(env_var_0 == 167) { std::min( i,n ); }
            if(env_var_0 == 168) { std::min( i,s ); }
            if(env_var_0 == 169) { std::min( i,s[first] ); }
            if(env_var_0 == 170) { std::min( i,second ); }
            if(env_var_0 == 171) { std::min( n,arr[first] ); }
            if(env_var_0 == 172) { std::min( n,arr[i] ); }
            if(env_var_0 == 173) { std::min( n,arr[n] ); }
            if(env_var_0 == 174) { std::min( n,arr[second] ); }
            if(env_var_0 == 175) { std::min( n,first ); }
            if(env_var_0 == 176) { std::min( n,i ); }
            if(env_var_0 == 177) { std::min( n,n ); }
            if(env_var_0 == 178) { std::min( n,s ); }
            if(env_var_0 == 179) { std::min( n,s[first] ); }
            if(env_var_0 == 180) { std::min( n,second ); }
            if(env_var_0 == 181) { std::min( s,arr[first] ); }
            if(env_var_0 == 182) { std::min( s,arr[i] ); }
            if(env_var_0 == 183) { std::min( s,arr[n] ); }
            if(env_var_0 == 184) { std::min( s,arr[second] ); }
            if(env_var_0 == 185) { std::min( s,first ); }
            if(env_var_0 == 186) { std::min( s,i ); }
            if(env_var_0 == 187) { std::min( s,n ); }
            if(env_var_0 == 188) { std::min( s,s ); }
            if(env_var_0 == 189) { std::min( s,s[first] ); }
            if(env_var_0 == 190) { std::min( s,second ); }
            if(env_var_0 == 191) { std::min( s[first],arr[first] ); }
            if(env_var_0 == 192) { std::min( s[first],arr[i] ); }
            if(env_var_0 == 193) { std::min( s[first],arr[n] ); }
            if(env_var_0 == 194) { std::min( s[first],arr[second] ); }
            if(env_var_0 == 195) { std::min( s[first],first ); }
            if(env_var_0 == 196) { std::min( s[first],i ); }
            if(env_var_0 == 197) { std::min( s[first],n ); }
            if(env_var_0 == 198) { std::min( s[first],s ); }
            if(env_var_0 == 199) { std::min( s[first],s[first] ); }
            if(env_var_0 == 200) { std::min( s[first],second ); }
            if(env_var_0 == 201) { std::min( second,arr[first] ); }
            if(env_var_0 == 202) { std::min( second,arr[i] ); }
            if(env_var_0 == 203) { std::min( second,arr[n] ); }
            if(env_var_0 == 204) { std::min( second,arr[second] ); }
            if(env_var_0 == 205) { std::min( second,first ); }
            if(env_var_0 == 206) { std::min( second,i ); }
            if(env_var_0 == 207) { std::min( second,n ); }
            if(env_var_0 == 208) { std::min( second,s ); }
            if(env_var_0 == 209) { std::min( second,s[first] ); }
            if(env_var_0 == 210) { std::min( second,second ); }
            if(env_var_0 == 211) { toupper( arr[first] ); }
            if(env_var_0 == 212) { toupper( arr[i] ); }
            if(env_var_0 == 213) { toupper( arr[n] ); }
            if(env_var_0 == 214) { toupper( arr[second] ); }
            if(env_var_0 == 215) { toupper( first ); }
            if(env_var_0 == 216) { toupper( i ); }
            if(env_var_0 == 217) { toupper( n ); }
            if(env_var_0 == 218) { toupper( s ); }
            if(env_var_0 == 219) { toupper( s[first] ); }
            if(env_var_0 == 220) { toupper( second ); }
            ;
            continue;
        }
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            second = arr[i];
        }
    }
    return (first * second);
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{4,6,7,8,12,13,14,15,18,18,19,19,26,26,32,32,33,34,34,36,41,43,47,47,51,51,52,53,55,56,57,60,61,71,74,75,76,77,79,87,87,87,90,95,98,99},{-64,-72,6,-62,54,14,28,60,-96,14,-32,-2,80,8,-56,68,86,64,86,-12,82},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{99,7,14,50,94,24,79,13,19,29,22,2,77,36,38,18,51,15,99,52,17,77,22,54},{-96,-92,-86,-84,-84,-80,-70,-70,-68,-64,-64,-48,-46,-24,-22,-20,-8,-8,0,0,4,8,8,22,28,36,46,50,52,54,60,62,66,70,80,84,86,94,96,96},{1,0,1,0,1,1,0,0,1,1,0,1,0,0,0,1,1,0,0,1,1},{98},{-88,-24,8,20,-46,60,24,26,98,82,-30,16,22,-28,84,12,34,14,-18,-38,-94,-24,6,4,-52,-48,84},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{6,30,47,97,20,16,68,34,1,77,48,8,22,68}};
    vector<int> param1 {37,12,27,15,25,12,0,21,21,8};
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

