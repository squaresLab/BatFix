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
  int l = s . length ( );
  string s1 = "";
  bool isEven = ( l % 2 == 0 ) ? true : false;
  for ( int i = 0;
  i < l;
  i += 2 ) {
    if ( isEven ) {
      s1 = s [ i ] + s1;
      s1 += s [ i + 1 ];
    }
    else {
      if ( l - i > 1 ) {
        s1 += s [ i ];
        s1 = s [ i + 1 ] + s1;
      }
      else {
        s1 += s [ i ];
      }
    }
  }
  return s1;
}


int foo;
int i;
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
string f_filled ( string s ) {
  int l = s . length ( ) ;
  string s1 ;
  if ( ( l % 2 ) == 0 ) {
    bool isEven = true ;
    if ( ( l % 2 ) == 1 ) {
      s1 . resize ( l / 2 ) ;
      s1 [ 0 ] = ' ' ;
    }
    else {
      int _res_key_if_0;
      if(env_var_0 == 0) { _res_key_if_0 = isEven = true; }
      if(env_var_0 == 1) { _res_key_if_0 = l = true; }
      if(env_var_0 == 2) { _res_key_if_0 = s = true; }
      if(env_var_0 == 3) { _res_key_if_0 = s.begin() = true; }
      if(env_var_0 == 4) { _res_key_if_0 = s.end() = true; }
      if(env_var_0 == 5) { _res_key_if_0 = s1 = true; }
      if(env_var_0 == 6) { _res_key_if_0 = s1.begin() = true; }
      if(env_var_0 == 7) { _res_key_if_0 = s1.end() = true; }
      if(env_var_0 == 8) { _res_key_if_0 = s1[l] = true; }
      if(env_var_0 == 9) { _res_key_if_0 = s[l] = true; }
      if ( _res_key_if_0 ) {
        s1 . resize ( l / 2 ) ;
        s1 [ 0 ] = ' ' ;
        s1 [ 1 ] = ' ' ;
      }
      else {
       if(env_var_1 == 0) { isEven = true; }
        if(env_var_1 == 1) { l = true; }
        if(env_var_1 == 2) { s = true; }
        if(env_var_1 == 3) { s.begin() = true; }
        if(env_var_1 == 4) { s.end() = true; }
        if(env_var_1 == 5) { s1 = true; }
        if(env_var_1 == 6) { s1.begin() = true; }
        if(env_var_1 == 7) { s1.end() = true; }
        if(env_var_1 == 8) { s1[l] = true; }
        if(env_var_1 == 9) { s[l] = true; }
          ;
        s1 [ 1 ] = s [ i + 1 ] ;
      }
    }
  }
  return s1 ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {" EgvQCeqYpZtv","488540","0000101010111","syw","402355","0","wmHMlAtq","7962","111111","UbgRGDquop"};
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

