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
int f_gold ( string str ) {
  int one_count = 0, zero_count = 0;
  int n = str . length ( );
  for ( int i = 0;
  i < n;
  i ++ ) if ( str [ i ] == '1' ) one_count ++;
  else zero_count ++;
  if ( one_count % 2 == 0 ) return zero_count;
  return one_count;
}


int f_filled ( string str ) {
  int oneCount = 0 ;
  int zeroCount = 0 ;
  int n = str . length ( ) ;
  for ( int i = 0 ;
  i < n ;
  i += 1 ) {
    if ( ( str [ i ] == '1' ) || ( str [ i ] == '0' ) ) {
      oneCount ++ ;
    }
    else {
      zeroCount ++ ;
    }
  }
  if ( ( oneCount % 2 == 0 ) && ( zeroCount == 0 ) ) {
    return zeroCount ;
  }
  return oneCount ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"KfcTJNP","05312505872","100111","tDEEhKxrQ","50824233019","10001110010","T SEZaNm MYQ","838415739","01110100","WYQiAey H"};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i]) == f_gold(param0[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}