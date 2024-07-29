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
  string temp = "";
  int sum = 0;
  for ( char ch : str ) {
    if ( isdigit ( ch ) ) temp += ch;
    else {
      sum += atoi ( temp . c_str ( ) );
      temp = "";
    }
  }
  return sum + atoi ( temp . c_str ( ) );
}


int f_filled(string str1)
    {
        string temp = "";
        int Sum = 0;
        for (int i = 0; i < str1.length(); i++)
        {
            if (isdigit(str1[i]))
            {
                temp += str1[i];
            }
            else
            {
                Sum += stoi(temp);
                temp = "0";
            }
        }
        return Sum + stoi(temp);
    }

int main() {
    int n_success = 0;
    vector<string> param0 {"FpuZdXbJ","8248545127035","00101111101","WuaZuohxsww","77298","101110","HiHCWcmzqGMdE","9661651","000110100111","nwuNyyVBJFWvO"};
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
