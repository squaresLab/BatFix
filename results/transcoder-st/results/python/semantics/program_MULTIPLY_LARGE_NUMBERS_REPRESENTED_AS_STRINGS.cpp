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
string f_filled ( string num1 , string num2 ) {
  if(env_var_0 == 0) { num1 = num1; }
  if(env_var_0 == 1) { num1 = num1.begin(); }
  if(env_var_0 == 2) { num1 = num1.end(); }
  if(env_var_0 == 3) { num1 = num2; }
  if(env_var_0 == 4) { num1 = num2.append( num1 ); }
  if(env_var_0 == 5) { num1 = num2.append( num2 ); }
  if(env_var_0 == 6) { num1 = num2.assign( num1 ); }
  if(env_var_0 == 7) { num1 = num2.assign( num2 ); }
  if(env_var_0 == 8) { num1 = num2.begin(); }
  if(env_var_0 == 9) { num1 = num2.compare( num1 ); }
  if(env_var_0 == 10) { num1 = num2.compare( num2 ); }
  if(env_var_0 == 11) { num1 = num2.end(); }
  if(env_var_0 == 12) { num1 = num2.swap( num1 ); }
  if(env_var_0 == 13) { num1 = num2.swap( num2 ); }
  if(env_var_0 == 14) { num1 = std::max(); }
  if(env_var_0 == 15) { num1.begin() = num1; }
  if(env_var_0 == 16) { num1.begin() = num1.begin(); }
  if(env_var_0 == 17) { num1.begin() = num1.end(); }
  if(env_var_0 == 18) { num1.begin() = num2; }
  if(env_var_0 == 19) { num1.begin() = num2.append( num1 ); }
  if(env_var_0 == 20) { num1.begin() = num2.append( num2 ); }
  if(env_var_0 == 21) { num1.begin() = num2.assign( num1 ); }
  if(env_var_0 == 22) { num1.begin() = num2.assign( num2 ); }
  if(env_var_0 == 23) { num1.begin() = num2.begin(); }
  if(env_var_0 == 24) { num1.begin() = num2.compare( num1 ); }
  if(env_var_0 == 25) { num1.begin() = num2.compare( num2 ); }
  if(env_var_0 == 26) { num1.begin() = num2.end(); }
  if(env_var_0 == 27) { num1.begin() = num2.swap( num1 ); }
  if(env_var_0 == 28) { num1.begin() = num2.swap( num2 ); }
  if(env_var_0 == 29) { num1.begin() = std::max(); }
  if(env_var_0 == 30) { num1.end() = num1; }
  if(env_var_0 == 31) { num1.end() = num1.begin(); }
  if(env_var_0 == 32) { num1.end() = num1.end(); }
  if(env_var_0 == 33) { num1.end() = num2; }
  if(env_var_0 == 34) { num1.end() = num2.append( num1 ); }
  if(env_var_0 == 35) { num1.end() = num2.append( num2 ); }
  if(env_var_0 == 36) { num1.end() = num2.assign( num1 ); }
  if(env_var_0 == 37) { num1.end() = num2.assign( num2 ); }
  if(env_var_0 == 38) { num1.end() = num2.begin(); }
  if(env_var_0 == 39) { num1.end() = num2.compare( num1 ); }
  if(env_var_0 == 40) { num1.end() = num2.compare( num2 ); }
  if(env_var_0 == 41) { num1.end() = num2.end(); }
  if(env_var_0 == 42) { num1.end() = num2.swap( num1 ); }
  if(env_var_0 == 43) { num1.end() = num2.swap( num2 ); }
  if(env_var_0 == 44) { num1.end() = std::max(); }
  if(env_var_0 == 45) { num2 = num1; }
  if(env_var_0 == 46) { num2 = num1.begin(); }
  if(env_var_0 == 47) { num2 = num1.end(); }
  if(env_var_0 == 48) { num2 = num2; }
  if(env_var_0 == 49) { num2 = num2.append( num1 ); }
  if(env_var_0 == 50) { num2 = num2.append( num2 ); }
  if(env_var_0 == 51) { num2 = num2.assign( num1 ); }
  if(env_var_0 == 52) { num2 = num2.assign( num2 ); }
  if(env_var_0 == 53) { num2 = num2.begin(); }
  if(env_var_0 == 54) { num2 = num2.compare( num1 ); }
  if(env_var_0 == 55) { num2 = num2.compare( num2 ); }
  if(env_var_0 == 56) { num2 = num2.end(); }
  if(env_var_0 == 57) { num2 = num2.swap( num1 ); }
  if(env_var_0 == 58) { num2 = num2.swap( num2 ); }
  if(env_var_0 == 59) { num2 = std::max(); }
  if(env_var_0 == 60) { num2.begin() = num1; }
  if(env_var_0 == 61) { num2.begin() = num1.begin(); }
  if(env_var_0 == 62) { num2.begin() = num1.end(); }
  if(env_var_0 == 63) { num2.begin() = num2; }
  if(env_var_0 == 64) { num2.begin() = num2.append( num1 ); }
  if(env_var_0 == 65) { num2.begin() = num2.append( num2 ); }
  if(env_var_0 == 66) { num2.begin() = num2.assign( num1 ); }
  if(env_var_0 == 67) { num2.begin() = num2.assign( num2 ); }
  if(env_var_0 == 68) { num2.begin() = num2.begin(); }
  if(env_var_0 == 69) { num2.begin() = num2.compare( num1 ); }
  if(env_var_0 == 70) { num2.begin() = num2.compare( num2 ); }
  if(env_var_0 == 71) { num2.begin() = num2.end(); }
  if(env_var_0 == 72) { num2.begin() = num2.swap( num1 ); }
  if(env_var_0 == 73) { num2.begin() = num2.swap( num2 ); }
  if(env_var_0 == 74) { num2.begin() = std::max(); }
  if(env_var_0 == 75) { num2.end() = num1; }
  if(env_var_0 == 76) { num2.end() = num1.begin(); }
  if(env_var_0 == 77) { num2.end() = num1.end(); }
  if(env_var_0 == 78) { num2.end() = num2; }
  if(env_var_0 == 79) { num2.end() = num2.append( num1 ); }
  if(env_var_0 == 80) { num2.end() = num2.append( num2 ); }
  if(env_var_0 == 81) { num2.end() = num2.assign( num1 ); }
  if(env_var_0 == 82) { num2.end() = num2.assign( num2 ); }
  if(env_var_0 == 83) { num2.end() = num2.begin(); }
  if(env_var_0 == 84) { num2.end() = num2.compare( num1 ); }
  if(env_var_0 == 85) { num2.end() = num2.compare( num2 ); }
  if(env_var_0 == 86) { num2.end() = num2.end(); }
  if(env_var_0 == 87) { num2.end() = num2.swap( num1 ); }
  if(env_var_0 == 88) { num2.end() = num2.swap( num2 ); }
  if(env_var_0 == 89) { num2.end() = std::max(); }
  
  int len2 = num2 . length ( ) ;
  if ( len1 == 0 || len2 == 0 ) return "0" ;
  vector < int > result ( len1 + len2 ) ;
  int i_n1 = 0 ;
  int i_n2 = 0 ;
  for ( int i = len1 - 1 ;
  i >= 0 ;
  i -- ) {
    int carry = 0 ;
    int n1 = ( int ) num1 [ i ] - 48 ;
    int i_n2 = 0 ;
    for ( int j = len2 - 1 ;
    j >= 0 ;
    j -- ) {
      int n2 = ( int ) num2 [ j ] - 48 ;
      int summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry ;
      carry = summ / 10 ;
      result [ i_n1 + i_n2 ] = summ % 10 ;
      i_n2 ++ ;
    }
    if ( ( carry > 0 ) && ( result [ i_n1 + i_n2 ] == 0 ) ) result [ i_n1 + i_n2 ] += carry ;
    i_n1 ++ ;
  }
  int i = result . size ( ) - 1 ;
  while ( ( i >= 0 ) && ( result [ i ] == 0 ) ) i -- ;
  if ( ( i == - 1 ) || ( i == len1 ) ) return "0" ;
  string s ;
  while ( ( i >= 0 ) && ( s . find ( result [ i ] + 48 ) != string :: npos ) ) {
    s += ( char ) ( result [ i ] + 48 ) ;
    i -- ;
  }
  return s ;
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

