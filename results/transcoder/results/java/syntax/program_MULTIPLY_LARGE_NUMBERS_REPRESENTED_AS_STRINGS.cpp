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
string f_filled ( string num1, string num2 ) {
  int len1 = num1 . length ( );
  int len2 = num2 . length ( );
  if ( len1 == 0 || len2 == 0 ) return "0";
  int result [ len1 + len2 ];
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
 auto i ;
  if(env_var_0 == 0) { i = *num2.c_str() - 1; }
  if(env_var_0 == 1) { i = i - 1; }
  if(env_var_0 == 2) { i = i_n1 - 1; }
  if(env_var_0 == 3) { i = i_n2 - 1; }
  if(env_var_0 == 4) { i = isupper() - 1; }
  if(env_var_0 == 5) { i = len1 - 1; }
  if(env_var_0 == 6) { i = len2 - 1; }
  if(env_var_0 == 7) { i = num1 - 1; }
  if(env_var_0 == 8) { i = num1.begin() - 1; }
  if(env_var_0 == 9) { i = num1.end() - 1; }
  if(env_var_0 == 10) { i = num1[i] - 1; }
  if(env_var_0 == 11) { i = num1[i_n1] - 1; }
  if(env_var_0 == 12) { i = num1[i_n2] - 1; }
  if(env_var_0 == 13) { i = num1[len1] - 1; }
  if(env_var_0 == 14) { i = num1[len2] - 1; }
  if(env_var_0 == 15) { i = num2 - 1; }
  if(env_var_0 == 16) { i = num2.__clear_and_shrink() - 1; }
  if(env_var_0 == 17) { i = num2.back() - 1; }
  if(env_var_0 == 18) { i = num2.begin() - 1; }
  if(env_var_0 == 19) { i = num2.capacity() - 1; }
  if(env_var_0 == 20) { i = num2.cend() - 1; }
  if(env_var_0 == 21) { i = num2.crend() - 1; }
  if(env_var_0 == 22) { i = num2.empty() - 1; }
  if(env_var_0 == 23) { i = num2.end() - 1; }
  if(env_var_0 == 24) { i = num2.front() - 1; }
  if(env_var_0 == 25) { i = num2.get_allocator() - 1; }
  if(env_var_0 == 26) { i = num2.length() - 1; }
  if(env_var_0 == 27) { i = num2.rbegin() - 1; }
  if(env_var_0 == 28) { i = num2.rend() - 1; }
  if(env_var_0 == 29) { i = num2.shrink_to_fit() - 1; }
  if(env_var_0 == 30) { i = num2[i] - 1; }
  if(env_var_0 == 31) { i = num2[i_n1] - 1; }
  if(env_var_0 == 32) { i = num2[i_n2] - 1; }
  if(env_var_0 == 33) { i = num2[len1] - 1; }
  if(env_var_0 == 34) { i = num2[len2] - 1; }
  if(env_var_0 == 35) { i = result - 1; }
  if(env_var_0 == 36) { i = result[i] - 1; }
  if(env_var_0 == 37) { i = toupper( i ) - 1; }
  if(env_var_0 == 38) { i = toupper( i_n1 ) - 1; }
  if(env_var_0 == 39) { i = toupper( i_n2 ) - 1; }
  if(env_var_0 == 40) { i = toupper( len1 ) - 1; }
  if(env_var_0 == 41) { i = toupper( len2 ) - 1; }
  if(env_var_0 == 42) { i = toupper( num1[i] ) - 1; }
  if(env_var_0 == 43) { i = toupper( num1[i_n1] ) - 1; }
  if(env_var_0 == 44) { i = toupper( num1[i_n2] ) - 1; }
  if(env_var_0 == 45) { i = toupper( num1[len1] ) - 1; }
  if(env_var_0 == 46) { i = toupper( num1[len2] ) - 1; }
  if(env_var_0 == 47) { i = toupper( num2[i] ) - 1; }
  if(env_var_0 == 48) { i = toupper( num2[i_n1] ) - 1; }
  if(env_var_0 == 49) { i = toupper( num2[i_n2] ) - 1; }
  if(env_var_0 == 50) { i = toupper( num2[len1] ) - 1; }
  if(env_var_0 == 51) { i = toupper( num2[len2] ) - 1; }
  if(env_var_0 == 52) { i = toupper( result ) - 1; }
  if(env_var_0 == 53) { i = toupper( result[i] ) - 1; }
   
  while ( i >= 0 && result [ i ] == 0 ) i --;
  if ( i == - 1 ) return "0";
  string s = "";
  while ( i >= 0 ) s += ( result [ i -- ] );
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

