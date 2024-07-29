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
#include <queue>
using namespace std;
int f_gold ( string s ) {
  int n = s . length ( );
  int auxArr [ n ];
    memset(auxArr, 0, sizeof auxArr);
    if ( s [ 0 ] == '1' ) auxArr [ 0 ] = 1;
    for ( int i = 1;
    i < n;
    i ++ ) {
      if ( s [ i ] == '1' ) auxArr [ i ] = auxArr [ i - 1 ] + 1;
      else auxArr [ i ] = auxArr [ i - 1 ];
    }
    int count = 0;
    for ( int i = n - 1;
    i >= 0;
    i -- ) if ( s [ i ] == '1' ) count += auxArr [ i ];
    return count;
  }


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( string s ) {
        int n = s.length ( ) ;
        int auxArr [ n ] ;
        memset( auxArr,  0, sizeof( auxArr ));
        int _res_key_if_0;
        if(env_var_0 == 0) { _res_key_if_0 = *s.data() == '1'; }
        if(env_var_0 == 1) { _res_key_if_0 = auxArr == '1'; }
        if(env_var_0 == 2) { _res_key_if_0 = auxArr[n] == '1'; }
        if(env_var_0 == 3) { _res_key_if_0 = isupper( auxArr ) == '1'; }
        if(env_var_0 == 4) { _res_key_if_0 = n == '1'; }
        if(env_var_0 == 5) { _res_key_if_0 = s == '1'; }
        if(env_var_0 == 6) { _res_key_if_0 = s.__invariants() == '1'; }
        if(env_var_0 == 7) { _res_key_if_0 = s.__is_long() == '1'; }
        if(env_var_0 == 8) { _res_key_if_0 = s.back() == '1'; }
        if(env_var_0 == 9) { _res_key_if_0 = s.begin() == '1'; }
        if(env_var_0 == 10) { _res_key_if_0 = s.cbegin() == '1'; }
        if(env_var_0 == 11) { _res_key_if_0 = s.clear() == '1'; }
        if(env_var_0 == 12) { _res_key_if_0 = s.crbegin() == '1'; }
        if(env_var_0 == 13) { _res_key_if_0 = s.end() == '1'; }
        if(env_var_0 == 14) { _res_key_if_0 = s.front() == '1'; }
        if(env_var_0 == 15) { _res_key_if_0 = s.max_size() == '1'; }
        if(env_var_0 == 16) { _res_key_if_0 = s.pop_back() == '1'; }
        if(env_var_0 == 17) { _res_key_if_0 = s.rbegin() == '1'; }
        if(env_var_0 == 18) { _res_key_if_0 = s.rend() == '1'; }
        if(env_var_0 == 19) { _res_key_if_0 = s.reserve() == '1'; }
        if(env_var_0 == 20) { _res_key_if_0 = s.size() == '1'; }
        if(env_var_0 == 21) { _res_key_if_0 = s[n] == '1'; }
        if(env_var_0 == 22) { _res_key_if_0 = toupper( auxArr ) == '1'; }
        if(env_var_0 == 23) { _res_key_if_0 = toupper( auxArr[n] ) == '1'; }
        if(env_var_0 == 24) { _res_key_if_0 = toupper( n ) == '1'; }
        if(env_var_0 == 25) { _res_key_if_0 = toupper( s[n] ) == '1'; }
        if ( _res_key_if_0 ) {
            auxArr [ 0 ] = 1 ;
        }
        for ( int i = 0 ; i < n ; i ++ ) {
            if ( s [ i ] == '1' ) {
                auxArr [ i ] = auxArr [ i - 1 ] + 1 ;
            } else {
                auxArr [ i ] = auxArr [ i - 1 ] ;
            }
        }
        int count = 0 ;
        for ( int i = n - 1 ; i >= 0 ; i -- ) {
            if ( s [ i ] == '1' ) {
                count += auxArr [ i ] ;
            }
        }
        return count ;
    }

int main() {
    int n_success = 0;
    vector<string> param0 {"OGiOkJF","517376","11","Ze","8763644247018","00111010001","HGwkBKUOVu","652","101000011110","kvdpG "};
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
