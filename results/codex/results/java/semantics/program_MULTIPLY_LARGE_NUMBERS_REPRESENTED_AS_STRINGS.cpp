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
string f_gold ( string num1, string num2 ) {
  int len1 = num1 . size ( );
  int len2 = num2 . size ( );
  if ( len1 == 0 || len2 == 0 ) return "0";
  vector < int > result ( len1 + len2, 0 );
  int i_n1 = 0;
  int i_n2 = 0;
  for ( int i = len1 - 1;
  i >= 0;
  i -- ) {
    int carry = 0;
    int n1 = num1 [ i ] - '0';
    i_n2 = 0;
    for ( int j = len2 - 1;
    j >= 0;
    j -- ) {
      int n2 = num2 [ j ] - '0';
      int sum = n1 * n2 + result [ i_n1 + i_n2 ] + carry;
      carry = sum / 10;
      result [ i_n1 + i_n2 ] = sum % 10;
      i_n2 ++;
    }
    if ( carry > 0 ) result [ i_n1 + i_n2 ] += carry;
    i_n1 ++;
  }
  int i = result . size ( ) - 1;
  while ( i >= 0 && result [ i ] == 0 ) i --;
  if ( i == - 1 ) return "0";
  string s = "";
  while ( i >= 0 ) s += std :: to_string ( result [ i -- ] );
  return s;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
string f_filled(string num1, string num2) {
        if(env_var_0 == 0) { int len1 = *num2.data(); }
        if(env_var_0 == 1) { int len1 = num1; }
        if(env_var_0 == 2) { int len1 = num1.begin(); }
        if(env_var_0 == 3) { int len1 = num1.end(); }
        if(env_var_0 == 4) { int len1 = num2; }
        if(env_var_0 == 5) { int len1 = num2.__invariants(); }
        if(env_var_0 == 6) { int len1 = num2.__is_long(); }
        if(env_var_0 == 7) { int len1 = num2.back(); }
        if(env_var_0 == 8) { int len1 = num2.begin(); }
        if(env_var_0 == 9) { int len1 = num2.cbegin(); }
        if(env_var_0 == 10) { int len1 = num2.clear(); }
        if(env_var_0 == 11) { int len1 = num2.crbegin(); }
        if(env_var_0 == 12) { int len1 = num2.end(); }
        if(env_var_0 == 13) { int len1 = num2.front(); }
        if(env_var_0 == 14) { int len1 = num2.max_size(); }
        if(env_var_0 == 15) { int len1 = num2.pop_back(); }
        if(env_var_0 == 16) { int len1 = num2.rbegin(); }
        if(env_var_0 == 17) { int len1 = num2.rend(); }
        if(env_var_0 == 18) { int len1 = num2.reserve(); }
        if(env_var_0 == 19) { int len1 = num2.size(); }
        if(env_var_0 == 20) { int len1 = toupper(); }

        int len2 = num2.length();
        if (len1 == 0 || len2 == 0) return "0";
        int result[len1 + len2];
        int i_n1 = 0;
        int i_n2 = 0;
        for (int i = len1 - 1; i >= 0; i--) {
            int carry = 0;
            int n1 = num1[i] - '0';
            i_n2 = 0;
            for (int j = len2 - 1; j >= 0; j--) {
                int n2 = num2[j] - '0';
                int sum = n1 * n2 + result[i_n1 + i_n2] + carry;
                carry = sum / 10;
                result[i_n1 + i_n2] = sum % 10;
                i_n2++;
            }
            if (carry > 0) result[i_n1 + i_n2] += carry;
            i_n1++;
        }
        int i = len1 + len2 - 1;
        while (i >= 0 && result[i] == 0) i--;
        if (i == -1) return "0";
        string s = "";
        while (i >= 0) s += (result[i--] + '0');
        return s;
    }

int main() {
    int n_success = 0;
    vector<string> param0 {"OaITtzE","88111031","1100111","eiWPbMrFx","43701248","100001111110","jVgOapMp","68337672","00110101","JqSh"};
    vector<string> param1 {"RnYlJUqzk","558471","11111110111101","tBAJaI","4027","11","Xm","56939","1","iAfjQRwuVyost"};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i],param1[i]) == f_gold(param0[i],param1[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
