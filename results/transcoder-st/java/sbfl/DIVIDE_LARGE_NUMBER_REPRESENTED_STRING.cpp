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
string f_gold ( string number, int divisor ) {
  string ans;
  int idx = 0;
  int temp = number [ idx ] - '0';
  while ( temp < divisor ) temp = temp * 10 + ( number [ ++ idx ] - '0' );
  while ( number . size ( ) > idx ) {
    ans += ( temp / divisor ) + '0';
    temp = ( temp % divisor ) * 10 + number [ ++ idx ] - '0';
  }
  if ( ans . length ( ) == 0 ) return "0";
  return ans;
}


string f_filled ( string number , int divisor ) {
  string ans ;
  int idx = 0 ;
  string num = number ;
  int temp = num [ idx ] - '0' ;
  while ( temp < divisor ) {
    temp = temp * 10 + ( num [ ++ idx ] - '0' ) ;
  }
  idx += 1 ;
  while ( num . length ( ) > idx ) {
    ans += ( temp / divisor ) ;
    temp = ( temp % divisor ) * 10 + num [ idx ++ ] - '0' ;
  }
  if ( ans . length ( ) == 0 ) return "0" ;
  return ans ;
}


int main(int argc, char** argv) {
    int n_success = 0;
    vector<string> param0 {"92733233370448","01","ENxfvIzh","00478135","11","O","813","011011"};
    vector<int> param1 {96,71,12,62,85,92,24,31,78,17};
    assert(argc > 1); int i = atol(argv[1]); assert(i < param0.size()); return f_filled(param0[i],param1[i]) == f_gold(param0[i],param1[i]);
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
