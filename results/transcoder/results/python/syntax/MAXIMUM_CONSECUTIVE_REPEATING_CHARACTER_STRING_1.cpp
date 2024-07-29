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
char f_gold ( string str ) {
  int n = str . length ( );
  int count = 0;
  char res = str [ 0 ];
  int cur_count = 1;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( i < n - 1 && str [ i ] == str [ i + 1 ] ) cur_count ++;
    else {
      if ( cur_count > count ) {
        count = cur_count;
        res = str [ i ];
      }
      cur_count = 1;
    }
  }
  return res;
}


int foo;
 std::string f_filled(std::string str) {
    int n = str.size();
    int count = 0;
    auto res = str[0];
    int cur_count = 1;
    for (int i = 0; i < n; i++) {
        if ((i < n - 1 && str[i] == str[i + 1]) || (i < n - 1 && str[i] == str[i + 1])) {
            cur_count++;
        } else {
            if (cur_count > count) {
                count = cur_count;
                res = str[i];
            }
            cur_count = 1;
        }
    }
}






int main() {
    int n_success = 0;
    vector<string> param0 {"geeekk","3786868","110","aaaabbcbbb","11","011101","WoHNyJYLC","3141711779","10111101101","aabbabababcc"};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(foo
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
