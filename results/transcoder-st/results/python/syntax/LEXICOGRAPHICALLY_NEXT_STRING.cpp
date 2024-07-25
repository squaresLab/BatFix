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
string f_gold ( string s ) {
  if ( s == "" ) return "a";
  int i = s . length ( ) - 1;
  while ( s [ i ] == 'z' && i >= 0 ) i --;
  if ( i == - 1 ) s = s + 'a';
  else s [ i ] ++;
  return s;
}


int foo;
std::string f_filled(std::string s) {
}


