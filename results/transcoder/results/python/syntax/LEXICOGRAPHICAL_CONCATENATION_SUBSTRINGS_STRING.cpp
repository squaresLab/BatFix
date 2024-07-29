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
  int n = s . length ( );
  int sub_count = n * ( n + 1 ) / 2;
  string arr [ sub_count ];
  int index = 0;
  for ( int i = 0;
  i < n;
  i ++ ) for ( int len = 1;
  len <= n - i;
  len ++ ) arr [ index ++ ] = s . substr ( i, len );
  sort ( arr, arr + sub_count );
  string res = "";
  for ( int i = 0;
  i < sub_count;
  i ++ ) res += arr [ i ];
  return res;
}


int foo;
std::string f_filled(std::string s) {
    int n = s.size();
    ;
    int sub_count = (n * (n + 1)) / 2;
    int arr;
    int index = 0;
    foo;
    {
        foo;
        {
            index++;
        }
    }
    std::string res;
    foo;
    {
    }
    return;
}



int main() {
    int n_success = 0;
    vector<string> param0 {"sqGOi","848580","01001110011001","ZhWXUKmeiI","0917296541285","01101001111100","tjP kR","999907","011100","qJPHNSJOUj"};
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
