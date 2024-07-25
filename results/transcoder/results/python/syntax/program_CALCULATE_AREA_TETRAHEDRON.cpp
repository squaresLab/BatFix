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
double f_gold ( int side ) {
  double volume = ( pow ( side, 3 ) / ( 6 * sqrt ( 2 ) ) );
  return volume;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
inline int f_filled ( int side ) {
 auto volume ;
  if(env_var_0 == 0) {  = side ** 3 / (6 * isupper( side )); }
  if(env_var_0 == 1) {  = side ** 3 / (6 * isupper( volume )); }
  if(env_var_0 == 2) {  = side ** 3 / (6 * side); }
  if(env_var_0 == 3) {  = side ** 3 / (6 * std::max( side,side )); }
  if(env_var_0 == 4) {  = side ** 3 / (6 * std::max( side,volume )); }
  if(env_var_0 == 5) {  = side ** 3 / (6 * std::max( volume,side )); }
  if(env_var_0 == 6) {  = side ** 3 / (6 * std::max( volume,volume )); }
  if(env_var_0 == 7) {  = side ** 3 / (6 * std::min( side,side )); }
  if(env_var_0 == 8) {  = side ** 3 / (6 * std::min( side,volume )); }
  if(env_var_0 == 9) {  = side ** 3 / (6 * std::min( volume,side )); }
  if(env_var_0 == 10) {  = side ** 3 / (6 * std::min( volume,volume )); }
  if(env_var_0 == 11) {  = side ** 3 / (6 * toupper( side )); }
  if(env_var_0 == 12) {  = side ** 3 / (6 * toupper( volume )); }
  if(env_var_0 == 13) {  = side ** 3 / (6 * volume); }
  if(env_var_0 == 14) {  = volume ** 3 / (6 * isupper( side )); }
  if(env_var_0 == 15) {  = volume ** 3 / (6 * isupper( volume )); }
  if(env_var_0 == 16) {  = volume ** 3 / (6 * side); }
  if(env_var_0 == 17) {  = volume ** 3 / (6 * std::max( side,side )); }
  if(env_var_0 == 18) {  = volume ** 3 / (6 * std::max( side,volume )); }
  if(env_var_0 == 19) {  = volume ** 3 / (6 * std::max( volume,side )); }
  if(env_var_0 == 20) {  = volume ** 3 / (6 * std::max( volume,volume )); }
  if(env_var_0 == 21) {  = volume ** 3 / (6 * std::min( side,side )); }
  if(env_var_0 == 22) {  = volume ** 3 / (6 * std::min( side,volume )); }
  if(env_var_0 == 23) {  = volume ** 3 / (6 * std::min( volume,side )); }
  if(env_var_0 == 24) {  = volume ** 3 / (6 * std::min( volume,volume )); }
  if(env_var_0 == 25) {  = volume ** 3 / (6 * toupper( side )); }
  if(env_var_0 == 26) {  = volume ** 3 / (6 * toupper( volume )); }
  if(env_var_0 == 27) {  = volume ** 3 / (6 * volume); }
  if(env_var_0 == 28) { me = side ** 3 / (6 * isupper( side )); }
  if(env_var_0 == 29) { me = side ** 3 / (6 * isupper( volume )); }
  if(env_var_0 == 30) { me = side ** 3 / (6 * side); }
  if(env_var_0 == 31) { me = side ** 3 / (6 * std::max( side,side )); }
  if(env_var_0 == 32) { me = side ** 3 / (6 * std::max( side,volume )); }
  if(env_var_0 == 33) { me = side ** 3 / (6 * std::max( volume,side )); }
  if(env_var_0 == 34) { me = side ** 3 / (6 * std::max( volume,volume )); }
  if(env_var_0 == 35) { me = side ** 3 / (6 * std::min( side,side )); }
  if(env_var_0 == 36) { me = side ** 3 / (6 * std::min( side,volume )); }
  if(env_var_0 == 37) { me = side ** 3 / (6 * std::min( volume,side )); }
  if(env_var_0 == 38) { me = side ** 3 / (6 * std::min( volume,volume )); }
  if(env_var_0 == 39) { me = side ** 3 / (6 * toupper( side )); }
  if(env_var_0 == 40) { me = side ** 3 / (6 * toupper( volume )); }
  if(env_var_0 == 41) { me = side ** 3 / (6 * volume); }
  if(env_var_0 == 42) { me = volume ** 3 / (6 * isupper( side )); }
  if(env_var_0 == 43) { me = volume ** 3 / (6 * isupper( volume )); }
  if(env_var_0 == 44) { me = volume ** 3 / (6 * side); }
  if(env_var_0 == 45) { me = volume ** 3 / (6 * std::max( side,side )); }
  if(env_var_0 == 46) { me = volume ** 3 / (6 * std::max( side,volume )); }
  if(env_var_0 == 47) { me = volume ** 3 / (6 * std::max( volume,side )); }
  if(env_var_0 == 48) { me = volume ** 3 / (6 * std::max( volume,volume )); }
  if(env_var_0 == 49) { me = volume ** 3 / (6 * std::min( side,side )); }
  if(env_var_0 == 50) { me = volume ** 3 / (6 * std::min( side,volume )); }
  if(env_var_0 == 51) { me = volume ** 3 / (6 * std::min( volume,side )); }
  if(env_var_0 == 52) { me = volume ** 3 / (6 * std::min( volume,volume )); }
  if(env_var_0 == 53) { me = volume ** 3 / (6 * toupper( side )); }
  if(env_var_0 == 54) { me = volume ** 3 / (6 * toupper( volume )); }
  if(env_var_0 == 55) { me = volume ** 3 / (6 * volume); }
   
  return round ( volume ) ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {58,56,35,99,13,45,40,92,7,13};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(abs(1 - (0.0000001 + abs(f_gold(param0[i])) )/ (abs(f_filled(param0[i])) + 0.0000001)) < 0.001)
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}

