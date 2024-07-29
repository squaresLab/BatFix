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
string f_gold ( string str1, string str2 ) {
  if ( str1 . length ( ) > str2 . length ( ) ) swap ( str1, str2 );
  string str = "";
  int n1 = str1 . length ( ), n2 = str2 . length ( );
  int diff = n2 - n1;
  int carry = 0;
  for ( int i = n1 - 1;
  i >= 0;
  i -- ) {
    int sum = ( ( str1 [ i ] - '0' ) + ( str2 [ i + diff ] - '0' ) + carry );
    str . push_back ( sum % 10 + '0' );
    carry = sum / 10;
  }
  for ( int i = n2 - n1 - 1;
  i >= 0;
  i -- ) {
    int sum = ( ( str2 [ i ] - '0' ) + carry );
    str . push_back ( sum % 10 + '0' );
    carry = sum / 10;
  }
  if ( carry ) str . push_back ( carry + '0' );
  reverse ( str . begin ( ), str . end ( ) );
  return str;
}


void f_filled ( string str1 , string str2 ) {
  if ( str1 . size ( ) > str2 . size ( ) ) {
    string temp = str1 ;
    str1 = str2 ;
    str2 = temp ;
  }
  string str3 = "" ;
  int n1 = str1 . size ( ) ;
  int n2 = str2 . size ( ) ;
  int diff = n2 - n1 ;
  int carry = 0 ;
  for ( int i = n1 - 1 ;
  i >= 0 ;
  i -- ) {
    int sum = ( ( ( unsigned char ) str1 [ i ] ) - ( ( unsigned char ) str2 [ i + diff ] ) ) + carry ;
    str3 = str3 + to_string ( sum % 10 ) ;
    carry = sum / 10 ;
  }
  foriinrange ( n2 - n1 - 1 , - 1 , - 1 , - 1 ) {
    int sum = ( ( ( unsigned char ) str2 [ i ] ) - ( unsigned char ) str2 [ i + diff ] ) + carry ;
    str3 = str3 + to_string ( sum % 10 ) ;
    carry = sum / 10 ;
  }
  if ( ( carry ) && ( carry != 0 ) ) str3 = str3 + to_string ( carry + '0' ) ;
  str3 . erase ( str3 . begin ( ) , str3 . end ( ) ) ;
  returnstr3

int main() {
    int n_success = 0;
    vector<string> param0 {"G","48578","010","KkGp","48928969618416","0101011010","X","10073867","01110000000","k "};
    vector<string> param1 {"FcAiuKhw","5117561223135","00000","nSE","88497275","11","MomtbuxLRR","28","0110","aSSlhOYp"};
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
