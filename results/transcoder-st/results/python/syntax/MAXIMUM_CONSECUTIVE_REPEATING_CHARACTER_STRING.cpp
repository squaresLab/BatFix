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
  int len = str . length ( );
  int count = 0;
  char res = str [ 0 ];
  for ( int i = 0;
  i < len;
  i ++ ) {
    int cur_count = 1;
    for ( int j = i + 1;
    j < len;
    j ++ ) {
      if ( str [ i ] != str [ j ] ) break;
      cur_count ++;
    }
    if ( cur_count > count ) {
      count = cur_count;
      res = str [ i ];
    }
  }
  return res;
}


int foo;
std::string f_filled(std::string str) {
    int l = str.length();
    int count = 0;
    auto res = str[0];
    for (int i = 0; i < l; i++) {
        int curCount = 1;
        for (int j = i + 1; j < l; j++) {
            if ((str[i] != str[j]) && (str[i] != str[j]))
                break;
            curCount++;
        }
        if (curCount > count) {
            count = curCount;
            res = str[i];
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
