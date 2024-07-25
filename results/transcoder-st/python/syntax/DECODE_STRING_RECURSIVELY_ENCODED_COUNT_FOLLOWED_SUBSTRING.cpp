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
string f_gold ( string str ) {
  stack < int > integerstack;
  stack < char > stringstack;
  string temp = "", result = "";
  for ( int i = 0;
  i < str . length ( );
  i ++ ) {
    int count = 0;
    if ( str [ i ] >= '0' && str [ i ] <= '9' ) {
      while ( str [ i ] >= '0' && str [ i ] <= '9' ) {
        count = count * 10 + str [ i ] - '0';
        i ++;
      }
      i --;
      integerstack . push ( count );
    }
    else if ( str [ i ] == ']' ) {
      temp = "";
      count = 0;
      if ( ! integerstack . empty ( ) ) {
        count = integerstack . top ( );
        integerstack . pop ( );
      }
      while ( ! stringstack . empty ( ) && stringstack . top ( ) != '[' ) {
        temp = stringstack . top ( ) + temp;
        stringstack . pop ( );
      }
      if ( ! stringstack . empty ( ) && stringstack . top ( ) == '[' ) stringstack . pop ( );
      for ( int j = 0;
      j < count;
      j ++ ) result = result + temp;
      for ( int j = 0;
      j < result . length ( );
      j ++ ) stringstack . push ( result [ j ] );
      result = "";
    }
    else if ( str [ i ] == '[' ) {
      if ( str [ i - 1 ] >= '0' && str [ i - 1 ] <= '9' ) stringstack . push ( str [ i ] );
      else {
        stringstack . push ( str [ i ] );
        integerstack . push ( 1 );
      }
    }
    else stringstack . push ( str [ i ] );
  }
  while ( ! stringstack . empty ( ) ) {
    result = stringstack . top ( ) + result;
    stringstack . pop ( );
  }
  return result;
}


string f_filled ( string Str ) {
  vector < int > integerstack ;
  vector < string > stringstack ;
  string temp ;
  string result ;
  for ( int i = 0 ;
  i < Str . length ( ) ;
  i ++ ) {
    int count = 0 ;
    if ( ( Str [ i ] >= '0' && Str [ i ] <= '9' ) || ( Str [ i ] >= '0' && Str [ i ] <= '9' ) ) {
      while ( ( Str [ i ] >= '0' && Str [ i ] <= '9' ) || ( Str [ i ] >= '0' && Str [ i ] <= '9' ) ) {
        count = count * 10 + ( Str [ i ] - '0' ) ;
        i ++ ;
      }
      i -- ;
      integerstack . push_back ( count ) ;
    }
    else if ( ( Str [ i ] == ']' ) || ( Str [ i ] == '[' ) ) {
      temp = "" ;
      int count = 0 ;
      if ( ( integerstack . size ( ) != 0 ) && ( integerstack . back ( ) != '[' ) ) {
        count = integerstack . back ( ) ;
        integerstack . pop_back ( ) ;
      }
      while ( ( stringstack . size ( ) != 0 ) && ( stringstack . back ( ) != '[' ) ) {
        temp = stringstack . back ( ) + temp ;
        stringstack . pop_back ( ) ;
      }
      if ( ( stringstack . size ( ) != 0 ) && ( stringstack . back ( ) == '[' ) ) stringstack . pop_back ( ) ;
      for ( int j = 0 ;
      j < count ;
      j ++ ) result = result + temp ;
      for ( int j = 0 ;
      j < result . length ( ) ;
      j ++ ) stringstack . push_back ( result [ j ] ) ;
      result = "" ;
    }
    else if ( ( Str [ i ] == '[' ) ) {
      if ( ( Str [ i - 1 ] >= '0' && Str [ i - 1 ] <= '9' ) || ( Str [ i ] >= '0' && Str [ i - 1 ] <= '9' ) ) stringstack . push_back ( Str [ i ] ) ;
      else {
        stringstack . push_back ( Str [ i ] ) ;
        integerstack . push_back ( 1 ) ;
      }
    }
    else stringstack . push_back ( Str [ i ] ) ;
  }
  while ( stringstack . size ( ) != 0 ) {
    result = stringstack . back ( ) + result ;
    stringstack . pop_back ( ) ;
  }
  return result ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"rpaBQkHqRaTb","9916267","000010100010","XfHXbWwaRd","750","0","K","0218044","10100010011","zR"};
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