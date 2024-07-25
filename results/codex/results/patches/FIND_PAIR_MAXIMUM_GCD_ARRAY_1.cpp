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
int f_gold ( int arr [ ], int n ) {
    int high = 0;
    for ( int i = 0;
          i < n;
          i ++ )
        high =  max ( high, arr [ i ] );
    int count[high + 1];
    memset(count, 0, sizeof count);
    for ( int i = 0;
          i < n;
          i ++ )
        count [ arr [ i ] ] ++;
    int counter = 0;
    for ( int i = high;
          i >= 1;
          i -- ) {
        int j = i;
        while ( j <= high ) {
            if ( count [ j ] > 0 )
                counter += count [ j ];
            j += i;
            if ( counter == 2 )
                return i;
        }
        counter = 0;
    }
    return 1;
  }
  

int foo;
int f_filled(int arr[], int n)
{
    int high = 0;
    for (int i = 0;
    i < n;
    i++)
        high = max(high, arr[i]);
    int count[high + 1];
    memset( count,  0, sizeof( count ));
    for (int i = 0;
    i < n;
    i++)
        count[arr[i]]++;
    int counter = 0;
    for (int i = high;
    i >= 1;
    i--)
    {
        int j = i;
        while (j <= high)
        {
            if (count[j] > 0)
                counter += count[j];
            j += i;
            if (counter == 2)
                return i;
        }
        counter = 0;
    }
    return 1;
}

int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{3,3,8,10,12,13,14,16,16,19,20,21,25,29,33,35,35,35,35,36,38,41,42,45,45,45,46,48,51,52,53,55,56,57,58,62,69,73,73,76,76,80,89,91,92,93,93,96},{-56,94,84,14,-6,84,84,-14,-60,-50,38,-20,66,-16},{0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1},{36,38,30,23,73,29,70,35,49,77,98,86},{-88,-88,-70,-70,-68,-68,-68,-64,-58,-50,-42,-36,-34,-32,-32,-30,-28,-24,-18,-8,0,0,10,10,14,14,28,30,32,32,40,40,48,54,56,60,62,72,76,78,86,88,98,98},{0,1,0,1,0,1,0,0},{3,5,5,10,13,25,27,32,35,36,36,38,40,45,53,53,58,59,68,79,79,79,87,98},{28,2,-10,70,50,6,32,-6,48,-28,18,86,-96,64,-92,14,44,-36,-32,92,6,36,76,-68,-22,34,-48,-54,28,-90,34},{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1},{86,82,57,48,75,17,60,3,91,51}};
    vector<int> param1 {29,8,13,7,34,6,12,17,16,8};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),param0[i].size()) == f_gold(&param0[i].front(),param0[i].size()))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}

