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
int f_gold ( int S [ ], int n ) {
  bool found = false;
  sort ( S, S + n );
  for ( int i = n - 1;
  i >= 0;
  i -- ) {
    for ( int j = 0;
    j < n;
    j ++ ) {
      if ( i == j ) continue;
      for ( int k = j + 1;
      k < n;
      k ++ ) {
        if ( i == k ) continue;
        for ( int l = k + 1;
        l < n;
        l ++ ) {
          if ( i == l ) continue;
          if ( S [ i ] == S [ j ] + S [ k ] + S [ l ] ) {
            found = true;
            return S [ i ];
          }
        }
      }
    }
  }
  if ( found == false ) return INT_MIN;
}


int foo;
int f_filled(int S[], int n) {
    bool found = false;
    sort(S, S + n);
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }
            for (int k = j + 1; k < n; k++) {
                if (i == k) {
                    continue;
                }
                for (int l = k + 1; l < n; l++) {
                    if (i == l) {
                        continue;
                    }
                    if (S[i] == S[j] + S[k] + S[l]) {
                        found = true;
                        return S[i];
                    }
                }
            }
        }
    }
    if (found == false) {
        return -1;
    }
}


