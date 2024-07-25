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
string f_gold ( string text, int s ) {
  string result = "";
  for ( int i = 0;
  i < text . length ( );
  i ++ ) {
    if ( isupper ( text [ i ] ) ) result += char ( int ( text [ i ] + s - 65 ) % 26 + 65 );
    else result += char ( int ( text [ i ] + s - 97 ) % 26 + 97 );
  }
  return result;
}


string f_filled ( string text , int s ) {
  string result ;
  for ( int i = 0 ;
  i < text . size ( ) ;
  i ++ ) {
    char c = text [ i ] ;
    if ( ( c < 'A' ) || ( c > 'Z' ) ) result += char ( ( ( unsigned char ) c + s - 65 ) % 26 + 65 ) ;
    else result += char ( ( ( unsigned char ) c + s - 97 ) % 26 + 97 ) ;
  }
  return result ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"LsvbpcviVPwq","35225904","010010","QnYd","2571694","101101011010","jb","928874","11","FbvbkMb"};
    vector<int> param1 {15,2,36,44,11,94,22,83,93,37};
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