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
int f_gold ( char str [ ], int n ) {
  char last = ' ';
  int res = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( last != str [ i ] ) res ++;
    last = str [ i ];
  }
  return res / 2;
}


int f_filled ( string str, int n ) {
  char last = ' ';
  int res = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( last != str [ i ] ) {
      res ++;
    }
    last = str [ i ];
  }
  return res / 2;
}



static // f_filled_inner(char   param0 [ ], int param1)
{
string string_param0(param0);
return (//) f_filled(string_param0,param1);
}

int main() {
    int n_success = 0;
    vector<string> param0 {"VrTpXWR","2","00011111","adAIqCcOkao","6696836653","0010111","jGYH","4374","0","cNM"};
    vector<int> param1 {46,58,84,85,52,78,60,52,56,35};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled_inner(&param0[i].front(),param1[i]) == f_gold(&param0[i].front(),param1[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}