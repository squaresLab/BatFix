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
int env_var_0 = atoi(getenv("env_var_0"));
string f_filled ( string s ) {
  int n = s . length ( ) ;
  ;
  int sub_count = ( n * ( n + 1 ) ) / 2 ;
  int arr [ sub_count ] ;
  int index = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 1 ;
    j < n - i + 1 ;
    j ++ ) {
      if(env_var_0 == 0) { *s.data(); }
      if(env_var_0 == 1) { arr; }
      if(env_var_0 == 2) { arr[i]; }
      if(env_var_0 == 3) { i; }
      if(env_var_0 == 4) { index; }
      if(env_var_0 == 5) { isupper( arr ); }
      if(env_var_0 == 6) { isupper( arr[i] ); }
      if(env_var_0 == 7) { isupper( i ); }
      if(env_var_0 == 8) { isupper( index ); }
      if(env_var_0 == 9) { isupper( j ); }
      if(env_var_0 == 10) { isupper( n ); }
      if(env_var_0 == 11) { isupper( s[i] ); }
      if(env_var_0 == 12) { isupper( s[index] ); }
      if(env_var_0 == 13) { isupper( s[j] ); }
      if(env_var_0 == 14) { isupper( s[n] ); }
      if(env_var_0 == 15) { isupper( s[sub_count] ); }
      if(env_var_0 == 16) { isupper( sub_count ); }
      if(env_var_0 == 17) { j; }
      if(env_var_0 == 18) { n; }
      if(env_var_0 == 19) { s; }
      if(env_var_0 == 20) { s.__invariants(); }
      if(env_var_0 == 21) { s.__is_long(); }
      if(env_var_0 == 22) { s.back(); }
      if(env_var_0 == 23) { s.begin(); }
      if(env_var_0 == 24) { s.cbegin(); }
      if(env_var_0 == 25) { s.clear(); }
      if(env_var_0 == 26) { s.crbegin(); }
      if(env_var_0 == 27) { s.end(); }
      if(env_var_0 == 28) { s.front(); }
      if(env_var_0 == 29) { s.max_size(); }
      if(env_var_0 == 30) { s.pop_back(); }
      if(env_var_0 == 31) { s.rbegin(); }
      if(env_var_0 == 32) { s.rend(); }
      if(env_var_0 == 33) { s.reserve(); }
      if(env_var_0 == 34) { s.size(); }
      if(env_var_0 == 35) { s[i]; }
      if(env_var_0 == 36) { s[index]; }
      if(env_var_0 == 37) { s[j]; }
      if(env_var_0 == 38) { s[n]; }
      if(env_var_0 == 39) { s[sub_count]; }
      if(env_var_0 == 40) { sub_count; }
      if(env_var_0 == 41) { toupper( arr ); }
      if(env_var_0 == 42) { toupper( arr[i] ); }
      if(env_var_0 == 43) { toupper( i ); }
      if(env_var_0 == 44) { toupper( index ); }
      if(env_var_0 == 45) { toupper( j ); }
      if(env_var_0 == 46) { toupper( n ); }
      if(env_var_0 == 47) { toupper( s[i] ); }
      if(env_var_0 == 48) { toupper( s[index] ); }
      if(env_var_0 == 49) { toupper( s[j] ); }
      if(env_var_0 == 50) { toupper( s[n] ); }
      if(env_var_0 == 51) { toupper( s[sub_count] ); }
      if(env_var_0 == 52) { toupper( sub_count ); }
       ;
      index ++ ;
    }
  }
  sort ( arr , arr + sub_count ) ;
  string res ;
  for ( int i = 0 ;
  i < sub_count ;
  i ++ ) res += arr [ i ] ;
  return res ;
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
