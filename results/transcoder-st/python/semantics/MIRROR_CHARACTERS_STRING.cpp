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
string f_gold ( string str, int n ) {
  string reverseAlphabet = "zyxwvutsrqponmlkjihgfedcba";
  int l = str . length ( );
  for ( int i = n;
  i < l;
  i ++ ) str [ i ] = reverseAlphabet [ str [ i ] - 'a' ];
  return str;
}


string f_filled ( string st , int n ) {
  string reverseAlphabet = "zyxwvutsrqponmlkjihgfedcba" ;
  int l = st . length ( ) ;
  string answer ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    answer = answer + st [ i ] ;
  }
  ;
  for ( int i = n ;
  i < l ;
  i ++ ) {
    answer = ( answer + reverseAlphabet [ ( char ) ( st [ i ] - 'a' ) ] ) ;
  }
  ;
  return answer ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"oncL","678","1000101101100","J","533740","000101","hZ","368838","011101","pMFMw"};
    vector<int> param1 {17,38,78,37,55,77,3,11,88,89};
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