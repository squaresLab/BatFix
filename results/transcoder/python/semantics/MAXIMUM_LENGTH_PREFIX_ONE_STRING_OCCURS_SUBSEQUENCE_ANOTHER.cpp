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
int f_gold ( char s [ ], char t [ ] ) {
  int count = 0;
  for ( int i = 0;
  i < strlen ( t );
  i ++ ) {
    if ( count == strlen ( s ) ) break;
    if ( t [ i ] == s [ count ] ) count ++;
  }
  return count;
}


int f_filled ( string s , string t ) {
  int count = 0 ;
  for ( int i = 0 ;
  ;
  i ++ ) {
    if ( ( count == s . size ( ) ) && ( i < t . size ( ) ) ) break ;
    if ( ( t [ i ] == s [ count ] ) && ( i < t . size ( ) ) ) count = count + 1 ;
  }
  return count ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"nObYIOjEQZ","84574","1010001010010","DjZtAfUudk","550","1110","GywyxwH","67318370914755","11011000000101","G"};
    vector<string> param1 {"uARTDTQbmGI","8538229","11","OewGm","132744553919","0101","LPQqEqrDZiwY","9928","00000","V"};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),&param1[i].front()) == f_gold(&param0[i].front(),&param1[i].front()))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}