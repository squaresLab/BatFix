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
int f_gold ( int pages [ ], int n, int capacity ) {
  unordered_set < int > s;
  queue < int > index;
  int page_faults = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( s . size ( ) < capacity ) {
      if ( s . find ( pages [ i ] ) == s . end ( ) ) {
        s . insert ( pages [ i ] );
        page_faults ++;
        indexes . push ( pages [ i ] );
      }
    }
    else {
      if ( s . find ( pages [ i ] ) == s . end ( ) ) {
        int val = indexes . front ( );
        indexes . pop ( );
        s . erase ( val );
        s . insert ( pages [ i ] );
        indexes . push ( pages [ i ] );
        page_faults ++;
      }
    }
  }
  return page_faults;
}


int foo;
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int * pages , int n , int capacity ) {
  set < int > s ;
  foo < int > indexes ;
  int f_filled = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( s . size ( ) < capacity ) && ( pages [ i ] != 0 ) ) {
      if ( ( pages [ i ] != 0 ) && ( pages [ i ] < s . size ( ) ) ) {
        s . insert ( pages [ i ] ) ;
        f_filled ++ ;
        if(env_var_0 == 0) { isupper( capacity ); }
        if(env_var_0 == 1) { isupper( f_filled ); }
        if(env_var_0 == 2) { isupper( i ); }
        if(env_var_0 == 3) { isupper( n ); }
        if(env_var_0 == 4) { isupper( pages[capacity] ); }
        if(env_var_0 == 5) { isupper( pages[f_filled] ); }
        if(env_var_0 == 6) { isupper( pages[i] ); }
        if(env_var_0 == 7) { isupper( pages[n] ); }
        if(env_var_0 == 8) { s.count( capacity ); }
        if(env_var_0 == 9) { s.count( f_filled ); }
        if(env_var_0 == 10) { s.count( i ); }
        if(env_var_0 == 11) { s.count( n ); }
        if(env_var_0 == 12) { s.count( pages[capacity] ); }
        if(env_var_0 == 13) { s.count( pages[f_filled] ); }
        if(env_var_0 == 14) { s.count( pages[i] ); }
        if(env_var_0 == 15) { s.count( pages[n] ); }
        if(env_var_0 == 16) { s.equal_range( capacity ); }
        if(env_var_0 == 17) { s.equal_range( f_filled ); }
        if(env_var_0 == 18) { s.equal_range( i ); }
        if(env_var_0 == 19) { s.equal_range( n ); }
        if(env_var_0 == 20) { s.equal_range( pages[capacity] ); }
        if(env_var_0 == 21) { s.equal_range( pages[f_filled] ); }
        if(env_var_0 == 22) { s.equal_range( pages[i] ); }
        if(env_var_0 == 23) { s.equal_range( pages[n] ); }
        if(env_var_0 == 24) { s.erase( capacity ); }
        if(env_var_0 == 25) { s.erase( f_filled ); }
        if(env_var_0 == 26) { s.erase( i ); }
        if(env_var_0 == 27) { s.erase( n ); }
        if(env_var_0 == 28) { s.erase( pages[capacity] ); }
        if(env_var_0 == 29) { s.erase( pages[f_filled] ); }
        if(env_var_0 == 30) { s.erase( pages[i] ); }
        if(env_var_0 == 31) { s.erase( pages[n] ); }
        if(env_var_0 == 32) { s.find( capacity ); }
        if(env_var_0 == 33) { s.find( f_filled ); }
        if(env_var_0 == 34) { s.find( i ); }
        if(env_var_0 == 35) { s.find( n ); }
        if(env_var_0 == 36) { s.find( pages[capacity] ); }
        if(env_var_0 == 37) { s.find( pages[f_filled] ); }
        if(env_var_0 == 38) { s.find( pages[i] ); }
        if(env_var_0 == 39) { s.find( pages[n] ); }
        if(env_var_0 == 40) { s.insert( capacity ); }
        if(env_var_0 == 41) { s.insert( f_filled ); }
        if(env_var_0 == 42) { s.insert( i ); }
        if(env_var_0 == 43) { s.insert( n ); }
        if(env_var_0 == 44) { s.insert( pages[capacity] ); }
        if(env_var_0 == 45) { s.insert( pages[f_filled] ); }
        if(env_var_0 == 46) { s.insert( pages[i] ); }
        if(env_var_0 == 47) { s.insert( pages[n] ); }
        if(env_var_0 == 48) { s.lower_bound( capacity ); }
        if(env_var_0 == 49) { s.lower_bound( f_filled ); }
        if(env_var_0 == 50) { s.lower_bound( i ); }
        if(env_var_0 == 51) { s.lower_bound( n ); }
        if(env_var_0 == 52) { s.lower_bound( pages[capacity] ); }
        if(env_var_0 == 53) { s.lower_bound( pages[f_filled] ); }
        if(env_var_0 == 54) { s.lower_bound( pages[i] ); }
        if(env_var_0 == 55) { s.lower_bound( pages[n] ); }
        if(env_var_0 == 56) { s.swap( s ); }
        if(env_var_0 == 57) { s.upper_bound( capacity ); }
        if(env_var_0 == 58) { s.upper_bound( f_filled ); }
        if(env_var_0 == 59) { s.upper_bound( i ); }
        if(env_var_0 == 60) { s.upper_bound( n ); }
        if(env_var_0 == 61) { s.upper_bound( pages[capacity] ); }
        if(env_var_0 == 62) { s.upper_bound( pages[f_filled] ); }
        if(env_var_0 == 63) { s.upper_bound( pages[i] ); }
        if(env_var_0 == 64) { s.upper_bound( pages[n] ); }
        if(env_var_0 == 65) { std::max( capacity,capacity ); }
        if(env_var_0 == 66) { std::max( capacity,f_filled ); }
        if(env_var_0 == 67) { std::max( capacity,i ); }
        if(env_var_0 == 68) { std::max( capacity,n ); }
        if(env_var_0 == 69) { std::max( capacity,pages[capacity] ); }
        if(env_var_0 == 70) { std::max( capacity,pages[f_filled] ); }
        if(env_var_0 == 71) { std::max( capacity,pages[i] ); }
        if(env_var_0 == 72) { std::max( capacity,pages[n] ); }
        if(env_var_0 == 73) { std::max( f_filled,capacity ); }
        if(env_var_0 == 74) { std::max( f_filled,f_filled ); }
        if(env_var_0 == 75) { std::max( f_filled,i ); }
        if(env_var_0 == 76) { std::max( f_filled,n ); }
        if(env_var_0 == 77) { std::max( f_filled,pages[capacity] ); }
        if(env_var_0 == 78) { std::max( f_filled,pages[f_filled] ); }
        if(env_var_0 == 79) { std::max( f_filled,pages[i] ); }
        if(env_var_0 == 80) { std::max( f_filled,pages[n] ); }
        if(env_var_0 == 81) { std::max( i,capacity ); }
        if(env_var_0 == 82) { std::max( i,f_filled ); }
        if(env_var_0 == 83) { std::max( i,i ); }
        if(env_var_0 == 84) { std::max( i,n ); }
        if(env_var_0 == 85) { std::max( i,pages[capacity] ); }
        if(env_var_0 == 86) { std::max( i,pages[f_filled] ); }
        if(env_var_0 == 87) { std::max( i,pages[i] ); }
        if(env_var_0 == 88) { std::max( i,pages[n] ); }
        if(env_var_0 == 89) { std::max( n,capacity ); }
        if(env_var_0 == 90) { std::max( n,f_filled ); }
        if(env_var_0 == 91) { std::max( n,i ); }
        if(env_var_0 == 92) { std::max( n,n ); }
        if(env_var_0 == 93) { std::max( n,pages[capacity] ); }
        if(env_var_0 == 94) { std::max( n,pages[f_filled] ); }
        if(env_var_0 == 95) { std::max( n,pages[i] ); }
        if(env_var_0 == 96) { std::max( n,pages[n] ); }
        if(env_var_0 == 97) { std::max( pages[capacity],capacity ); }
        if(env_var_0 == 98) { std::max( pages[capacity],f_filled ); }
        if(env_var_0 == 99) { std::max( pages[capacity],i ); }
        if(env_var_0 == 100) { std::max( pages[capacity],n ); }
        if(env_var_0 == 101) { std::max( pages[capacity],pages[capacity] ); }
        if(env_var_0 == 102) { std::max( pages[capacity],pages[f_filled] ); }
        if(env_var_0 == 103) { std::max( pages[capacity],pages[i] ); }
        if(env_var_0 == 104) { std::max( pages[capacity],pages[n] ); }
        if(env_var_0 == 105) { std::max( pages[f_filled],capacity ); }
        if(env_var_0 == 106) { std::max( pages[f_filled],f_filled ); }
        if(env_var_0 == 107) { std::max( pages[f_filled],i ); }
        if(env_var_0 == 108) { std::max( pages[f_filled],n ); }
        if(env_var_0 == 109) { std::max( pages[f_filled],pages[capacity] ); }
        if(env_var_0 == 110) { std::max( pages[f_filled],pages[f_filled] ); }
        if(env_var_0 == 111) { std::max( pages[f_filled],pages[i] ); }
        if(env_var_0 == 112) { std::max( pages[f_filled],pages[n] ); }
        if(env_var_0 == 113) { std::max( pages[i],capacity ); }
        if(env_var_0 == 114) { std::max( pages[i],f_filled ); }
        if(env_var_0 == 115) { std::max( pages[i],i ); }
        if(env_var_0 == 116) { std::max( pages[i],n ); }
        if(env_var_0 == 117) { std::max( pages[i],pages[capacity] ); }
        if(env_var_0 == 118) { std::max( pages[i],pages[f_filled] ); }
        if(env_var_0 == 119) { std::max( pages[i],pages[i] ); }
        if(env_var_0 == 120) { std::max( pages[i],pages[n] ); }
        if(env_var_0 == 121) { std::max( pages[n],capacity ); }
        if(env_var_0 == 122) { std::max( pages[n],f_filled ); }
        if(env_var_0 == 123) { std::max( pages[n],i ); }
        if(env_var_0 == 124) { std::max( pages[n],n ); }
        if(env_var_0 == 125) { std::max( pages[n],pages[capacity] ); }
        if(env_var_0 == 126) { std::max( pages[n],pages[f_filled] ); }
        if(env_var_0 == 127) { std::max( pages[n],pages[i] ); }
        if(env_var_0 == 128) { std::max( pages[n],pages[n] ); }
        if(env_var_0 == 129) { std::min( capacity,capacity ); }
        if(env_var_0 == 130) { std::min( capacity,f_filled ); }
        if(env_var_0 == 131) { std::min( capacity,i ); }
        if(env_var_0 == 132) { std::min( capacity,n ); }
        if(env_var_0 == 133) { std::min( capacity,pages[capacity] ); }
        if(env_var_0 == 134) { std::min( capacity,pages[f_filled] ); }
        if(env_var_0 == 135) { std::min( capacity,pages[i] ); }
        if(env_var_0 == 136) { std::min( capacity,pages[n] ); }
        if(env_var_0 == 137) { std::min( f_filled,capacity ); }
        if(env_var_0 == 138) { std::min( f_filled,f_filled ); }
        if(env_var_0 == 139) { std::min( f_filled,i ); }
        if(env_var_0 == 140) { std::min( f_filled,n ); }
        if(env_var_0 == 141) { std::min( f_filled,pages[capacity] ); }
        if(env_var_0 == 142) { std::min( f_filled,pages[f_filled] ); }
        if(env_var_0 == 143) { std::min( f_filled,pages[i] ); }
        if(env_var_0 == 144) { std::min( f_filled,pages[n] ); }
        if(env_var_0 == 145) { std::min( i,capacity ); }
        if(env_var_0 == 146) { std::min( i,f_filled ); }
        if(env_var_0 == 147) { std::min( i,i ); }
        if(env_var_0 == 148) { std::min( i,n ); }
        if(env_var_0 == 149) { std::min( i,pages[capacity] ); }
        if(env_var_0 == 150) { std::min( i,pages[f_filled] ); }
        if(env_var_0 == 151) { std::min( i,pages[i] ); }
        if(env_var_0 == 152) { std::min( i,pages[n] ); }
        if(env_var_0 == 153) { std::min( n,capacity ); }
        if(env_var_0 == 154) { std::min( n,f_filled ); }
        if(env_var_0 == 155) { std::min( n,i ); }
        if(env_var_0 == 156) { std::min( n,n ); }
        if(env_var_0 == 157) { std::min( n,pages[capacity] ); }
        if(env_var_0 == 158) { std::min( n,pages[f_filled] ); }
        if(env_var_0 == 159) { std::min( n,pages[i] ); }
        if(env_var_0 == 160) { std::min( n,pages[n] ); }
        if(env_var_0 == 161) { std::min( pages[capacity],capacity ); }
        if(env_var_0 == 162) { std::min( pages[capacity],f_filled ); }
        if(env_var_0 == 163) { std::min( pages[capacity],i ); }
        if(env_var_0 == 164) { std::min( pages[capacity],n ); }
        if(env_var_0 == 165) { std::min( pages[capacity],pages[capacity] ); }
        if(env_var_0 == 166) { std::min( pages[capacity],pages[f_filled] ); }
        if(env_var_0 == 167) { std::min( pages[capacity],pages[i] ); }
        if(env_var_0 == 168) { std::min( pages[capacity],pages[n] ); }
        if(env_var_0 == 169) { std::min( pages[f_filled],capacity ); }
        if(env_var_0 == 170) { std::min( pages[f_filled],f_filled ); }
        if(env_var_0 == 171) { std::min( pages[f_filled],i ); }
        if(env_var_0 == 172) { std::min( pages[f_filled],n ); }
        if(env_var_0 == 173) { std::min( pages[f_filled],pages[capacity] ); }
        if(env_var_0 == 174) { std::min( pages[f_filled],pages[f_filled] ); }
        if(env_var_0 == 175) { std::min( pages[f_filled],pages[i] ); }
        if(env_var_0 == 176) { std::min( pages[f_filled],pages[n] ); }
        if(env_var_0 == 177) { std::min( pages[i],capacity ); }
        if(env_var_0 == 178) { std::min( pages[i],f_filled ); }
        if(env_var_0 == 179) { std::min( pages[i],i ); }
        if(env_var_0 == 180) { std::min( pages[i],n ); }
        if(env_var_0 == 181) { std::min( pages[i],pages[capacity] ); }
        if(env_var_0 == 182) { std::min( pages[i],pages[f_filled] ); }
        if(env_var_0 == 183) { std::min( pages[i],pages[i] ); }
        if(env_var_0 == 184) { std::min( pages[i],pages[n] ); }
        if(env_var_0 == 185) { std::min( pages[n],capacity ); }
        if(env_var_0 == 186) { std::min( pages[n],f_filled ); }
        if(env_var_0 == 187) { std::min( pages[n],i ); }
        if(env_var_0 == 188) { std::min( pages[n],n ); }
        if(env_var_0 == 189) { std::min( pages[n],pages[capacity] ); }
        if(env_var_0 == 190) { std::min( pages[n],pages[f_filled] ); }
        if(env_var_0 == 191) { std::min( pages[n],pages[i] ); }
        if(env_var_0 == 192) { std::min( pages[n],pages[n] ); }
        if(env_var_0 == 193) { toupper( capacity ); }
        if(env_var_0 == 194) { toupper( f_filled ); }
        if(env_var_0 == 195) { toupper( i ); }
        if(env_var_0 == 196) { toupper( n ); }
        if(env_var_0 == 197) { toupper( pages[capacity] ); }
        if(env_var_0 == 198) { toupper( pages[f_filled] ); }
        if(env_var_0 == 199) { toupper( pages[i] ); }
        if(env_var_0 == 200) { toupper( pages[n] ); }
         ;
      }
    }
    else {
      if ( ( pages [ i ] != 0 ) && ( pages [ i ] < s . size ( ) ) ) {
        auto val = indexes . front ( ) ;
       if(env_var_1 == 0) { capacity += 1; }
        if(env_var_1 == 1) { f_filled += 1; }
        if(env_var_1 == 2) { i += 1; }
        if(env_var_1 == 3) { n += 1; }
        if(env_var_1 == 4) { pages += 1; }
        if(env_var_1 == 5) { pages+capacity += 1; }
        if(env_var_1 == 6) { pages+f_filled += 1; }
        if(env_var_1 == 7) { pages+i += 1; }
        if(env_var_1 == 8) { pages+n += 1; }
        if(env_var_1 == 9) { pages[capacity] += 1; }
        if(env_var_1 == 10) { pages[f_filled] += 1; }
        if(env_var_1 == 11) { pages[i] += 1; }
        if(env_var_1 == 12) { pages[n] += 1; }
        if(env_var_1 == 13) { s += 1; }
        if(env_var_1 == 14) { s.begin() += 1; }
        if(env_var_1 == 15) { s.end() += 1; }
        if(env_var_1 == 16) { val += 1; }
          ;
        s . erase ( val ) ;
        s . insert ( pages [ i ] ) ;
        indexes . push ( pages [ i ] ) ;
        f_filled ++ ;
      }
    }
  }
  return f_filled ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{4,4,6,7,8,11,13,18,26,35,36,37,45,46,46,47,48,49,51,52,53,56,61,74,75,77,80,83,85,86,87,90,93,95,97,98,99,99},{78,-48,50,-20,-6,58,-8,66,72,68,4,80,58,-26,-82,-56,92,76,20,82,-46,86,38,60,-62,-48,76,8,-66,-4,-98,-96,-52,92},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1},{98,78,94,42,62,83,7,62,60,94,16,28,50,15,18,71,86,47,62,89},{-82,-70,-68,-56,-50,-44,4,18,28,30,30,42,66,78,80},{1,1,0,0,1,1,0,0,1,1,1,1,1,0,0,1,1,1,1,1,1,0,1,1,1,0,0,0,0,0,1,1,1,1,0,0,0,0,1,0,0},{4,5,13,15,18,28,32,40,46,46,55,57,61,63,65,68,77,79,79,96},{-2,82,2,-74,-6,-24,54,-74,-98,8,-94,-60,-42,-38,36,-38,-58,-70,-28,-34,70,-6,-2,-76,-40,-4,0,-4,76,48,-34,-26,-48,-58,-88,-44,20,-22,78},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{4,90,28,71,69,45,92,63,72,76,47,85,36,59,88,46,28,19,50,31,63,13}};
    vector<int> param1 {36,33,19,15,9,25,17,31,26,15};
    vector<int> param2 {37,23,13,11,11,25,18,24,24,12};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),param1[i],param2[i]) == f_gold(&param0[i].front(),param1[i],param2[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}

