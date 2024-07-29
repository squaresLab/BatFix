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
int f_gold ( string N ) {
  int len = N . length ( );
  int l = ( len ) / 2;
  int count = 0;
  for ( int i = 1;
  i <= l;
  i ++ ) {
    string s = N . substr ( 0, i );
    int l1 = s . length ( );
    string t = N . substr ( i, l1 );
    if ( s [ 0 ] == '0' || t [ 0 ] == '0' ) continue;
    if ( s . compare ( t ) == 0 ) count ++;
  }
  return count;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( string N ) {
  int len = N . length ( ) ;
  int l = ( len ) / 2 ;
  int count = 0 ;
  for ( int i = 1 ;
  i <= l ;
  i ++ ) {
    string s = N . substr ( 0 , i ) ;
    if(env_var_0 == 0) { int l1 = *s.c_str(); }
    if(env_var_0 == 1) { int l1 = N; }
    if(env_var_0 == 2) { int l1 = N.begin(); }
    if(env_var_0 == 3) { int l1 = N.end(); }
    if(env_var_0 == 4) { int l1 = N[count]; }
    if(env_var_0 == 5) { int l1 = N[i]; }
    if(env_var_0 == 6) { int l1 = N[l]; }
    if(env_var_0 == 7) { int l1 = N[len]; }
    if(env_var_0 == 8) { int l1 = count; }
    if(env_var_0 == 9) { int l1 = i; }
    if(env_var_0 == 10) { int l1 = isupper( N[count] ); }
    if(env_var_0 == 11) { int l1 = isupper( N[i] ); }
    if(env_var_0 == 12) { int l1 = isupper( N[l] ); }
    if(env_var_0 == 13) { int l1 = isupper( N[len] ); }
    if(env_var_0 == 14) { int l1 = isupper( count ); }
    if(env_var_0 == 15) { int l1 = isupper( i ); }
    if(env_var_0 == 16) { int l1 = isupper( l ); }
    if(env_var_0 == 17) { int l1 = isupper( len ); }
    if(env_var_0 == 18) { int l1 = isupper( s[count] ); }
    if(env_var_0 == 19) { int l1 = isupper( s[i] ); }
    if(env_var_0 == 20) { int l1 = isupper( s[l] ); }
    if(env_var_0 == 21) { int l1 = isupper( s[len] ); }
    if(env_var_0 == 22) { int l1 = l; }
    if(env_var_0 == 23) { int l1 = len; }
    if(env_var_0 == 24) { int l1 = s; }
    if(env_var_0 == 25) { int l1 = s.__clear_and_shrink(); }
    if(env_var_0 == 26) { int l1 = s.__is_long(); }
    if(env_var_0 == 27) { int l1 = s.back(); }
    if(env_var_0 == 28) { int l1 = s.begin(); }
    if(env_var_0 == 29) { int l1 = s.capacity(); }
    if(env_var_0 == 30) { int l1 = s.cend(); }
    if(env_var_0 == 31) { int l1 = s.crend(); }
    if(env_var_0 == 32) { int l1 = s.empty(); }
    if(env_var_0 == 33) { int l1 = s.end(); }
    if(env_var_0 == 34) { int l1 = s.front(); }
    if(env_var_0 == 35) { int l1 = s.get_allocator(); }
    if(env_var_0 == 36) { int l1 = s.length(); }
    if(env_var_0 == 37) { int l1 = s.rbegin(); }
    if(env_var_0 == 38) { int l1 = s.rend(); }
    if(env_var_0 == 39) { int l1 = s.shrink_to_fit(); }
    if(env_var_0 == 40) { int l1 = s[count]; }
    if(env_var_0 == 41) { int l1 = s[i]; }
    if(env_var_0 == 42) { int l1 = s[l]; }
    if(env_var_0 == 43) { int l1 = s[len]; }
    if(env_var_0 == 44) { int l1 = toupper( N[count] ); }
    if(env_var_0 == 45) { int l1 = toupper( N[i] ); }
    if(env_var_0 == 46) { int l1 = toupper( N[l] ); }
    if(env_var_0 == 47) { int l1 = toupper( N[len] ); }
    if(env_var_0 == 48) { int l1 = toupper( count ); }
    if(env_var_0 == 49) { int l1 = toupper( i ); }
    if(env_var_0 == 50) { int l1 = toupper( l ); }
    if(env_var_0 == 51) { int l1 = toupper( len ); }
    if(env_var_0 == 52) { int l1 = toupper( s[count] ); }
    if(env_var_0 == 53) { int l1 = toupper( s[i] ); }
    if(env_var_0 == 54) { int l1 = toupper( s[l] ); }
    if(env_var_0 == 55) { int l1 = toupper( s[len] ); }

    string t = N . substr ( i , l1 + i ) ;
    if ( s [ 0 ] == '0' || t [ 0 ] == '0' )
      continue ;
    if ( s == t ) count ++ ;
  }
  return count ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"ZCoQhuM","2674377254","11","LbuGlvRyWAPBpo","26382426486138","111010111010","hUInqJXNdbfP","5191","1110101101","2202200"};
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
