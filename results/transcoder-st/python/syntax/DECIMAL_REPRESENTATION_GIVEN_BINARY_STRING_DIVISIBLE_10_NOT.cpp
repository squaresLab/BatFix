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
bool f_gold ( string bin ) {
  int n = bin . size ( );
  if ( bin [ n - 1 ] == '1' ) return false;
  int sum = 0;
  for ( int i = n - 2;
  i >= 0;
  i -- ) {
    if ( bin [ i ] == '1' ) {
      int posFromRight = n - i - 1;
      if ( posFromRight % 4 == 1 ) sum = sum + 2;
      else if ( posFromRight % 4 == 2 ) sum = sum + 4;
      else if ( posFromRight % 4 == 3 ) sum = sum + 8;
      else if ( posFromRight % 4 == 0 ) sum = sum + 6;
    }
  }
  if ( sum % 10 == 0 ) return true;
  return false;
}


bool f_filled ( string bin ) {
  int n = bin . length ( ) ;
  if ( ( bin [ n - 1 ] == '1' ) || ( bin [ n - 2 ] == '1' ) || ( bin [ n - 3 ] == '1' ) || ( bin [ n - 4 ] == '1' ) || ( bin [ n - 5 ] == '1' ) || ( bin [ n - 6 ] == '1' ) || ( bin [ n - 7 ] == '1' ) || ( bin [ n - 8 ] == '1' ) || ( bin [ n - 9 ] == '1' ) || ( bin [ n - 10 ] == '1' ) || ( bin [ n - 11 ] == '1' ) || ( bin [ n - 12 ] == '1' ) || ( bin [ n - 13 ] == '1' ) || ( bin [ n - 14 ] == '1' ) || ( bin [ n - 15 ] == '1' ) || ( bin [ n - 16 ] == '1' ) || ( bin [ n - 17 ] == '1' ) || ( bin [ n - 18 ] == '1' ) || ( bin [ n - 19 ] == '1' ) || ( bin [ n - 20 ] == '1' ) || ( bin [ n - 21 ] == '1' ) || ( bin [ n - 22 ] == '1' ) || ( bin [ n - 23 ] == '1' ) || ( bin [ n - 24 ] == '1' ) || ( bin [ n - 25 ] == '1' ) || ( bin [ n - 26 ] == '1' ) || ( bin [ n - 27 ] == '1' ) || ( bin [ n - 28 ] == '1' ) || ( bin [ n - 29 ] == '1' ) || ( bin [ n - 30 ] == '1' ) || ( bin [ n - 31 ] == '1' ) || ( bin [ n - 32 ] == '1' ) || ( bin [ n - 33 ] == '1' ) || ( bin [ n - 34 ] == '1' ) || ( bin [ n - 35 ] == '1' ) || ( bin [ n - 36 ] == '1' ) || ( bin [ n - 37 ] == '1' ) || ( bin [ n - 38 ] == '1' ) || ( bin [ n - 39 ] == '1' ) || ( bin [ n - 40 ] == '1' ) || ( bin [ n - 41 ] == '1' ) || ( bin [ n - 42 ] == '1' ) || ( bin [ n - 43 ] == '1' ) || ( bin [ n - 44 ] == '1' ) || ( bin [ n

int main() {
    int n_success = 0;
    vector<string> param0 {"101000","39613456759141","11","PoiHjo","2","0000101","T  s dZKeDX gK","3944713969","1000","ifYUgdpmt"};
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