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
string f_gold ( string s ) {
  if ( s == "" ) return "a";
  int i = s . length ( ) - 1;
  while ( s [ i ] == 'z' && i >= 0 ) i --;
  if ( i == - 1 ) s = s + 'a';
  else s [ i ] ++;
  return s;
}


string f_filled ( string str ) {
  if ( str == "" ) return "a";
  int i = str . size ( ) - 1;
  while ( str [ i ] == 'z' && i >= 0 ) i --;
  if ( i == - 1 ) str [ i ] = 'a';
  else str [ i ] = str [ 0 ] + ( char ) ( ( int ) ( str [ i ] ) + 1 ) + str [ i + 1 ];
  return str;
}


int main(int argc, char** argv) {
    int n_success = 0;
    vector<string> param0 {"shhdhdhsdhb","abfhwufhsh","fhjddshcfrhde","fs","dfjsjwd","pspcvn","poiuyioot","lolada","mix","rw"};
    assert(argc > 1); int i = atol(argv[1]); return f_filled(param0[i]) == f_gold(param0[i]);
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
