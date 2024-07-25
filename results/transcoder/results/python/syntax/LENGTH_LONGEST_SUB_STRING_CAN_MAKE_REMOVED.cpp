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
  vector < pair < char, int > > arr;
  arr . push_back ( {
    '@', - 1 }
    );
    int maxlen = 0;
    for ( int i = 0;
    i < str . length ( );
    ++ i ) {
      arr . push_back ( {
        str [ i ], i }
        );
        while ( arr . size ( ) >= 3 && arr [ arr . size ( ) - 3 ] . first == '1' && arr [ arr . size ( ) - 2 ] . first == '0' && arr [ arr . size ( ) - 1 ] . first == '0' ) {
          arr . pop_back ( );
          arr . pop_back ( );
          arr . pop_back ( );
        }
        int tmp = arr . back ( ) . second;
        maxlen = max ( maxlen, i - tmp );
      }
      return maxlen;
    }
    

int foo;
 int f_filled ( string S ) {
  vector < pair < string , int >> arr ;
  arr . push_back ( make_pair ( "@" , - 1 ) ) ;
  int maxlen = 0 ;
  for ( int i = 0 ;
  i < S . size ( ) ;
  i ++ ) {
    foo ;
    while ( ( arr . size ( ) >= 3 && foo && foo && foo ) || ( arr . size ( ) >= 2 && foo && foo ) ) {
      arr . pop_back ( ) ;
      arr . pop_back ( ) ;
      arr . pop_back ( ) ;
    }
    pair < string , int > tmp = arr . back ( ) ;
    maxlen = max ( maxlen , i - tmp . second ) ;
  }
  return maxlen ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"U","544","111"," cDQaNxpRSOe","42920062459","00100101","FiC","302746335230","1","ZBLHiwGreUR "};
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

