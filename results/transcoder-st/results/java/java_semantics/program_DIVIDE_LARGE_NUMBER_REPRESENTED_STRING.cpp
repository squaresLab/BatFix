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
string f_gold ( string number, int divisor ) {
  string ans;
  int idx = 0;
  int temp = number [ idx ] - '0';
  while ( temp < divisor ) temp = temp * 10 + ( number [ ++ idx ] - '0' );
  while ( number . size ( ) > idx ) {
    ans += ( temp / divisor ) + '0';
    temp = ( temp % divisor ) * 10 + number [ ++ idx ] - '0';
  }
  if ( ans . length ( ) == 0 ) return "0";
  return ans;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
string f_filled ( string number , int divisor ) {
  string ans ;
  int idx = 0 ;
 std::string num ;
  if(env_var_0 == 0) { = *num.data(); }
  if(env_var_0 == 1) { = ans; }
  if(env_var_0 == 2) { = ans.begin(); }
  if(env_var_0 == 3) { = ans.end(); }
  if(env_var_0 == 4) { = ans[divisor]; }
  if(env_var_0 == 5) { = ans[idx]; }
  if(env_var_0 == 6) { = divisor; }
  if(env_var_0 == 7) { = idx; }
  if(env_var_0 == 8) { = isupper(); }
  if(env_var_0 == 9) { = num; }
  if(env_var_0 == 10) { = num.__invariants(); }
  if(env_var_0 == 11) { = num.__is_long(); }
  if(env_var_0 == 12) { = num.back(); }
  if(env_var_0 == 13) { = num.begin(); }
  if(env_var_0 == 14) { = num.capacity(); }
  if(env_var_0 == 15) { = num.cend(); }
  if(env_var_0 == 16) { = num.crend(); }
  if(env_var_0 == 17) { = num.empty(); }
  if(env_var_0 == 18) { = num.end(); }
  if(env_var_0 == 19) { = num.front(); }
  if(env_var_0 == 20) { = num.length(); }
  if(env_var_0 == 21) { = num.rbegin(); }
  if(env_var_0 == 22) { = num.rend(); }
  if(env_var_0 == 23) { = num.shrink_to_fit(); }
  if(env_var_0 == 24) { = num[divisor]; }
  if(env_var_0 == 25) { = num[idx]; }
  if(env_var_0 == 26) { = number; }
  if(env_var_0 == 27) { = number.begin(); }
  if(env_var_0 == 28) { = number.end(); }
  if(env_var_0 == 29) { = number[divisor]; }
  if(env_var_0 == 30) { = number[idx]; }
  if(env_var_0 == 31) { = toupper( ans[divisor] ); }
  if(env_var_0 == 32) { = toupper( ans[idx] ); }
  if(env_var_0 == 33) { = toupper( divisor ); }
  if(env_var_0 == 34) { = toupper( idx ); }
  if(env_var_0 == 35) { = toupper( num[divisor] ); }
  if(env_var_0 == 36) { = toupper( num[idx] ); }
  if(env_var_0 == 37) { = toupper( number[divisor] ); }
  if(env_var_0 == 38) { = toupper( number[idx] ); }
   
  int temp = num [ idx ] - '0' ;
  while ( temp < divisor ) {
    temp = temp * 10 + ( num [ ++ idx ] - '0' ) ;
  }
  idx += 1 ;
  while ( num . length ( ) > idx ) {
    ans += ( temp / divisor ) ;
    temp = ( temp % divisor ) * 10 + num [ idx ++ ] - '0' ;
  }
  if ( ans . length ( ) == 0 ) return "0" ;
  return ans ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"92733233370448","01","ENxfvIzh","00478135","11","O","813","011011"};
    vector<int> param1 {96,71,12,62,85,92,24,31,78,17};
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

