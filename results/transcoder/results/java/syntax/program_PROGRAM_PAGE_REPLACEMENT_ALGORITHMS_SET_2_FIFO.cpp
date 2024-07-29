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
#include <queue>

#include <fstream>
#include <iomanip>
#include <vector>
#include <queue>

#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <numeric>
#include <algorithm>
using namespace std;
int f_gold ( int pages [ ], int n, int capacity ) {
  unordered_set < int > s;
  queue < int > indexes;
  int page_faults = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( s . size ( ) < capacity ) {
      if ( s . find ( pages [ i ] ) == s . end ( ) ) {
        s . insert ( pages [ i ] );
        page_faults ++;
        indexes . push ( pages [ i ] );
      }
    }
    else {
      if ( s . find ( pages [ i ] ) == s . end ( ) ) {
        int val = indexes . front ( );
        indexes . pop ( );
        s . erase ( val );
        s . insert ( pages [ i ] );
        indexes . push ( pages [ i ] );
        page_faults ++;
      }
    }
  }
  return page_faults;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int pages [ ], int n, int capacity ) {
  set < int > s ;
  queue < int > indexes;
  int page_faults = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( s . size ( ) < capacity ) {
      if ( ! s . count ( pages [ i ] ) ) {
        s . insert ( pages [ i ] );
        page_faults ++;
        indexes . push ( pages [ i ] );
      }
    }
    else {
      if ( ! s . count ( pages [ i ] ) ) {
       auto val ;
        if(env_var_0 == 0) { val = capacity; }
        if(env_var_0 == 1) { val = i; }
        if(env_var_0 == 2) { val = indexes; }
        if(env_var_0 == 3) { val = indexes.back(); }
        if(env_var_0 == 4) { val = indexes.front(); }
        if(env_var_0 == 5) { val = indexes.pop(); }
        if(env_var_0 == 6) { val = isupper( capacity ); }
        if(env_var_0 == 7) { val = isupper( i ); }
        if(env_var_0 == 8) { val = isupper( n ); }
        if(env_var_0 == 9) { val = isupper( page_faults ); }
        if(env_var_0 == 10) { val = isupper( pages[capacity] ); }
        if(env_var_0 == 11) { val = isupper( pages[i] ); }
        if(env_var_0 == 12) { val = isupper( pages[n] ); }
        if(env_var_0 == 13) { val = isupper( pages[page_faults] ); }
        if(env_var_0 == 14) { val = isupper( pages[val] ); }
        if(env_var_0 == 15) { val = isupper( val ); }
        if(env_var_0 == 16) { val = n; }
        if(env_var_0 == 17) { val = page_faults; }
        if(env_var_0 == 18) { val = pages; }
        if(env_var_0 == 19) { val = pages+capacity; }
        if(env_var_0 == 20) { val = pages+i; }
        if(env_var_0 == 21) { val = pages+n; }
        if(env_var_0 == 22) { val = pages+page_faults; }
        if(env_var_0 == 23) { val = pages+val; }
        if(env_var_0 == 24) { val = pages[capacity]; }
        if(env_var_0 == 25) { val = pages[i]; }
        if(env_var_0 == 26) { val = pages[n]; }
        if(env_var_0 == 27) { val = pages[page_faults]; }
        if(env_var_0 == 28) { val = pages[val]; }
        if(env_var_0 == 29) { val = s; }
        if(env_var_0 == 30) { val = s.begin(); }
        if(env_var_0 == 31) { val = s.cend(); }
        if(env_var_0 == 32) { val = s.clear(); }
        if(env_var_0 == 33) { val = s.crend(); }
        if(env_var_0 == 34) { val = s.end(); }
        if(env_var_0 == 35) { val = s.key_comp(); }
        if(env_var_0 == 36) { val = s.rbegin(); }
        if(env_var_0 == 37) { val = s.rend(); }
        if(env_var_0 == 38) { val = s.size(); }
        if(env_var_0 == 39) { val = std::max(); }
        if(env_var_0 == 40) { val = toupper( capacity ); }
        if(env_var_0 == 41) { val = toupper( i ); }
        if(env_var_0 == 42) { val = toupper( n ); }
        if(env_var_0 == 43) { val = toupper( page_faults ); }
        if(env_var_0 == 44) { val = toupper( pages[capacity] ); }
        if(env_var_0 == 45) { val = toupper( pages[i] ); }
        if(env_var_0 == 46) { val = toupper( pages[n] ); }
        if(env_var_0 == 47) { val = toupper( pages[page_faults] ); }
        if(env_var_0 == 48) { val = toupper( pages[val] ); }
        if(env_var_0 == 49) { val = toupper( val ); }
        if(env_var_0 == 50) { val = toupper(); }
        if(env_var_0 == 51) { val = val; }

        indexes . pop ( );
        s . erase ( val );
        s . insert ( pages [ i ] );
        indexes . push ( pages [ i ] );
        page_faults ++;
      }
    }
  }
  return page_faults;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{4,4,6,7,8,11,13,18,26,35,36,37,45,46,46,47,48,49,51,52,53,56,61,74,75,77,80,83,85,86,87,90,93,95,97,98,99,99},{78,-48,50,-20,-6,58,-8,66,72,68,4,80,58,-26,-82,-56,92,76,20,82,-46,86,38,60,-62,-48,76,8,-66,-4,-98,-96,-52,92},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1},{98,78,94,42,62,83,7,62,60,94,16,28,50,15,18,71,86,47,62,89},{-82,-70,-68,-56,-50,-44,4,18,28,30,30,42,66,78,80},{1,1,0,0,1,1,0,0,1,1,1,1,1,0,0,1,1,1,1,1,1,0,1,1,1,0,0,0,0,0,1,1,1,1,0,0,0,0,1,0,0},{4,5,13,15,18,28,32,40,46,46,55,57,61,63,65,68,77,79,79,96},{-2,82,2,-74,-6,-24,54,-74,-98,8,-94,-60,-42,-38,36,-38,-58,-70,-28,-34,70,-6,-2,-76,-40,-4,0,-4,76,48,-34,-26,-48,-58,-88,-44,20,-22,78},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{4,90,28,71,69,45,92,63,72,76,47,85,36,59,88,46,28,19,50,31,63,13}};
    vector<int> param1 {36,33,19,15,9,25,17,31,26,15};
    vector<int> param2 {37,23,13,11,11,25,18,24,24,12};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),param1[i],param2[i]) == f_gold(&param0[i].front(),param1[i],param2[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
