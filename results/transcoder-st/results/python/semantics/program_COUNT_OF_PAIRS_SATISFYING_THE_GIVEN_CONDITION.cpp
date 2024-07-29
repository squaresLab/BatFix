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
int f_gold ( int a, int b ) {
  string s = to_string ( b );
  int i;
  for ( i = 0;
  i < s . length ( );
  i ++ ) {
    if ( s [ i ] != '9' ) break;
  }
  int result;
  if ( i == s . length ( ) ) result = a * s . length ( );
  else result = a * ( s . length ( ) - 1 );
  return result;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int a , int b ) {
  string s = to_string ( b ) ;
  int i = 0 ;
  while ( i < ( s . length ( ) ) ) {
    int _res_key_if_0;
    if(env_var_0 == 0) { _res_key_if_0 = *s.data() != '9'; }
    if(env_var_0 == 1) { _res_key_if_0 = a != '9'; }
    if(env_var_0 == 2) { _res_key_if_0 = b != '9'; }
    if(env_var_0 == 3) { _res_key_if_0 = i != '9'; }
    if(env_var_0 == 4) { _res_key_if_0 = isupper( a ) != '9'; }
    if(env_var_0 == 5) { _res_key_if_0 = isupper( b ) != '9'; }
    if(env_var_0 == 6) { _res_key_if_0 = isupper( i ) != '9'; }
    if(env_var_0 == 7) { _res_key_if_0 = isupper( s[a] ) != '9'; }
    if(env_var_0 == 8) { _res_key_if_0 = isupper( s[b] ) != '9'; }
    if(env_var_0 == 9) { _res_key_if_0 = isupper( s[i] ) != '9'; }
    if(env_var_0 == 10) { _res_key_if_0 = s != '9'; }
    if(env_var_0 == 11) { _res_key_if_0 = s.__invariants() != '9'; }
    if(env_var_0 == 12) { _res_key_if_0 = s.__is_long() != '9'; }
    if(env_var_0 == 13) { _res_key_if_0 = s.back() != '9'; }
    if(env_var_0 == 14) { _res_key_if_0 = s.begin() != '9'; }
    if(env_var_0 == 15) { _res_key_if_0 = s.cbegin() != '9'; }
    if(env_var_0 == 16) { _res_key_if_0 = s.clear() != '9'; }
    if(env_var_0 == 17) { _res_key_if_0 = s.crbegin() != '9'; }
    if(env_var_0 == 18) { _res_key_if_0 = s.end() != '9'; }
    if(env_var_0 == 19) { _res_key_if_0 = s.front() != '9'; }
    if(env_var_0 == 20) { _res_key_if_0 = s.max_size() != '9'; }
    if(env_var_0 == 21) { _res_key_if_0 = s.pop_back() != '9'; }
    if(env_var_0 == 22) { _res_key_if_0 = s.rbegin() != '9'; }
    if(env_var_0 == 23) { _res_key_if_0 = s.rend() != '9'; }
    if(env_var_0 == 24) { _res_key_if_0 = s.reserve() != '9'; }
    if(env_var_0 == 25) { _res_key_if_0 = s.size() != '9'; }
    if(env_var_0 == 26) { _res_key_if_0 = s[a] != '9'; }
    if(env_var_0 == 27) { _res_key_if_0 = s[b] != '9'; }
    if(env_var_0 == 28) { _res_key_if_0 = s[i] != '9'; }
    if(env_var_0 == 29) { _res_key_if_0 = toupper( a ) != '9'; }
    if(env_var_0 == 30) { _res_key_if_0 = toupper( b ) != '9'; }
    if(env_var_0 == 31) { _res_key_if_0 = toupper( i ) != '9'; }
    if(env_var_0 == 32) { _res_key_if_0 = toupper( s[a] ) != '9'; }
    if(env_var_0 == 33) { _res_key_if_0 = toupper( s[b] ) != '9'; }
    if(env_var_0 == 34) { _res_key_if_0 = toupper( s[i] ) != '9'; }
    if ( _res_key_if_0 ) break ;
    i ++ ;
  }
  int result ;
  if ( ( i == s . length ( ) ) || ( i == s . length ( ) - 1 ) ) result = a * s . length ( ) ;
  else result = a * ( s . length ( ) - 1 ) ;
  return result ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {31,72,23,42,13,93,33,94,60,11};
    vector<int> param1 {91,85,49,32,7,5,32,76,60,26};
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
