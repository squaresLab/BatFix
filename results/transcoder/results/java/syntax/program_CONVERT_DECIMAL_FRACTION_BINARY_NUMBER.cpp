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
string f_gold ( double num, int k_prec ) {
  string binary = "";
  int Integral = num;
  double fractional = num - Integral;
  while ( Integral ) {
    int rem = Integral % 2;
    binary . push_back ( rem + '0' );
    Integral /= 2;
  }
  reverse ( binary . begin ( ), binary . end ( ) );
  binary . push_back ( '.' );
  while ( k_prec -- ) {
    fractional *= 2;
    int fract_bit = fractional;
    if ( fract_bit == 1 ) {
      fractional -= fract_bit;
      binary . push_back ( 1 + '0' );
    }
    else binary . push_back ( 0 + '0' );
  }
  return binary;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
string f_filled ( double num, int k_prec ) {
  string binary;
  int Integral = ( int ) num;
  double fractional = num - Integral;
  while ( Integral ) {
    int rem = Integral % 2;
    binary += ( char ) ( rem + '0' );
    Integral /= 2;
  }
  if(env_var_0 == 0) { binary = Integral; }
  if(env_var_0 == 1) { binary = binary; }
  if(env_var_0 == 2) { binary = binary.__append_default_init( Integral ); }
  if(env_var_0 == 3) { binary = binary.__append_default_init( binary[Integral] ); }
  if(env_var_0 == 4) { binary = binary.__append_default_init( binary[k_prec] ); }
  if(env_var_0 == 5) { binary = binary.__append_default_init( fractional ); }
  if(env_var_0 == 6) { binary = binary.__append_default_init( k_prec ); }
  if(env_var_0 == 7) { binary = binary.__append_default_init( num ); }
  if(env_var_0 == 8) { binary = binary.__resize_default_init( Integral ); }
  if(env_var_0 == 9) { binary = binary.__resize_default_init( binary[Integral] ); }
  if(env_var_0 == 10) { binary = binary.__resize_default_init( binary[k_prec] ); }
  if(env_var_0 == 11) { binary = binary.__resize_default_init( fractional ); }
  if(env_var_0 == 12) { binary = binary.__resize_default_init( k_prec ); }
  if(env_var_0 == 13) { binary = binary.__resize_default_init( num ); }
  if(env_var_0 == 14) { binary = binary.__shrink_or_extend( Integral ); }
  if(env_var_0 == 15) { binary = binary.__shrink_or_extend( binary[Integral] ); }
  if(env_var_0 == 16) { binary = binary.__shrink_or_extend( binary[k_prec] ); }
  if(env_var_0 == 17) { binary = binary.__shrink_or_extend( fractional ); }
  if(env_var_0 == 18) { binary = binary.__shrink_or_extend( k_prec ); }
  if(env_var_0 == 19) { binary = binary.__shrink_or_extend( num ); }
  if(env_var_0 == 20) { binary = binary.append( binary ); }
  if(env_var_0 == 21) { binary = binary.assign( binary ); }
  if(env_var_0 == 22) { binary = binary.at( Integral ); }
  if(env_var_0 == 23) { binary = binary.at( binary[Integral] ); }
  if(env_var_0 == 24) { binary = binary.at( binary[k_prec] ); }
  if(env_var_0 == 25) { binary = binary.at( fractional ); }
  if(env_var_0 == 26) { binary = binary.at( k_prec ); }
  if(env_var_0 == 27) { binary = binary.at( num ); }
  if(env_var_0 == 28) { binary = binary.begin(); }
  if(env_var_0 == 29) { binary = binary.compare( binary ); }
  if(env_var_0 == 30) { binary = binary.end(); }
  if(env_var_0 == 31) { binary = binary.push_back( Integral ); }
  if(env_var_0 == 32) { binary = binary.push_back( binary[Integral] ); }
  if(env_var_0 == 33) { binary = binary.push_back( binary[k_prec] ); }
  if(env_var_0 == 34) { binary = binary.push_back( fractional ); }
  if(env_var_0 == 35) { binary = binary.push_back( k_prec ); }
  if(env_var_0 == 36) { binary = binary.push_back( num ); }
  if(env_var_0 == 37) { binary = binary.reserve( Integral ); }
  if(env_var_0 == 38) { binary = binary.reserve( binary[Integral] ); }
  if(env_var_0 == 39) { binary = binary.reserve( binary[k_prec] ); }
  if(env_var_0 == 40) { binary = binary.reserve( fractional ); }
  if(env_var_0 == 41) { binary = binary.reserve( k_prec ); }
  if(env_var_0 == 42) { binary = binary.reserve( num ); }
  if(env_var_0 == 43) { binary = binary.resize( Integral ); }
  if(env_var_0 == 44) { binary = binary.resize( binary[Integral] ); }
  if(env_var_0 == 45) { binary = binary.resize( binary[k_prec] ); }
  if(env_var_0 == 46) { binary = binary.resize( fractional ); }
  if(env_var_0 == 47) { binary = binary.resize( k_prec ); }
  if(env_var_0 == 48) { binary = binary.resize( num ); }
  if(env_var_0 == 49) { binary = binary.swap( binary ); }
  if(env_var_0 == 50) { binary = binary[Integral]; }
  if(env_var_0 == 51) { binary = binary[k_prec]; }
  if(env_var_0 == 52) { binary = fractional; }
  if(env_var_0 == 53) { binary = isupper( Integral ); }
  if(env_var_0 == 54) { binary = isupper( binary[Integral] ); }
  if(env_var_0 == 55) { binary = isupper( binary[k_prec] ); }
  if(env_var_0 == 56) { binary = isupper( fractional ); }
  if(env_var_0 == 57) { binary = isupper( k_prec ); }
  if(env_var_0 == 58) { binary = isupper( num ); }
  if(env_var_0 == 59) { binary = k_prec; }
  if(env_var_0 == 60) { binary = num; }
  if(env_var_0 == 61) { binary = std::max( Integral,Integral ); }
  if(env_var_0 == 62) { binary = std::max( Integral,binary[Integral] ); }
  if(env_var_0 == 63) { binary = std::max( Integral,binary[k_prec] ); }
  if(env_var_0 == 64) { binary = std::max( Integral,fractional ); }
  if(env_var_0 == 65) { binary = std::max( Integral,k_prec ); }
  if(env_var_0 == 66) { binary = std::max( Integral,num ); }
  if(env_var_0 == 67) { binary = std::max( binary[Integral],Integral ); }
  if(env_var_0 == 68) { binary = std::max( binary[Integral],binary[Integral] ); }
  if(env_var_0 == 69) { binary = std::max( binary[Integral],binary[k_prec] ); }
  if(env_var_0 == 70) { binary = std::max( binary[Integral],fractional ); }
  if(env_var_0 == 71) { binary = std::max( binary[Integral],k_prec ); }
  if(env_var_0 == 72) { binary = std::max( binary[Integral],num ); }
  if(env_var_0 == 73) { binary = std::max( binary[k_prec],Integral ); }
  if(env_var_0 == 74) { binary = std::max( binary[k_prec],binary[Integral] ); }
  if(env_var_0 == 75) { binary = std::max( binary[k_prec],binary[k_prec] ); }
  if(env_var_0 == 76) { binary = std::max( binary[k_prec],fractional ); }
  if(env_var_0 == 77) { binary = std::max( binary[k_prec],k_prec ); }
  if(env_var_0 == 78) { binary = std::max( binary[k_prec],num ); }
  if(env_var_0 == 79) { binary = std::max( fractional,Integral ); }
  if(env_var_0 == 80) { binary = std::max( fractional,binary[Integral] ); }
  if(env_var_0 == 81) { binary = std::max( fractional,binary[k_prec] ); }
  if(env_var_0 == 82) { binary = std::max( fractional,fractional ); }
  if(env_var_0 == 83) { binary = std::max( fractional,k_prec ); }
  if(env_var_0 == 84) { binary = std::max( fractional,num ); }
  if(env_var_0 == 85) { binary = std::max( k_prec,Integral ); }
  if(env_var_0 == 86) { binary = std::max( k_prec,binary[Integral] ); }
  if(env_var_0 == 87) { binary = std::max( k_prec,binary[k_prec] ); }
  if(env_var_0 == 88) { binary = std::max( k_prec,fractional ); }
  if(env_var_0 == 89) { binary = std::max( k_prec,k_prec ); }
  if(env_var_0 == 90) { binary = std::max( k_prec,num ); }
  if(env_var_0 == 91) { binary = std::max( num,Integral ); }
  if(env_var_0 == 92) { binary = std::max( num,binary[Integral] ); }
  if(env_var_0 == 93) { binary = std::max( num,binary[k_prec] ); }
  if(env_var_0 == 94) { binary = std::max( num,fractional ); }
  if(env_var_0 == 95) { binary = std::max( num,k_prec ); }
  if(env_var_0 == 96) { binary = std::max( num,num ); }
  if(env_var_0 == 97) { binary = std::min( Integral,Integral ); }
  if(env_var_0 == 98) { binary = std::min( Integral,binary[Integral] ); }
  if(env_var_0 == 99) { binary = std::min( Integral,binary[k_prec] ); }
  if(env_var_0 == 100) { binary = std::min( Integral,fractional ); }
  if(env_var_0 == 101) { binary = std::min( Integral,k_prec ); }
  if(env_var_0 == 102) { binary = std::min( Integral,num ); }
  if(env_var_0 == 103) { binary = std::min( binary[Integral],Integral ); }
  if(env_var_0 == 104) { binary = std::min( binary[Integral],binary[Integral] ); }
  if(env_var_0 == 105) { binary = std::min( binary[Integral],binary[k_prec] ); }
  if(env_var_0 == 106) { binary = std::min( binary[Integral],fractional ); }
  if(env_var_0 == 107) { binary = std::min( binary[Integral],k_prec ); }
  if(env_var_0 == 108) { binary = std::min( binary[Integral],num ); }
  if(env_var_0 == 109) { binary = std::min( binary[k_prec],Integral ); }
  if(env_var_0 == 110) { binary = std::min( binary[k_prec],binary[Integral] ); }
  if(env_var_0 == 111) { binary = std::min( binary[k_prec],binary[k_prec] ); }
  if(env_var_0 == 112) { binary = std::min( binary[k_prec],fractional ); }
  if(env_var_0 == 113) { binary = std::min( binary[k_prec],k_prec ); }
  if(env_var_0 == 114) { binary = std::min( binary[k_prec],num ); }
  if(env_var_0 == 115) { binary = std::min( fractional,Integral ); }
  if(env_var_0 == 116) { binary = std::min( fractional,binary[Integral] ); }
  if(env_var_0 == 117) { binary = std::min( fractional,binary[k_prec] ); }
  if(env_var_0 == 118) { binary = std::min( fractional,fractional ); }
  if(env_var_0 == 119) { binary = std::min( fractional,k_prec ); }
  if(env_var_0 == 120) { binary = std::min( fractional,num ); }
  if(env_var_0 == 121) { binary = std::min( k_prec,Integral ); }
  if(env_var_0 == 122) { binary = std::min( k_prec,binary[Integral] ); }
  if(env_var_0 == 123) { binary = std::min( k_prec,binary[k_prec] ); }
  if(env_var_0 == 124) { binary = std::min( k_prec,fractional ); }
  if(env_var_0 == 125) { binary = std::min( k_prec,k_prec ); }
  if(env_var_0 == 126) { binary = std::min( k_prec,num ); }
  if(env_var_0 == 127) { binary = std::min( num,Integral ); }
  if(env_var_0 == 128) { binary = std::min( num,binary[Integral] ); }
  if(env_var_0 == 129) { binary = std::min( num,binary[k_prec] ); }
  if(env_var_0 == 130) { binary = std::min( num,fractional ); }
  if(env_var_0 == 131) { binary = std::min( num,k_prec ); }
  if(env_var_0 == 132) { binary = std::min( num,num ); }
  if(env_var_0 == 133) { binary = toupper( Integral ); }
  if(env_var_0 == 134) { binary = toupper( binary[Integral] ); }
  if(env_var_0 == 135) { binary = toupper( binary[k_prec] ); }
  if(env_var_0 == 136) { binary = toupper( fractional ); }
  if(env_var_0 == 137) { binary = toupper( k_prec ); }
  if(env_var_0 == 138) { binary = toupper( num ); }
  ;
  binary += ( '.' );
  while ( k_prec -- ) {
    fractional *= 2;
    int fract_bit = ( int ) fractional;
    if ( fract_bit == 1 ) {
      fractional -= fract_bit;
      binary += ( char ) ( 1 + '0' );
    }
    else {
      binary += ( char ) ( 0 + '0' );
    }
  }
  return binary;
}


int main() {
    int n_success = 0;
    vector<double> param0 {669.1814271974272,-6553.367253116433,2087.729683310425,-953.9651645597713,8433.012733502104,-173.90092987443873,5301.037770893914,-1650.793567487302,6800.282512726602,-4080.798596227304};
    vector<int> param1 {33,55,10,83,17,14,34,24,70,45};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i],param1[i]) == f_gold(param0[i],param1[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
