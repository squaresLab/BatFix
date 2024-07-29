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
long long int f_gold ( int A [ ], int B [ ], int m, int n ) {
  long long int dp [ n + 1 ] [ m + 1 ];
  memset ( dp, 0, sizeof ( dp ) );
  for ( int i = 1;
  i <= n;
  i ++ ) for ( int j = i;
  j <= m;
  j ++ ) dp [ i ] [ j ] = max ( ( dp [ i - 1 ] [ j - 1 ] + ( A [ j - 1 ] * B [ i - 1 ] ) ), dp [ i ] [ j - 1 ] );
  return dp [ n ] [ m ];
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled(int A[], int B[], int m, int n) {
    int dp[n + 1][m + 1];
    for (int row : dp) {
        if(env_var_0 == 0) { isupper( A[m] ); }
        if(env_var_0 == 1) { isupper( A[n] ); }
        if(env_var_0 == 2) { isupper( A[row] ); }
        if(env_var_0 == 3) { isupper( B[m] ); }
        if(env_var_0 == 4) { isupper( B[n] ); }
        if(env_var_0 == 5) { isupper( B[row] ); }
        if(env_var_0 == 6) { isupper( dp[m] ); }
        if(env_var_0 == 7) { isupper( m ); }
        if(env_var_0 == 8) { isupper( n ); }
        if(env_var_0 == 9) { isupper( row ); }
        if(env_var_0 == 10) { std::max( A[m],A[m] ); }
        if(env_var_0 == 11) { std::max( A[m],A[n] ); }
        if(env_var_0 == 12) { std::max( A[m],A[row] ); }
        if(env_var_0 == 13) { std::max( A[m],B[m] ); }
        if(env_var_0 == 14) { std::max( A[m],B[n] ); }
        if(env_var_0 == 15) { std::max( A[m],B[row] ); }
        if(env_var_0 == 16) { std::max( A[m],dp[m] ); }
        if(env_var_0 == 17) { std::max( A[m],m ); }
        if(env_var_0 == 18) { std::max( A[m],n ); }
        if(env_var_0 == 19) { std::max( A[m],row ); }
        if(env_var_0 == 20) { std::max( A[n],A[m] ); }
        if(env_var_0 == 21) { std::max( A[n],A[n] ); }
        if(env_var_0 == 22) { std::max( A[n],A[row] ); }
        if(env_var_0 == 23) { std::max( A[n],B[m] ); }
        if(env_var_0 == 24) { std::max( A[n],B[n] ); }
        if(env_var_0 == 25) { std::max( A[n],B[row] ); }
        if(env_var_0 == 26) { std::max( A[n],dp[m] ); }
        if(env_var_0 == 27) { std::max( A[n],m ); }
        if(env_var_0 == 28) { std::max( A[n],n ); }
        if(env_var_0 == 29) { std::max( A[n],row ); }
        if(env_var_0 == 30) { std::max( A[row],A[m] ); }
        if(env_var_0 == 31) { std::max( A[row],A[n] ); }
        if(env_var_0 == 32) { std::max( A[row],A[row] ); }
        if(env_var_0 == 33) { std::max( A[row],B[m] ); }
        if(env_var_0 == 34) { std::max( A[row],B[n] ); }
        if(env_var_0 == 35) { std::max( A[row],B[row] ); }
        if(env_var_0 == 36) { std::max( A[row],dp[m] ); }
        if(env_var_0 == 37) { std::max( A[row],m ); }
        if(env_var_0 == 38) { std::max( A[row],n ); }
        if(env_var_0 == 39) { std::max( A[row],row ); }
        if(env_var_0 == 40) { std::max( B[m],A[m] ); }
        if(env_var_0 == 41) { std::max( B[m],A[n] ); }
        if(env_var_0 == 42) { std::max( B[m],A[row] ); }
        if(env_var_0 == 43) { std::max( B[m],B[m] ); }
        if(env_var_0 == 44) { std::max( B[m],B[n] ); }
        if(env_var_0 == 45) { std::max( B[m],B[row] ); }
        if(env_var_0 == 46) { std::max( B[m],dp[m] ); }
        if(env_var_0 == 47) { std::max( B[m],m ); }
        if(env_var_0 == 48) { std::max( B[m],n ); }
        if(env_var_0 == 49) { std::max( B[m],row ); }
        if(env_var_0 == 50) { std::max( B[n],A[m] ); }
        if(env_var_0 == 51) { std::max( B[n],A[n] ); }
        if(env_var_0 == 52) { std::max( B[n],A[row] ); }
        if(env_var_0 == 53) { std::max( B[n],B[m] ); }
        if(env_var_0 == 54) { std::max( B[n],B[n] ); }
        if(env_var_0 == 55) { std::max( B[n],B[row] ); }
        if(env_var_0 == 56) { std::max( B[n],dp[m] ); }
        if(env_var_0 == 57) { std::max( B[n],m ); }
        if(env_var_0 == 58) { std::max( B[n],n ); }
        if(env_var_0 == 59) { std::max( B[n],row ); }
        if(env_var_0 == 60) { std::max( B[row],A[m] ); }
        if(env_var_0 == 61) { std::max( B[row],A[n] ); }
        if(env_var_0 == 62) { std::max( B[row],A[row] ); }
        if(env_var_0 == 63) { std::max( B[row],B[m] ); }
        if(env_var_0 == 64) { std::max( B[row],B[n] ); }
        if(env_var_0 == 65) { std::max( B[row],B[row] ); }
        if(env_var_0 == 66) { std::max( B[row],dp[m] ); }
        if(env_var_0 == 67) { std::max( B[row],m ); }
        if(env_var_0 == 68) { std::max( B[row],n ); }
        if(env_var_0 == 69) { std::max( B[row],row ); }
        if(env_var_0 == 70) { std::max( dp[m],A[m] ); }
        if(env_var_0 == 71) { std::max( dp[m],A[n] ); }
        if(env_var_0 == 72) { std::max( dp[m],A[row] ); }
        if(env_var_0 == 73) { std::max( dp[m],B[m] ); }
        if(env_var_0 == 74) { std::max( dp[m],B[n] ); }
        if(env_var_0 == 75) { std::max( dp[m],B[row] ); }
        if(env_var_0 == 76) { std::max( dp[m],dp[m] ); }
        if(env_var_0 == 77) { std::max( dp[m],m ); }
        if(env_var_0 == 78) { std::max( dp[m],n ); }
        if(env_var_0 == 79) { std::max( dp[m],row ); }
        if(env_var_0 == 80) { std::max( m,A[m] ); }
        if(env_var_0 == 81) { std::max( m,A[n] ); }
        if(env_var_0 == 82) { std::max( m,A[row] ); }
        if(env_var_0 == 83) { std::max( m,B[m] ); }
        if(env_var_0 == 84) { std::max( m,B[n] ); }
        if(env_var_0 == 85) { std::max( m,B[row] ); }
        if(env_var_0 == 86) { std::max( m,dp[m] ); }
        if(env_var_0 == 87) { std::max( m,m ); }
        if(env_var_0 == 88) { std::max( m,n ); }
        if(env_var_0 == 89) { std::max( m,row ); }
        if(env_var_0 == 90) { std::max( n,A[m] ); }
        if(env_var_0 == 91) { std::max( n,A[n] ); }
        if(env_var_0 == 92) { std::max( n,A[row] ); }
        if(env_var_0 == 93) { std::max( n,B[m] ); }
        if(env_var_0 == 94) { std::max( n,B[n] ); }
        if(env_var_0 == 95) { std::max( n,B[row] ); }
        if(env_var_0 == 96) { std::max( n,dp[m] ); }
        if(env_var_0 == 97) { std::max( n,m ); }
        if(env_var_0 == 98) { std::max( n,n ); }
        if(env_var_0 == 99) { std::max( n,row ); }
        if(env_var_0 == 100) { std::max( row,A[m] ); }
        if(env_var_0 == 101) { std::max( row,A[n] ); }
        if(env_var_0 == 102) { std::max( row,A[row] ); }
        if(env_var_0 == 103) { std::max( row,B[m] ); }
        if(env_var_0 == 104) { std::max( row,B[n] ); }
        if(env_var_0 == 105) { std::max( row,B[row] ); }
        if(env_var_0 == 106) { std::max( row,dp[m] ); }
        if(env_var_0 == 107) { std::max( row,m ); }
        if(env_var_0 == 108) { std::max( row,n ); }
        if(env_var_0 == 109) { std::max( row,row ); }
        if(env_var_0 == 110) { std::min( A[m],A[m] ); }
        if(env_var_0 == 111) { std::min( A[m],A[n] ); }
        if(env_var_0 == 112) { std::min( A[m],A[row] ); }
        if(env_var_0 == 113) { std::min( A[m],B[m] ); }
        if(env_var_0 == 114) { std::min( A[m],B[n] ); }
        if(env_var_0 == 115) { std::min( A[m],B[row] ); }
        if(env_var_0 == 116) { std::min( A[m],dp[m] ); }
        if(env_var_0 == 117) { std::min( A[m],m ); }
        if(env_var_0 == 118) { std::min( A[m],n ); }
        if(env_var_0 == 119) { std::min( A[m],row ); }
        if(env_var_0 == 120) { std::min( A[n],A[m] ); }
        if(env_var_0 == 121) { std::min( A[n],A[n] ); }
        if(env_var_0 == 122) { std::min( A[n],A[row] ); }
        if(env_var_0 == 123) { std::min( A[n],B[m] ); }
        if(env_var_0 == 124) { std::min( A[n],B[n] ); }
        if(env_var_0 == 125) { std::min( A[n],B[row] ); }
        if(env_var_0 == 126) { std::min( A[n],dp[m] ); }
        if(env_var_0 == 127) { std::min( A[n],m ); }
        if(env_var_0 == 128) { std::min( A[n],n ); }
        if(env_var_0 == 129) { std::min( A[n],row ); }
        if(env_var_0 == 130) { std::min( A[row],A[m] ); }
        if(env_var_0 == 131) { std::min( A[row],A[n] ); }
        if(env_var_0 == 132) { std::min( A[row],A[row] ); }
        if(env_var_0 == 133) { std::min( A[row],B[m] ); }
        if(env_var_0 == 134) { std::min( A[row],B[n] ); }
        if(env_var_0 == 135) { std::min( A[row],B[row] ); }
        if(env_var_0 == 136) { std::min( A[row],dp[m] ); }
        if(env_var_0 == 137) { std::min( A[row],m ); }
        if(env_var_0 == 138) { std::min( A[row],n ); }
        if(env_var_0 == 139) { std::min( A[row],row ); }
        if(env_var_0 == 140) { std::min( B[m],A[m] ); }
        if(env_var_0 == 141) { std::min( B[m],A[n] ); }
        if(env_var_0 == 142) { std::min( B[m],A[row] ); }
        if(env_var_0 == 143) { std::min( B[m],B[m] ); }
        if(env_var_0 == 144) { std::min( B[m],B[n] ); }
        if(env_var_0 == 145) { std::min( B[m],B[row] ); }
        if(env_var_0 == 146) { std::min( B[m],dp[m] ); }
        if(env_var_0 == 147) { std::min( B[m],m ); }
        if(env_var_0 == 148) { std::min( B[m],n ); }
        if(env_var_0 == 149) { std::min( B[m],row ); }
        if(env_var_0 == 150) { std::min( B[n],A[m] ); }
        if(env_var_0 == 151) { std::min( B[n],A[n] ); }
        if(env_var_0 == 152) { std::min( B[n],A[row] ); }
        if(env_var_0 == 153) { std::min( B[n],B[m] ); }
        if(env_var_0 == 154) { std::min( B[n],B[n] ); }
        if(env_var_0 == 155) { std::min( B[n],B[row] ); }
        if(env_var_0 == 156) { std::min( B[n],dp[m] ); }
        if(env_var_0 == 157) { std::min( B[n],m ); }
        if(env_var_0 == 158) { std::min( B[n],n ); }
        if(env_var_0 == 159) { std::min( B[n],row ); }
        if(env_var_0 == 160) { std::min( B[row],A[m] ); }
        if(env_var_0 == 161) { std::min( B[row],A[n] ); }
        if(env_var_0 == 162) { std::min( B[row],A[row] ); }
        if(env_var_0 == 163) { std::min( B[row],B[m] ); }
        if(env_var_0 == 164) { std::min( B[row],B[n] ); }
        if(env_var_0 == 165) { std::min( B[row],B[row] ); }
        if(env_var_0 == 166) { std::min( B[row],dp[m] ); }
        if(env_var_0 == 167) { std::min( B[row],m ); }
        if(env_var_0 == 168) { std::min( B[row],n ); }
        if(env_var_0 == 169) { std::min( B[row],row ); }
        if(env_var_0 == 170) { std::min( dp[m],A[m] ); }
        if(env_var_0 == 171) { std::min( dp[m],A[n] ); }
        if(env_var_0 == 172) { std::min( dp[m],A[row] ); }
        if(env_var_0 == 173) { std::min( dp[m],B[m] ); }
        if(env_var_0 == 174) { std::min( dp[m],B[n] ); }
        if(env_var_0 == 175) { std::min( dp[m],B[row] ); }
        if(env_var_0 == 176) { std::min( dp[m],dp[m] ); }
        if(env_var_0 == 177) { std::min( dp[m],m ); }
        if(env_var_0 == 178) { std::min( dp[m],n ); }
        if(env_var_0 == 179) { std::min( dp[m],row ); }
        if(env_var_0 == 180) { std::min( m,A[m] ); }
        if(env_var_0 == 181) { std::min( m,A[n] ); }
        if(env_var_0 == 182) { std::min( m,A[row] ); }
        if(env_var_0 == 183) { std::min( m,B[m] ); }
        if(env_var_0 == 184) { std::min( m,B[n] ); }
        if(env_var_0 == 185) { std::min( m,B[row] ); }
        if(env_var_0 == 186) { std::min( m,dp[m] ); }
        if(env_var_0 == 187) { std::min( m,m ); }
        if(env_var_0 == 188) { std::min( m,n ); }
        if(env_var_0 == 189) { std::min( m,row ); }
        if(env_var_0 == 190) { std::min( n,A[m] ); }
        if(env_var_0 == 191) { std::min( n,A[n] ); }
        if(env_var_0 == 192) { std::min( n,A[row] ); }
        if(env_var_0 == 193) { std::min( n,B[m] ); }
        if(env_var_0 == 194) { std::min( n,B[n] ); }
        if(env_var_0 == 195) { std::min( n,B[row] ); }
        if(env_var_0 == 196) { std::min( n,dp[m] ); }
        if(env_var_0 == 197) { std::min( n,m ); }
        if(env_var_0 == 198) { std::min( n,n ); }
        if(env_var_0 == 199) { std::min( n,row ); }
        if(env_var_0 == 200) { std::min( row,A[m] ); }
        if(env_var_0 == 201) { std::min( row,A[n] ); }
        if(env_var_0 == 202) { std::min( row,A[row] ); }
        if(env_var_0 == 203) { std::min( row,B[m] ); }
        if(env_var_0 == 204) { std::min( row,B[n] ); }
        if(env_var_0 == 205) { std::min( row,B[row] ); }
        if(env_var_0 == 206) { std::min( row,dp[m] ); }
        if(env_var_0 == 207) { std::min( row,m ); }
        if(env_var_0 == 208) { std::min( row,n ); }
        if(env_var_0 == 209) { std::min( row,row ); }
        if(env_var_0 == 210) { toupper( A[m] ); }
        if(env_var_0 == 211) { toupper( A[n] ); }
        if(env_var_0 == 212) { toupper( A[row] ); }
        if(env_var_0 == 213) { toupper( B[m] ); }
        if(env_var_0 == 214) { toupper( B[n] ); }
        if(env_var_0 == 215) { toupper( B[row] ); }
        if(env_var_0 == 216) { toupper( dp[m] ); }
        if(env_var_0 == 217) { toupper( m ); }
        if(env_var_0 == 218) { toupper( n ); }
        if(env_var_0 == 219) { toupper( row ); }
        ;
    }
    for (int i = 1; i <= n; i++)
        for (int j = i; j <= m; j++)
            dp[i][j] = max((dp[i - 1][j - 1] + (A[j - 1] * B[i - 1])), dp[i][j - 1]);
    return dp[n][m];
}







int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{7,9,22,68},{24,40,98,58,-24,24,76,48,-92,-16,-46,-48,-70,88,66,2,44,36,34,34,46,90,-80,-24,-58,68,72,-20,-62,-40},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{32,15,41,41,4,42,22,33,33,11,68,5,41,80,39,15,36,75,41,11,25,40,50,19,39,12,75,28,52,20,63,5,27,53,19,62,98,72,10,90,74,93,52,81,91,65,90,93},{-94,-76,-68,-50,-28,-20,18,24,30,54,74,84,98},{1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,0,0,1,1,0,1,1,1,0,0,0,0,1,0,0,0,0,1,0,0,1,1,1,0,1,0},{14,27,43,49},{78,-26,-12,38,-90},{0,1,1,1},{12,69,57,7,52,14,15,83,67,57,15,86,81,43,1,64,45,68,30,23,14,70,13,51,23,33,98,68,24,43,12,82,46}};
    vector<vector<int>> param1 {{14,22,54,58},{30,-88,6,-26,-76,14,-80,-30,-58,76,40,-28,-54,38,-60,-60,88,-80,-22,90,50,-48,68,-26,26,-2,68,-16,88,-72},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{80,18,9,29,62,89,4,40,47,15,35,82,22,97,63,54,7,58,64,73,54,79,21,21,20,19,56,42,6,97,7,34,55,35,57,86,73,88,20,29,48,52,8,77,2,12,6,47},{-88,-80,-78,-68,-44,-38,42,50,62,68,70,80,92},{1,0,0,1,1,1,1,1,1,0,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,0,1,0,0,1,0,0,1,0,1,0,1,0,1},{51,59,76,83},{14,50,-6,-38,80},{0,0,0,1},{12,48,57,40,47,36,22,50,68,98,77,78,39,55,87,75,65,27,33,27,70,34,67,71,84,33,7,61,3,9,67,92,60}};
    vector<int> param2 {3,22,22,30,11,21,2,3,3,17};
    vector<int> param3 {2,22,19,25,8,33,2,2,2,32};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),&param1[i].front(),param2[i],param3[i]) == f_gold(&param0[i].front(),&param1[i].front(),param2[i],param3[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
