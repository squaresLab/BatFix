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
typedef int returns;
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
 std::string f_filled(std::string num1, std::string num2) {
    int len1 = num1.size();
    int len2 = num2.size();
    if (len1 == 0 || len2 == 0)
        return "0";
    vector<int> result(len1 + len2);
    int i_n1 = 0;
    int i_n2 = 0;
    for (int i = len1 - 1; i >= 0; i--) {
        int carry = 0;
        int n1 = (int)num1[i] - 48;
        i_n2 = 0;
        for (int j = len2 - 1; j >= 0; j--) {
            int n2 = (int)num2[j] - 48;
            int summ = n1 * n2 + result[i_n1 + i_n2] + carry;
            carry = summ / 10;
            result[i_n1 + i_n2] = summ % 10;
            i_n2++;
        }
        if ((carry > 0) && (result[i_n1 + i_n2] == 0))
            result[i_n1 + i_n2] += carry;
        i_n1++;
    }
    int i = result.size() - 1;
    while ((i >= 0) && (result[i] == 0))
        i--;
    if ((i == -1) && (result[0] == 0))
        return "0";
    std::string s = "";
    while ((i >= 0) && (s.size() > 0))
        {
            s += (char)result[i] + 48;
            i--;
        }
}
