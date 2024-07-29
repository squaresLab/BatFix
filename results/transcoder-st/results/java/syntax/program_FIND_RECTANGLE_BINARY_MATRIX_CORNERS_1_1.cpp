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
#include <set>
using namespace std;
bool f_gold ( const vector < vector < int > > & matrix ) {
  int rows = matrix . size ( );
  if ( rows == 0 ) return false;
  int columns = matrix [ 0 ] . size ( );
  unordered_map < int, unordered_set < int > > table;
  for ( int i = 0;
  i < rows;
  ++ i ) {
    for ( int j = 0;
    j < columns - 1;
    ++ j ) {
      for ( int k = j + 1;
      k < columns;
      ++ k ) {
        if ( matrix [ i ] [ j ] == 1 && matrix [ i ] [ k ] == 1 ) {
          if ( table . find ( j ) != table . end ( ) && table [ j ] . find ( k ) != table [ j ] . end ( ) ) return true;
          table [ j ] . insert ( k );
        }
      }
    }
  }
  return false;
}


int foo;
int env_var_4 = atoi(getenv("env_var_4"));
int env_var_3 = atoi(getenv("env_var_3"));
int env_var_2 = atoi(getenv("env_var_2"));
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
bool f_filled ( vector < vector < int >> matrix ) {
  int rows = matrix . size ( ) ;
  if ( rows == 0 ) return false ;
  int columns = matrix [ 0 ] . size ( ) ;
  unordered_map < int , set < int >> table ;
  for ( int i = 0 ;
  i < rows ;
  i ++ ) {
    for ( int j = 0 ;
    j < columns - 1 ;
    j ++ ) {
      for ( int k = j + 1 ;
      k < columns ;
      k ++ ) {
        if ( matrix [ i ] [ j ] == 1 && matrix [ i ] [ k ] == 1 ) {
          int _res_key_if_0;
          if(env_var_0 == 0) { _res_key_if_0 = isupper( columns ); }
          if(env_var_0 == 1) { _res_key_if_0 = isupper( i ); }
          if(env_var_0 == 2) { _res_key_if_0 = isupper( j ); }
          if(env_var_0 == 3) { _res_key_if_0 = isupper( k ); }
          if(env_var_0 == 4) { _res_key_if_0 = isupper( rows ); }
          if(env_var_0 == 5) { _res_key_if_0 = matrix.at( columns ); }
          if(env_var_0 == 6) { _res_key_if_0 = matrix.at( i ); }
          if(env_var_0 == 7) { _res_key_if_0 = matrix.at( j ); }
          if(env_var_0 == 8) { _res_key_if_0 = matrix.at( k ); }
          if(env_var_0 == 9) { _res_key_if_0 = matrix.at( rows ); }
          if(env_var_0 == 10) { _res_key_if_0 = matrix.reserve( columns ); }
          if(env_var_0 == 11) { _res_key_if_0 = matrix.reserve( i ); }
          if(env_var_0 == 12) { _res_key_if_0 = matrix.reserve( j ); }
          if(env_var_0 == 13) { _res_key_if_0 = matrix.reserve( k ); }
          if(env_var_0 == 14) { _res_key_if_0 = matrix.reserve( rows ); }
          if(env_var_0 == 15) { _res_key_if_0 = matrix.resize( columns ); }
          if(env_var_0 == 16) { _res_key_if_0 = matrix.resize( i ); }
          if(env_var_0 == 17) { _res_key_if_0 = matrix.resize( j ); }
          if(env_var_0 == 18) { _res_key_if_0 = matrix.resize( k ); }
          if(env_var_0 == 19) { _res_key_if_0 = matrix.resize( rows ); }
          if(env_var_0 == 20) { _res_key_if_0 = matrix.swap( matrix ); }
          if(env_var_0 == 21) { _res_key_if_0 = std::max( columns,columns ); }
          if(env_var_0 == 22) { _res_key_if_0 = std::max( columns,i ); }
          if(env_var_0 == 23) { _res_key_if_0 = std::max( columns,j ); }
          if(env_var_0 == 24) { _res_key_if_0 = std::max( columns,k ); }
          if(env_var_0 == 25) { _res_key_if_0 = std::max( columns,rows ); }
          if(env_var_0 == 26) { _res_key_if_0 = std::max( i,columns ); }
          if(env_var_0 == 27) { _res_key_if_0 = std::max( i,i ); }
          if(env_var_0 == 28) { _res_key_if_0 = std::max( i,j ); }
          if(env_var_0 == 29) { _res_key_if_0 = std::max( i,k ); }
          if(env_var_0 == 30) { _res_key_if_0 = std::max( i,rows ); }
          if(env_var_0 == 31) { _res_key_if_0 = std::max( j,columns ); }
          if(env_var_0 == 32) { _res_key_if_0 = std::max( j,i ); }
          if(env_var_0 == 33) { _res_key_if_0 = std::max( j,j ); }
          if(env_var_0 == 34) { _res_key_if_0 = std::max( j,k ); }
          if(env_var_0 == 35) { _res_key_if_0 = std::max( j,rows ); }
          if(env_var_0 == 36) { _res_key_if_0 = std::max( k,columns ); }
          if(env_var_0 == 37) { _res_key_if_0 = std::max( k,i ); }
          if(env_var_0 == 38) { _res_key_if_0 = std::max( k,j ); }
          if(env_var_0 == 39) { _res_key_if_0 = std::max( k,k ); }
          if(env_var_0 == 40) { _res_key_if_0 = std::max( k,rows ); }
          if(env_var_0 == 41) { _res_key_if_0 = std::max( rows,columns ); }
          if(env_var_0 == 42) { _res_key_if_0 = std::max( rows,i ); }
          if(env_var_0 == 43) { _res_key_if_0 = std::max( rows,j ); }
          if(env_var_0 == 44) { _res_key_if_0 = std::max( rows,k ); }
          if(env_var_0 == 45) { _res_key_if_0 = std::max( rows,rows ); }
          if(env_var_0 == 46) { _res_key_if_0 = std::min( columns,columns ); }
          if(env_var_0 == 47) { _res_key_if_0 = std::min( columns,i ); }
          if(env_var_0 == 48) { _res_key_if_0 = std::min( columns,j ); }
          if(env_var_0 == 49) { _res_key_if_0 = std::min( columns,k ); }
          if(env_var_0 == 50) { _res_key_if_0 = std::min( columns,rows ); }
          if(env_var_0 == 51) { _res_key_if_0 = std::min( i,columns ); }
          if(env_var_0 == 52) { _res_key_if_0 = std::min( i,i ); }
          if(env_var_0 == 53) { _res_key_if_0 = std::min( i,j ); }
          if(env_var_0 == 54) { _res_key_if_0 = std::min( i,k ); }
          if(env_var_0 == 55) { _res_key_if_0 = std::min( i,rows ); }
          if(env_var_0 == 56) { _res_key_if_0 = std::min( j,columns ); }
          if(env_var_0 == 57) { _res_key_if_0 = std::min( j,i ); }
          if(env_var_0 == 58) { _res_key_if_0 = std::min( j,j ); }
          if(env_var_0 == 59) { _res_key_if_0 = std::min( j,k ); }
          if(env_var_0 == 60) { _res_key_if_0 = std::min( j,rows ); }
          if(env_var_0 == 61) { _res_key_if_0 = std::min( k,columns ); }
          if(env_var_0 == 62) { _res_key_if_0 = std::min( k,i ); }
          if(env_var_0 == 63) { _res_key_if_0 = std::min( k,j ); }
          if(env_var_0 == 64) { _res_key_if_0 = std::min( k,k ); }
          if(env_var_0 == 65) { _res_key_if_0 = std::min( k,rows ); }
          if(env_var_0 == 66) { _res_key_if_0 = std::min( rows,columns ); }
          if(env_var_0 == 67) { _res_key_if_0 = std::min( rows,i ); }
          if(env_var_0 == 68) { _res_key_if_0 = std::min( rows,j ); }
          if(env_var_0 == 69) { _res_key_if_0 = std::min( rows,k ); }
          if(env_var_0 == 70) { _res_key_if_0 = std::min( rows,rows ); }
          if(env_var_0 == 71) { _res_key_if_0 = table.at( columns ); }
          if(env_var_0 == 72) { _res_key_if_0 = table.at( i ); }
          if(env_var_0 == 73) { _res_key_if_0 = table.at( j ); }
          if(env_var_0 == 74) { _res_key_if_0 = table.at( k ); }
          if(env_var_0 == 75) { _res_key_if_0 = table.at( rows ); }
          if(env_var_0 == 76) { _res_key_if_0 = table.begin( columns ); }
          if(env_var_0 == 77) { _res_key_if_0 = table.begin( i ); }
          if(env_var_0 == 78) { _res_key_if_0 = table.begin( j ); }
          if(env_var_0 == 79) { _res_key_if_0 = table.begin( k ); }
          if(env_var_0 == 80) { _res_key_if_0 = table.begin( rows ); }
          if(env_var_0 == 81) { _res_key_if_0 = table.bucket( columns ); }
          if(env_var_0 == 82) { _res_key_if_0 = table.bucket( i ); }
          if(env_var_0 == 83) { _res_key_if_0 = table.bucket( j ); }
          if(env_var_0 == 84) { _res_key_if_0 = table.bucket( k ); }
          if(env_var_0 == 85) { _res_key_if_0 = table.bucket( rows ); }
          if(env_var_0 == 86) { _res_key_if_0 = table.bucket_size( columns ); }
          if(env_var_0 == 87) { _res_key_if_0 = table.bucket_size( i ); }
          if(env_var_0 == 88) { _res_key_if_0 = table.bucket_size( j ); }
          if(env_var_0 == 89) { _res_key_if_0 = table.bucket_size( k ); }
          if(env_var_0 == 90) { _res_key_if_0 = table.bucket_size( rows ); }
          if(env_var_0 == 91) { _res_key_if_0 = table.cbegin( columns ); }
          if(env_var_0 == 92) { _res_key_if_0 = table.cbegin( i ); }
          if(env_var_0 == 93) { _res_key_if_0 = table.cbegin( j ); }
          if(env_var_0 == 94) { _res_key_if_0 = table.cbegin( k ); }
          if(env_var_0 == 95) { _res_key_if_0 = table.cbegin( rows ); }
          if(env_var_0 == 96) { _res_key_if_0 = table.cend( columns ); }
          if(env_var_0 == 97) { _res_key_if_0 = table.cend( i ); }
          if(env_var_0 == 98) { _res_key_if_0 = table.cend( j ); }
          if(env_var_0 == 99) { _res_key_if_0 = table.cend( k ); }
          if(env_var_0 == 100) { _res_key_if_0 = table.cend( rows ); }
          if(env_var_0 == 101) { _res_key_if_0 = table.count( columns ); }
          if(env_var_0 == 102) { _res_key_if_0 = table.count( i ); }
          if(env_var_0 == 103) { _res_key_if_0 = table.count( j ); }
          if(env_var_0 == 104) { _res_key_if_0 = table.count( k ); }
          if(env_var_0 == 105) { _res_key_if_0 = table.count( rows ); }
          if(env_var_0 == 106) { _res_key_if_0 = table.end( columns ); }
          if(env_var_0 == 107) { _res_key_if_0 = table.end( i ); }
          if(env_var_0 == 108) { _res_key_if_0 = table.end( j ); }
          if(env_var_0 == 109) { _res_key_if_0 = table.end( k ); }
          if(env_var_0 == 110) { _res_key_if_0 = table.end( rows ); }
          if(env_var_0 == 111) { _res_key_if_0 = table.equal_range( columns ); }
          if(env_var_0 == 112) { _res_key_if_0 = table.equal_range( i ); }
          if(env_var_0 == 113) { _res_key_if_0 = table.equal_range( j ); }
          if(env_var_0 == 114) { _res_key_if_0 = table.equal_range( k ); }
          if(env_var_0 == 115) { _res_key_if_0 = table.equal_range( rows ); }
          if(env_var_0 == 116) { _res_key_if_0 = table.erase( columns ); }
          if(env_var_0 == 117) { _res_key_if_0 = table.erase( i ); }
          if(env_var_0 == 118) { _res_key_if_0 = table.erase( j ); }
          if(env_var_0 == 119) { _res_key_if_0 = table.erase( k ); }
          if(env_var_0 == 120) { _res_key_if_0 = table.erase( rows ); }
          if(env_var_0 == 121) { _res_key_if_0 = table.find( columns ); }
          if(env_var_0 == 122) { _res_key_if_0 = table.find( i ); }
          if(env_var_0 == 123) { _res_key_if_0 = table.find( j ); }
          if(env_var_0 == 124) { _res_key_if_0 = table.find( k ); }
          if(env_var_0 == 125) { _res_key_if_0 = table.find( rows ); }
          if(env_var_0 == 126) { _res_key_if_0 = table.max_load_factor( columns ); }
          if(env_var_0 == 127) { _res_key_if_0 = table.max_load_factor( i ); }
          if(env_var_0 == 128) { _res_key_if_0 = table.max_load_factor( j ); }
          if(env_var_0 == 129) { _res_key_if_0 = table.max_load_factor( k ); }
          if(env_var_0 == 130) { _res_key_if_0 = table.max_load_factor( rows ); }
          if(env_var_0 == 131) { _res_key_if_0 = table.rehash( columns ); }
          if(env_var_0 == 132) { _res_key_if_0 = table.rehash( i ); }
          if(env_var_0 == 133) { _res_key_if_0 = table.rehash( j ); }
          if(env_var_0 == 134) { _res_key_if_0 = table.rehash( k ); }
          if(env_var_0 == 135) { _res_key_if_0 = table.rehash( rows ); }
          if(env_var_0 == 136) { _res_key_if_0 = table.reserve( columns ); }
          if(env_var_0 == 137) { _res_key_if_0 = table.reserve( i ); }
          if(env_var_0 == 138) { _res_key_if_0 = table.reserve( j ); }
          if(env_var_0 == 139) { _res_key_if_0 = table.reserve( k ); }
          if(env_var_0 == 140) { _res_key_if_0 = table.reserve( rows ); }
          if(env_var_0 == 141) { _res_key_if_0 = table.swap( table ); }
          if(env_var_0 == 142) { _res_key_if_0 = toupper( columns ); }
          if(env_var_0 == 143) { _res_key_if_0 = toupper( i ); }
          if(env_var_0 == 144) { _res_key_if_0 = toupper( j ); }
          if(env_var_0 == 145) { _res_key_if_0 = toupper( k ); }
          if(env_var_0 == 146) { _res_key_if_0 = toupper( rows ); }
          if(env_var_0 == 147) { _res_key_if_0 = toupper(); }
          if ( _res_key_if_0 ) return true ;
          int _res_key_if_1;
          if(env_var_1 == 0) { _res_key_if_1 = isupper( columns ); }
          if(env_var_1 == 1) { _res_key_if_1 = isupper( i ); }
          if(env_var_1 == 2) { _res_key_if_1 = isupper( j ); }
          if(env_var_1 == 3) { _res_key_if_1 = isupper( k ); }
          if(env_var_1 == 4) { _res_key_if_1 = isupper( rows ); }
          if(env_var_1 == 5) { _res_key_if_1 = matrix.at( columns ); }
          if(env_var_1 == 6) { _res_key_if_1 = matrix.at( i ); }
          if(env_var_1 == 7) { _res_key_if_1 = matrix.at( j ); }
          if(env_var_1 == 8) { _res_key_if_1 = matrix.at( k ); }
          if(env_var_1 == 9) { _res_key_if_1 = matrix.at( rows ); }
          if(env_var_1 == 10) { _res_key_if_1 = matrix.reserve( columns ); }
          if(env_var_1 == 11) { _res_key_if_1 = matrix.reserve( i ); }
          if(env_var_1 == 12) { _res_key_if_1 = matrix.reserve( j ); }
          if(env_var_1 == 13) { _res_key_if_1 = matrix.reserve( k ); }
          if(env_var_1 == 14) { _res_key_if_1 = matrix.reserve( rows ); }
          if(env_var_1 == 15) { _res_key_if_1 = matrix.resize( columns ); }
          if(env_var_1 == 16) { _res_key_if_1 = matrix.resize( i ); }
          if(env_var_1 == 17) { _res_key_if_1 = matrix.resize( j ); }
          if(env_var_1 == 18) { _res_key_if_1 = matrix.resize( k ); }
          if(env_var_1 == 19) { _res_key_if_1 = matrix.resize( rows ); }
          if(env_var_1 == 20) { _res_key_if_1 = matrix.swap( matrix ); }
          if(env_var_1 == 21) { _res_key_if_1 = std::max( columns,columns ); }
          if(env_var_1 == 22) { _res_key_if_1 = std::max( columns,i ); }
          if(env_var_1 == 23) { _res_key_if_1 = std::max( columns,j ); }
          if(env_var_1 == 24) { _res_key_if_1 = std::max( columns,k ); }
          if(env_var_1 == 25) { _res_key_if_1 = std::max( columns,rows ); }
          if(env_var_1 == 26) { _res_key_if_1 = std::max( i,columns ); }
          if(env_var_1 == 27) { _res_key_if_1 = std::max( i,i ); }
          if(env_var_1 == 28) { _res_key_if_1 = std::max( i,j ); }
          if(env_var_1 == 29) { _res_key_if_1 = std::max( i,k ); }
          if(env_var_1 == 30) { _res_key_if_1 = std::max( i,rows ); }
          if(env_var_1 == 31) { _res_key_if_1 = std::max( j,columns ); }
          if(env_var_1 == 32) { _res_key_if_1 = std::max( j,i ); }
          if(env_var_1 == 33) { _res_key_if_1 = std::max( j,j ); }
          if(env_var_1 == 34) { _res_key_if_1 = std::max( j,k ); }
          if(env_var_1 == 35) { _res_key_if_1 = std::max( j,rows ); }
          if(env_var_1 == 36) { _res_key_if_1 = std::max( k,columns ); }
          if(env_var_1 == 37) { _res_key_if_1 = std::max( k,i ); }
          if(env_var_1 == 38) { _res_key_if_1 = std::max( k,j ); }
          if(env_var_1 == 39) { _res_key_if_1 = std::max( k,k ); }
          if(env_var_1 == 40) { _res_key_if_1 = std::max( k,rows ); }
          if(env_var_1 == 41) { _res_key_if_1 = std::max( rows,columns ); }
          if(env_var_1 == 42) { _res_key_if_1 = std::max( rows,i ); }
          if(env_var_1 == 43) { _res_key_if_1 = std::max( rows,j ); }
          if(env_var_1 == 44) { _res_key_if_1 = std::max( rows,k ); }
          if(env_var_1 == 45) { _res_key_if_1 = std::max( rows,rows ); }
          if(env_var_1 == 46) { _res_key_if_1 = std::min( columns,columns ); }
          if(env_var_1 == 47) { _res_key_if_1 = std::min( columns,i ); }
          if(env_var_1 == 48) { _res_key_if_1 = std::min( columns,j ); }
          if(env_var_1 == 49) { _res_key_if_1 = std::min( columns,k ); }
          if(env_var_1 == 50) { _res_key_if_1 = std::min( columns,rows ); }
          if(env_var_1 == 51) { _res_key_if_1 = std::min( i,columns ); }
          if(env_var_1 == 52) { _res_key_if_1 = std::min( i,i ); }
          if(env_var_1 == 53) { _res_key_if_1 = std::min( i,j ); }
          if(env_var_1 == 54) { _res_key_if_1 = std::min( i,k ); }
          if(env_var_1 == 55) { _res_key_if_1 = std::min( i,rows ); }
          if(env_var_1 == 56) { _res_key_if_1 = std::min( j,columns ); }
          if(env_var_1 == 57) { _res_key_if_1 = std::min( j,i ); }
          if(env_var_1 == 58) { _res_key_if_1 = std::min( j,j ); }
          if(env_var_1 == 59) { _res_key_if_1 = std::min( j,k ); }
          if(env_var_1 == 60) { _res_key_if_1 = std::min( j,rows ); }
          if(env_var_1 == 61) { _res_key_if_1 = std::min( k,columns ); }
          if(env_var_1 == 62) { _res_key_if_1 = std::min( k,i ); }
          if(env_var_1 == 63) { _res_key_if_1 = std::min( k,j ); }
          if(env_var_1 == 64) { _res_key_if_1 = std::min( k,k ); }
          if(env_var_1 == 65) { _res_key_if_1 = std::min( k,rows ); }
          if(env_var_1 == 66) { _res_key_if_1 = std::min( rows,columns ); }
          if(env_var_1 == 67) { _res_key_if_1 = std::min( rows,i ); }
          if(env_var_1 == 68) { _res_key_if_1 = std::min( rows,j ); }
          if(env_var_1 == 69) { _res_key_if_1 = std::min( rows,k ); }
          if(env_var_1 == 70) { _res_key_if_1 = std::min( rows,rows ); }
          if(env_var_1 == 71) { _res_key_if_1 = table.at( columns ); }
          if(env_var_1 == 72) { _res_key_if_1 = table.at( i ); }
          if(env_var_1 == 73) { _res_key_if_1 = table.at( j ); }
          if(env_var_1 == 74) { _res_key_if_1 = table.at( k ); }
          if(env_var_1 == 75) { _res_key_if_1 = table.at( rows ); }
          if(env_var_1 == 76) { _res_key_if_1 = table.begin( columns ); }
          if(env_var_1 == 77) { _res_key_if_1 = table.begin( i ); }
          if(env_var_1 == 78) { _res_key_if_1 = table.begin( j ); }
          if(env_var_1 == 79) { _res_key_if_1 = table.begin( k ); }
          if(env_var_1 == 80) { _res_key_if_1 = table.begin( rows ); }
          if(env_var_1 == 81) { _res_key_if_1 = table.bucket( columns ); }
          if(env_var_1 == 82) { _res_key_if_1 = table.bucket( i ); }
          if(env_var_1 == 83) { _res_key_if_1 = table.bucket( j ); }
          if(env_var_1 == 84) { _res_key_if_1 = table.bucket( k ); }
          if(env_var_1 == 85) { _res_key_if_1 = table.bucket( rows ); }
          if(env_var_1 == 86) { _res_key_if_1 = table.bucket_size( columns ); }
          if(env_var_1 == 87) { _res_key_if_1 = table.bucket_size( i ); }
          if(env_var_1 == 88) { _res_key_if_1 = table.bucket_size( j ); }
          if(env_var_1 == 89) { _res_key_if_1 = table.bucket_size( k ); }
          if(env_var_1 == 90) { _res_key_if_1 = table.bucket_size( rows ); }
          if(env_var_1 == 91) { _res_key_if_1 = table.cbegin( columns ); }
          if(env_var_1 == 92) { _res_key_if_1 = table.cbegin( i ); }
          if(env_var_1 == 93) { _res_key_if_1 = table.cbegin( j ); }
          if(env_var_1 == 94) { _res_key_if_1 = table.cbegin( k ); }
          if(env_var_1 == 95) { _res_key_if_1 = table.cbegin( rows ); }
          if(env_var_1 == 96) { _res_key_if_1 = table.cend( columns ); }
          if(env_var_1 == 97) { _res_key_if_1 = table.cend( i ); }
          if(env_var_1 == 98) { _res_key_if_1 = table.cend( j ); }
          if(env_var_1 == 99) { _res_key_if_1 = table.cend( k ); }
          if(env_var_1 == 100) { _res_key_if_1 = table.cend( rows ); }
          if(env_var_1 == 101) { _res_key_if_1 = table.count( columns ); }
          if(env_var_1 == 102) { _res_key_if_1 = table.count( i ); }
          if(env_var_1 == 103) { _res_key_if_1 = table.count( j ); }
          if(env_var_1 == 104) { _res_key_if_1 = table.count( k ); }
          if(env_var_1 == 105) { _res_key_if_1 = table.count( rows ); }
          if(env_var_1 == 106) { _res_key_if_1 = table.end( columns ); }
          if(env_var_1 == 107) { _res_key_if_1 = table.end( i ); }
          if(env_var_1 == 108) { _res_key_if_1 = table.end( j ); }
          if(env_var_1 == 109) { _res_key_if_1 = table.end( k ); }
          if(env_var_1 == 110) { _res_key_if_1 = table.end( rows ); }
          if(env_var_1 == 111) { _res_key_if_1 = table.equal_range( columns ); }
          if(env_var_1 == 112) { _res_key_if_1 = table.equal_range( i ); }
          if(env_var_1 == 113) { _res_key_if_1 = table.equal_range( j ); }
          if(env_var_1 == 114) { _res_key_if_1 = table.equal_range( k ); }
          if(env_var_1 == 115) { _res_key_if_1 = table.equal_range( rows ); }
          if(env_var_1 == 116) { _res_key_if_1 = table.erase( columns ); }
          if(env_var_1 == 117) { _res_key_if_1 = table.erase( i ); }
          if(env_var_1 == 118) { _res_key_if_1 = table.erase( j ); }
          if(env_var_1 == 119) { _res_key_if_1 = table.erase( k ); }
          if(env_var_1 == 120) { _res_key_if_1 = table.erase( rows ); }
          if(env_var_1 == 121) { _res_key_if_1 = table.find( columns ); }
          if(env_var_1 == 122) { _res_key_if_1 = table.find( i ); }
          if(env_var_1 == 123) { _res_key_if_1 = table.find( j ); }
          if(env_var_1 == 124) { _res_key_if_1 = table.find( k ); }
          if(env_var_1 == 125) { _res_key_if_1 = table.find( rows ); }
          if(env_var_1 == 126) { _res_key_if_1 = table.max_load_factor( columns ); }
          if(env_var_1 == 127) { _res_key_if_1 = table.max_load_factor( i ); }
          if(env_var_1 == 128) { _res_key_if_1 = table.max_load_factor( j ); }
          if(env_var_1 == 129) { _res_key_if_1 = table.max_load_factor( k ); }
          if(env_var_1 == 130) { _res_key_if_1 = table.max_load_factor( rows ); }
          if(env_var_1 == 131) { _res_key_if_1 = table.rehash( columns ); }
          if(env_var_1 == 132) { _res_key_if_1 = table.rehash( i ); }
          if(env_var_1 == 133) { _res_key_if_1 = table.rehash( j ); }
          if(env_var_1 == 134) { _res_key_if_1 = table.rehash( k ); }
          if(env_var_1 == 135) { _res_key_if_1 = table.rehash( rows ); }
          if(env_var_1 == 136) { _res_key_if_1 = table.reserve( columns ); }
          if(env_var_1 == 137) { _res_key_if_1 = table.reserve( i ); }
          if(env_var_1 == 138) { _res_key_if_1 = table.reserve( j ); }
          if(env_var_1 == 139) { _res_key_if_1 = table.reserve( k ); }
          if(env_var_1 == 140) { _res_key_if_1 = table.reserve( rows ); }
          if(env_var_1 == 141) { _res_key_if_1 = table.swap( table ); }
          if(env_var_1 == 142) { _res_key_if_1 = toupper( columns ); }
          if(env_var_1 == 143) { _res_key_if_1 = toupper( i ); }
          if(env_var_1 == 144) { _res_key_if_1 = toupper( j ); }
          if(env_var_1 == 145) { _res_key_if_1 = toupper( k ); }
          if(env_var_1 == 146) { _res_key_if_1 = toupper( rows ); }
          if(env_var_1 == 147) { _res_key_if_1 = toupper(); }
          if ( _res_key_if_1 ) return true ;
          int _res_key_if_2;
          if(env_var_2 == 0) { _res_key_if_2 = !columns; }
          if(env_var_2 == 1) { _res_key_if_2 = !i; }
          if(env_var_2 == 2) { _res_key_if_2 = !isupper( columns ); }
          if(env_var_2 == 3) { _res_key_if_2 = !isupper( i ); }
          if(env_var_2 == 4) { _res_key_if_2 = !isupper( j ); }
          if(env_var_2 == 5) { _res_key_if_2 = !isupper( k ); }
          if(env_var_2 == 6) { _res_key_if_2 = !isupper( rows ); }
          if(env_var_2 == 7) { _res_key_if_2 = !j; }
          if(env_var_2 == 8) { _res_key_if_2 = !k; }
          if(env_var_2 == 9) { _res_key_if_2 = !matrix; }
          if(env_var_2 == 10) { _res_key_if_2 = !matrix.at( columns ); }
          if(env_var_2 == 11) { _res_key_if_2 = !matrix.at( i ); }
          if(env_var_2 == 12) { _res_key_if_2 = !matrix.at( j ); }
          if(env_var_2 == 13) { _res_key_if_2 = !matrix.at( k ); }
          if(env_var_2 == 14) { _res_key_if_2 = !matrix.at( rows ); }
          if(env_var_2 == 15) { _res_key_if_2 = !matrix.begin(); }
          if(env_var_2 == 16) { _res_key_if_2 = !matrix.end(); }
          if(env_var_2 == 17) { _res_key_if_2 = !matrix.reserve( columns ); }
          if(env_var_2 == 18) { _res_key_if_2 = !matrix.reserve( i ); }
          if(env_var_2 == 19) { _res_key_if_2 = !matrix.reserve( j ); }
          if(env_var_2 == 20) { _res_key_if_2 = !matrix.reserve( k ); }
          if(env_var_2 == 21) { _res_key_if_2 = !matrix.reserve( rows ); }
          if(env_var_2 == 22) { _res_key_if_2 = !matrix.resize( columns ); }
          if(env_var_2 == 23) { _res_key_if_2 = !matrix.resize( i ); }
          if(env_var_2 == 24) { _res_key_if_2 = !matrix.resize( j ); }
          if(env_var_2 == 25) { _res_key_if_2 = !matrix.resize( k ); }
          if(env_var_2 == 26) { _res_key_if_2 = !matrix.resize( rows ); }
          if(env_var_2 == 27) { _res_key_if_2 = !matrix.swap( matrix ); }
          if(env_var_2 == 28) { _res_key_if_2 = !rows; }
          if(env_var_2 == 29) { _res_key_if_2 = !std::max( columns,columns ); }
          if(env_var_2 == 30) { _res_key_if_2 = !std::max( columns,i ); }
          if(env_var_2 == 31) { _res_key_if_2 = !std::max( columns,j ); }
          if(env_var_2 == 32) { _res_key_if_2 = !std::max( columns,k ); }
          if(env_var_2 == 33) { _res_key_if_2 = !std::max( columns,rows ); }
          if(env_var_2 == 34) { _res_key_if_2 = !std::max( i,columns ); }
          if(env_var_2 == 35) { _res_key_if_2 = !std::max( i,i ); }
          if(env_var_2 == 36) { _res_key_if_2 = !std::max( i,j ); }
          if(env_var_2 == 37) { _res_key_if_2 = !std::max( i,k ); }
          if(env_var_2 == 38) { _res_key_if_2 = !std::max( i,rows ); }
          if(env_var_2 == 39) { _res_key_if_2 = !std::max( j,columns ); }
          if(env_var_2 == 40) { _res_key_if_2 = !std::max( j,i ); }
          if(env_var_2 == 41) { _res_key_if_2 = !std::max( j,j ); }
          if(env_var_2 == 42) { _res_key_if_2 = !std::max( j,k ); }
          if(env_var_2 == 43) { _res_key_if_2 = !std::max( j,rows ); }
          if(env_var_2 == 44) { _res_key_if_2 = !std::max( k,columns ); }
          if(env_var_2 == 45) { _res_key_if_2 = !std::max( k,i ); }
          if(env_var_2 == 46) { _res_key_if_2 = !std::max( k,j ); }
          if(env_var_2 == 47) { _res_key_if_2 = !std::max( k,k ); }
          if(env_var_2 == 48) { _res_key_if_2 = !std::max( k,rows ); }
          if(env_var_2 == 49) { _res_key_if_2 = !std::max( rows,columns ); }
          if(env_var_2 == 50) { _res_key_if_2 = !std::max( rows,i ); }
          if(env_var_2 == 51) { _res_key_if_2 = !std::max( rows,j ); }
          if(env_var_2 == 52) { _res_key_if_2 = !std::max( rows,k ); }
          if(env_var_2 == 53) { _res_key_if_2 = !std::max( rows,rows ); }
          if(env_var_2 == 54) { _res_key_if_2 = !std::min( columns,columns ); }
          if(env_var_2 == 55) { _res_key_if_2 = !std::min( columns,i ); }
          if(env_var_2 == 56) { _res_key_if_2 = !std::min( columns,j ); }
          if(env_var_2 == 57) { _res_key_if_2 = !std::min( columns,k ); }
          if(env_var_2 == 58) { _res_key_if_2 = !std::min( columns,rows ); }
          if(env_var_2 == 59) { _res_key_if_2 = !std::min( i,columns ); }
          if(env_var_2 == 60) { _res_key_if_2 = !std::min( i,i ); }
          if(env_var_2 == 61) { _res_key_if_2 = !std::min( i,j ); }
          if(env_var_2 == 62) { _res_key_if_2 = !std::min( i,k ); }
          if(env_var_2 == 63) { _res_key_if_2 = !std::min( i,rows ); }
          if(env_var_2 == 64) { _res_key_if_2 = !std::min( j,columns ); }
          if(env_var_2 == 65) { _res_key_if_2 = !std::min( j,i ); }
          if(env_var_2 == 66) { _res_key_if_2 = !std::min( j,j ); }
          if(env_var_2 == 67) { _res_key_if_2 = !std::min( j,k ); }
          if(env_var_2 == 68) { _res_key_if_2 = !std::min( j,rows ); }
          if(env_var_2 == 69) { _res_key_if_2 = !std::min( k,columns ); }
          if(env_var_2 == 70) { _res_key_if_2 = !std::min( k,i ); }
          if(env_var_2 == 71) { _res_key_if_2 = !std::min( k,j ); }
          if(env_var_2 == 72) { _res_key_if_2 = !std::min( k,k ); }
          if(env_var_2 == 73) { _res_key_if_2 = !std::min( k,rows ); }
          if(env_var_2 == 74) { _res_key_if_2 = !std::min( rows,columns ); }
          if(env_var_2 == 75) { _res_key_if_2 = !std::min( rows,i ); }
          if(env_var_2 == 76) { _res_key_if_2 = !std::min( rows,j ); }
          if(env_var_2 == 77) { _res_key_if_2 = !std::min( rows,k ); }
          if(env_var_2 == 78) { _res_key_if_2 = !std::min( rows,rows ); }
          if(env_var_2 == 79) { _res_key_if_2 = !table; }
          if(env_var_2 == 80) { _res_key_if_2 = !table.at( columns ); }
          if(env_var_2 == 81) { _res_key_if_2 = !table.at( i ); }
          if(env_var_2 == 82) { _res_key_if_2 = !table.at( j ); }
          if(env_var_2 == 83) { _res_key_if_2 = !table.at( k ); }
          if(env_var_2 == 84) { _res_key_if_2 = !table.at( rows ); }
          if(env_var_2 == 85) { _res_key_if_2 = !table.begin( columns ); }
          if(env_var_2 == 86) { _res_key_if_2 = !table.begin( i ); }
          if(env_var_2 == 87) { _res_key_if_2 = !table.begin( j ); }
          if(env_var_2 == 88) { _res_key_if_2 = !table.begin( k ); }
          if(env_var_2 == 89) { _res_key_if_2 = !table.begin( rows ); }
          if(env_var_2 == 90) { _res_key_if_2 = !table.begin(); }
          if(env_var_2 == 91) { _res_key_if_2 = !table.bucket( columns ); }
          if(env_var_2 == 92) { _res_key_if_2 = !table.bucket( i ); }
          if(env_var_2 == 93) { _res_key_if_2 = !table.bucket( j ); }
          if(env_var_2 == 94) { _res_key_if_2 = !table.bucket( k ); }
          if(env_var_2 == 95) { _res_key_if_2 = !table.bucket( rows ); }
          if(env_var_2 == 96) { _res_key_if_2 = !table.bucket_size( columns ); }
          if(env_var_2 == 97) { _res_key_if_2 = !table.bucket_size( i ); }
          if(env_var_2 == 98) { _res_key_if_2 = !table.bucket_size( j ); }
          if(env_var_2 == 99) { _res_key_if_2 = !table.bucket_size( k ); }
          if(env_var_2 == 100) { _res_key_if_2 = !table.bucket_size( rows ); }
          if(env_var_2 == 101) { _res_key_if_2 = !table.cbegin( columns ); }
          if(env_var_2 == 102) { _res_key_if_2 = !table.cbegin( i ); }
          if(env_var_2 == 103) { _res_key_if_2 = !table.cbegin( j ); }
          if(env_var_2 == 104) { _res_key_if_2 = !table.cbegin( k ); }
          if(env_var_2 == 105) { _res_key_if_2 = !table.cbegin( rows ); }
          if(env_var_2 == 106) { _res_key_if_2 = !table.cend( columns ); }
          if(env_var_2 == 107) { _res_key_if_2 = !table.cend( i ); }
          if(env_var_2 == 108) { _res_key_if_2 = !table.cend( j ); }
          if(env_var_2 == 109) { _res_key_if_2 = !table.cend( k ); }
          if(env_var_2 == 110) { _res_key_if_2 = !table.cend( rows ); }
          if(env_var_2 == 111) { _res_key_if_2 = !table.count( columns ); }
          if(env_var_2 == 112) { _res_key_if_2 = !table.count( i ); }
          if(env_var_2 == 113) { _res_key_if_2 = !table.count( j ); }
          if(env_var_2 == 114) { _res_key_if_2 = !table.count( k ); }
          if(env_var_2 == 115) { _res_key_if_2 = !table.count( rows ); }
          if(env_var_2 == 116) { _res_key_if_2 = !table.end( columns ); }
          if(env_var_2 == 117) { _res_key_if_2 = !table.end( i ); }
          if(env_var_2 == 118) { _res_key_if_2 = !table.end( j ); }
          if(env_var_2 == 119) { _res_key_if_2 = !table.end( k ); }
          if(env_var_2 == 120) { _res_key_if_2 = !table.end( rows ); }
          if(env_var_2 == 121) { _res_key_if_2 = !table.end(); }
          if(env_var_2 == 122) { _res_key_if_2 = !table.equal_range( columns ); }
          if(env_var_2 == 123) { _res_key_if_2 = !table.equal_range( i ); }
          if(env_var_2 == 124) { _res_key_if_2 = !table.equal_range( j ); }
          if(env_var_2 == 125) { _res_key_if_2 = !table.equal_range( k ); }
          if(env_var_2 == 126) { _res_key_if_2 = !table.equal_range( rows ); }
          if(env_var_2 == 127) { _res_key_if_2 = !table.erase( columns ); }
          if(env_var_2 == 128) { _res_key_if_2 = !table.erase( i ); }
          if(env_var_2 == 129) { _res_key_if_2 = !table.erase( j ); }
          if(env_var_2 == 130) { _res_key_if_2 = !table.erase( k ); }
          if(env_var_2 == 131) { _res_key_if_2 = !table.erase( rows ); }
          if(env_var_2 == 132) { _res_key_if_2 = !table.find( columns ); }
          if(env_var_2 == 133) { _res_key_if_2 = !table.find( i ); }
          if(env_var_2 == 134) { _res_key_if_2 = !table.find( j ); }
          if(env_var_2 == 135) { _res_key_if_2 = !table.find( k ); }
          if(env_var_2 == 136) { _res_key_if_2 = !table.find( rows ); }
          if(env_var_2 == 137) { _res_key_if_2 = !table.max_load_factor( columns ); }
          if(env_var_2 == 138) { _res_key_if_2 = !table.max_load_factor( i ); }
          if(env_var_2 == 139) { _res_key_if_2 = !table.max_load_factor( j ); }
          if(env_var_2 == 140) { _res_key_if_2 = !table.max_load_factor( k ); }
          if(env_var_2 == 141) { _res_key_if_2 = !table.max_load_factor( rows ); }
          if(env_var_2 == 142) { _res_key_if_2 = !table.rehash( columns ); }
          if(env_var_2 == 143) { _res_key_if_2 = !table.rehash( i ); }
          if(env_var_2 == 144) { _res_key_if_2 = !table.rehash( j ); }
          if(env_var_2 == 145) { _res_key_if_2 = !table.rehash( k ); }
          if(env_var_2 == 146) { _res_key_if_2 = !table.rehash( rows ); }
          if(env_var_2 == 147) { _res_key_if_2 = !table.reserve( columns ); }
          if(env_var_2 == 148) { _res_key_if_2 = !table.reserve( i ); }
          if(env_var_2 == 149) { _res_key_if_2 = !table.reserve( j ); }
          if(env_var_2 == 150) { _res_key_if_2 = !table.reserve( k ); }
          if(env_var_2 == 151) { _res_key_if_2 = !table.reserve( rows ); }
          if(env_var_2 == 152) { _res_key_if_2 = !table.swap( table ); }
          if(env_var_2 == 153) { _res_key_if_2 = !toupper( columns ); }
          if(env_var_2 == 154) { _res_key_if_2 = !toupper( i ); }
          if(env_var_2 == 155) { _res_key_if_2 = !toupper( j ); }
          if(env_var_2 == 156) { _res_key_if_2 = !toupper( k ); }
          if(env_var_2 == 157) { _res_key_if_2 = !toupper( rows ); }
          if(env_var_2 == 158) { _res_key_if_2 = !toupper(); }
          if ( _res_key_if_2 ) {
            set < int > x ;
            x . insert ( k ) ;
            if(env_var_3 == 0) { isupper( columns ); }
            if(env_var_3 == 1) { isupper( i ); }
            if(env_var_3 == 2) { isupper( j ); }
            if(env_var_3 == 3) { isupper( k ); }
            if(env_var_3 == 4) { isupper( rows ); }
            if(env_var_3 == 5) { std::max( columns,columns ); }
            if(env_var_3 == 6) { std::max( columns,i ); }
            if(env_var_3 == 7) { std::max( columns,j ); }
            if(env_var_3 == 8) { std::max( columns,k ); }
            if(env_var_3 == 9) { std::max( columns,rows ); }
            if(env_var_3 == 10) { std::max( i,columns ); }
            if(env_var_3 == 11) { std::max( i,i ); }
            if(env_var_3 == 12) { std::max( i,j ); }
            if(env_var_3 == 13) { std::max( i,k ); }
            if(env_var_3 == 14) { std::max( i,rows ); }
            if(env_var_3 == 15) { std::max( j,columns ); }
            if(env_var_3 == 16) { std::max( j,i ); }
            if(env_var_3 == 17) { std::max( j,j ); }
            if(env_var_3 == 18) { std::max( j,k ); }
            if(env_var_3 == 19) { std::max( j,rows ); }
            if(env_var_3 == 20) { std::max( k,columns ); }
            if(env_var_3 == 21) { std::max( k,i ); }
            if(env_var_3 == 22) { std::max( k,j ); }
            if(env_var_3 == 23) { std::max( k,k ); }
            if(env_var_3 == 24) { std::max( k,rows ); }
            if(env_var_3 == 25) { std::max( rows,columns ); }
            if(env_var_3 == 26) { std::max( rows,i ); }
            if(env_var_3 == 27) { std::max( rows,j ); }
            if(env_var_3 == 28) { std::max( rows,k ); }
            if(env_var_3 == 29) { std::max( rows,rows ); }
            if(env_var_3 == 30) { std::min( columns,columns ); }
            if(env_var_3 == 31) { std::min( columns,i ); }
            if(env_var_3 == 32) { std::min( columns,j ); }
            if(env_var_3 == 33) { std::min( columns,k ); }
            if(env_var_3 == 34) { std::min( columns,rows ); }
            if(env_var_3 == 35) { std::min( i,columns ); }
            if(env_var_3 == 36) { std::min( i,i ); }
            if(env_var_3 == 37) { std::min( i,j ); }
            if(env_var_3 == 38) { std::min( i,k ); }
            if(env_var_3 == 39) { std::min( i,rows ); }
            if(env_var_3 == 40) { std::min( j,columns ); }
            if(env_var_3 == 41) { std::min( j,i ); }
            if(env_var_3 == 42) { std::min( j,j ); }
            if(env_var_3 == 43) { std::min( j,k ); }
            if(env_var_3 == 44) { std::min( j,rows ); }
            if(env_var_3 == 45) { std::min( k,columns ); }
            if(env_var_3 == 46) { std::min( k,i ); }
            if(env_var_3 == 47) { std::min( k,j ); }
            if(env_var_3 == 48) { std::min( k,k ); }
            if(env_var_3 == 49) { std::min( k,rows ); }
            if(env_var_3 == 50) { std::min( rows,columns ); }
            if(env_var_3 == 51) { std::min( rows,i ); }
            if(env_var_3 == 52) { std::min( rows,j ); }
            if(env_var_3 == 53) { std::min( rows,k ); }
            if(env_var_3 == 54) { std::min( rows,rows ); }
            if(env_var_3 == 55) { toupper( columns ); }
            if(env_var_3 == 56) { toupper( i ); }
            if(env_var_3 == 57) { toupper( j ); }
            if(env_var_3 == 58) { toupper( k ); }
            if(env_var_3 == 59) { toupper( rows ); }
            if(env_var_3 == 60) { toupper(); }
             ;
          }
          else table [ j ] . insert ( k ) ;
          int _res_key_if_3;
          if(env_var_4 == 0) { _res_key_if_3 = !columns; }
          if(env_var_4 == 1) { _res_key_if_3 = !i; }
          if(env_var_4 == 2) { _res_key_if_3 = !isupper( columns ); }
          if(env_var_4 == 3) { _res_key_if_3 = !isupper( i ); }
          if(env_var_4 == 4) { _res_key_if_3 = !isupper( j ); }
          if(env_var_4 == 5) { _res_key_if_3 = !isupper( k ); }
          if(env_var_4 == 6) { _res_key_if_3 = !isupper( rows ); }
          if(env_var_4 == 7) { _res_key_if_3 = !j; }
          if(env_var_4 == 8) { _res_key_if_3 = !k; }
          if(env_var_4 == 9) { _res_key_if_3 = !matrix; }
          if(env_var_4 == 10) { _res_key_if_3 = !matrix.at( columns ); }
          if(env_var_4 == 11) { _res_key_if_3 = !matrix.at( i ); }
          if(env_var_4 == 12) { _res_key_if_3 = !matrix.at( j ); }
          if(env_var_4 == 13) { _res_key_if_3 = !matrix.at( k ); }
          if(env_var_4 == 14) { _res_key_if_3 = !matrix.at( rows ); }
          if(env_var_4 == 15) { _res_key_if_3 = !matrix.begin(); }
          if(env_var_4 == 16) { _res_key_if_3 = !matrix.end(); }
          if(env_var_4 == 17) { _res_key_if_3 = !matrix.reserve( columns ); }
          if(env_var_4 == 18) { _res_key_if_3 = !matrix.reserve( i ); }
          if(env_var_4 == 19) { _res_key_if_3 = !matrix.reserve( j ); }
          if(env_var_4 == 20) { _res_key_if_3 = !matrix.reserve( k ); }
          if(env_var_4 == 21) { _res_key_if_3 = !matrix.reserve( rows ); }
          if(env_var_4 == 22) { _res_key_if_3 = !matrix.resize( columns ); }
          if(env_var_4 == 23) { _res_key_if_3 = !matrix.resize( i ); }
          if(env_var_4 == 24) { _res_key_if_3 = !matrix.resize( j ); }
          if(env_var_4 == 25) { _res_key_if_3 = !matrix.resize( k ); }
          if(env_var_4 == 26) { _res_key_if_3 = !matrix.resize( rows ); }
          if(env_var_4 == 27) { _res_key_if_3 = !matrix.swap( matrix ); }
          if(env_var_4 == 28) { _res_key_if_3 = !rows; }
          if(env_var_4 == 29) { _res_key_if_3 = !std::max( columns,columns ); }
          if(env_var_4 == 30) { _res_key_if_3 = !std::max( columns,i ); }
          if(env_var_4 == 31) { _res_key_if_3 = !std::max( columns,j ); }
          if(env_var_4 == 32) { _res_key_if_3 = !std::max( columns,k ); }
          if(env_var_4 == 33) { _res_key_if_3 = !std::max( columns,rows ); }
          if(env_var_4 == 34) { _res_key_if_3 = !std::max( i,columns ); }
          if(env_var_4 == 35) { _res_key_if_3 = !std::max( i,i ); }
          if(env_var_4 == 36) { _res_key_if_3 = !std::max( i,j ); }
          if(env_var_4 == 37) { _res_key_if_3 = !std::max( i,k ); }
          if(env_var_4 == 38) { _res_key_if_3 = !std::max( i,rows ); }
          if(env_var_4 == 39) { _res_key_if_3 = !std::max( j,columns ); }
          if(env_var_4 == 40) { _res_key_if_3 = !std::max( j,i ); }
          if(env_var_4 == 41) { _res_key_if_3 = !std::max( j,j ); }
          if(env_var_4 == 42) { _res_key_if_3 = !std::max( j,k ); }
          if(env_var_4 == 43) { _res_key_if_3 = !std::max( j,rows ); }
          if(env_var_4 == 44) { _res_key_if_3 = !std::max( k,columns ); }
          if(env_var_4 == 45) { _res_key_if_3 = !std::max( k,i ); }
          if(env_var_4 == 46) { _res_key_if_3 = !std::max( k,j ); }
          if(env_var_4 == 47) { _res_key_if_3 = !std::max( k,k ); }
          if(env_var_4 == 48) { _res_key_if_3 = !std::max( k,rows ); }
          if(env_var_4 == 49) { _res_key_if_3 = !std::max( rows,columns ); }
          if(env_var_4 == 50) { _res_key_if_3 = !std::max( rows,i ); }
          if(env_var_4 == 51) { _res_key_if_3 = !std::max( rows,j ); }
          if(env_var_4 == 52) { _res_key_if_3 = !std::max( rows,k ); }
          if(env_var_4 == 53) { _res_key_if_3 = !std::max( rows,rows ); }
          if(env_var_4 == 54) { _res_key_if_3 = !std::min( columns,columns ); }
          if(env_var_4 == 55) { _res_key_if_3 = !std::min( columns,i ); }
          if(env_var_4 == 56) { _res_key_if_3 = !std::min( columns,j ); }
          if(env_var_4 == 57) { _res_key_if_3 = !std::min( columns,k ); }
          if(env_var_4 == 58) { _res_key_if_3 = !std::min( columns,rows ); }
          if(env_var_4 == 59) { _res_key_if_3 = !std::min( i,columns ); }
          if(env_var_4 == 60) { _res_key_if_3 = !std::min( i,i ); }
          if(env_var_4 == 61) { _res_key_if_3 = !std::min( i,j ); }
          if(env_var_4 == 62) { _res_key_if_3 = !std::min( i,k ); }
          if(env_var_4 == 63) { _res_key_if_3 = !std::min( i,rows ); }
          if(env_var_4 == 64) { _res_key_if_3 = !std::min( j,columns ); }
          if(env_var_4 == 65) { _res_key_if_3 = !std::min( j,i ); }
          if(env_var_4 == 66) { _res_key_if_3 = !std::min( j,j ); }
          if(env_var_4 == 67) { _res_key_if_3 = !std::min( j,k ); }
          if(env_var_4 == 68) { _res_key_if_3 = !std::min( j,rows ); }
          if(env_var_4 == 69) { _res_key_if_3 = !std::min( k,columns ); }
          if(env_var_4 == 70) { _res_key_if_3 = !std::min( k,i ); }
          if(env_var_4 == 71) { _res_key_if_3 = !std::min( k,j ); }
          if(env_var_4 == 72) { _res_key_if_3 = !std::min( k,k ); }
          if(env_var_4 == 73) { _res_key_if_3 = !std::min( k,rows ); }
          if(env_var_4 == 74) { _res_key_if_3 = !std::min( rows,columns ); }
          if(env_var_4 == 75) { _res_key_if_3 = !std::min( rows,i ); }
          if(env_var_4 == 76) { _res_key_if_3 = !std::min( rows,j ); }
          if(env_var_4 == 77) { _res_key_if_3 = !std::min( rows,k ); }
          if(env_var_4 == 78) { _res_key_if_3 = !std::min( rows,rows ); }
          if(env_var_4 == 79) { _res_key_if_3 = !table; }
          if(env_var_4 == 80) { _res_key_if_3 = !table.at( columns ); }
          if(env_var_4 == 81) { _res_key_if_3 = !table.at( i ); }
          if(env_var_4 == 82) { _res_key_if_3 = !table.at( j ); }
          if(env_var_4 == 83) { _res_key_if_3 = !table.at( k ); }
          if(env_var_4 == 84) { _res_key_if_3 = !table.at( rows ); }
          if(env_var_4 == 85) { _res_key_if_3 = !table.begin( columns ); }
          if(env_var_4 == 86) { _res_key_if_3 = !table.begin( i ); }
          if(env_var_4 == 87) { _res_key_if_3 = !table.begin( j ); }
          if(env_var_4 == 88) { _res_key_if_3 = !table.begin( k ); }
          if(env_var_4 == 89) { _res_key_if_3 = !table.begin( rows ); }
          if(env_var_4 == 90) { _res_key_if_3 = !table.begin(); }
          if(env_var_4 == 91) { _res_key_if_3 = !table.bucket( columns ); }
          if(env_var_4 == 92) { _res_key_if_3 = !table.bucket( i ); }
          if(env_var_4 == 93) { _res_key_if_3 = !table.bucket( j ); }
          if(env_var_4 == 94) { _res_key_if_3 = !table.bucket( k ); }
          if(env_var_4 == 95) { _res_key_if_3 = !table.bucket( rows ); }
          if(env_var_4 == 96) { _res_key_if_3 = !table.bucket_size( columns ); }
          if(env_var_4 == 97) { _res_key_if_3 = !table.bucket_size( i ); }
          if(env_var_4 == 98) { _res_key_if_3 = !table.bucket_size( j ); }
          if(env_var_4 == 99) { _res_key_if_3 = !table.bucket_size( k ); }
          if(env_var_4 == 100) { _res_key_if_3 = !table.bucket_size( rows ); }
          if(env_var_4 == 101) { _res_key_if_3 = !table.cbegin( columns ); }
          if(env_var_4 == 102) { _res_key_if_3 = !table.cbegin( i ); }
          if(env_var_4 == 103) { _res_key_if_3 = !table.cbegin( j ); }
          if(env_var_4 == 104) { _res_key_if_3 = !table.cbegin( k ); }
          if(env_var_4 == 105) { _res_key_if_3 = !table.cbegin( rows ); }
          if(env_var_4 == 106) { _res_key_if_3 = !table.cend( columns ); }
          if(env_var_4 == 107) { _res_key_if_3 = !table.cend( i ); }
          if(env_var_4 == 108) { _res_key_if_3 = !table.cend( j ); }
          if(env_var_4 == 109) { _res_key_if_3 = !table.cend( k ); }
          if(env_var_4 == 110) { _res_key_if_3 = !table.cend( rows ); }
          if(env_var_4 == 111) { _res_key_if_3 = !table.count( columns ); }
          if(env_var_4 == 112) { _res_key_if_3 = !table.count( i ); }
          if(env_var_4 == 113) { _res_key_if_3 = !table.count( j ); }
          if(env_var_4 == 114) { _res_key_if_3 = !table.count( k ); }
          if(env_var_4 == 115) { _res_key_if_3 = !table.count( rows ); }
          if(env_var_4 == 116) { _res_key_if_3 = !table.end( columns ); }
          if(env_var_4 == 117) { _res_key_if_3 = !table.end( i ); }
          if(env_var_4 == 118) { _res_key_if_3 = !table.end( j ); }
          if(env_var_4 == 119) { _res_key_if_3 = !table.end( k ); }
          if(env_var_4 == 120) { _res_key_if_3 = !table.end( rows ); }
          if(env_var_4 == 121) { _res_key_if_3 = !table.end(); }
          if(env_var_4 == 122) { _res_key_if_3 = !table.equal_range( columns ); }
          if(env_var_4 == 123) { _res_key_if_3 = !table.equal_range( i ); }
          if(env_var_4 == 124) { _res_key_if_3 = !table.equal_range( j ); }
          if(env_var_4 == 125) { _res_key_if_3 = !table.equal_range( k ); }
          if(env_var_4 == 126) { _res_key_if_3 = !table.equal_range( rows ); }
          if(env_var_4 == 127) { _res_key_if_3 = !table.erase( columns ); }
          if(env_var_4 == 128) { _res_key_if_3 = !table.erase( i ); }
          if(env_var_4 == 129) { _res_key_if_3 = !table.erase( j ); }
          if(env_var_4 == 130) { _res_key_if_3 = !table.erase( k ); }
          if(env_var_4 == 131) { _res_key_if_3 = !table.erase( rows ); }
          if(env_var_4 == 132) { _res_key_if_3 = !table.find( columns ); }
          if(env_var_4 == 133) { _res_key_if_3 = !table.find( i ); }
          if(env_var_4 == 134) { _res_key_if_3 = !table.find( j ); }
          if(env_var_4 == 135) { _res_key_if_3 = !table.find( k ); }
          if(env_var_4 == 136) { _res_key_if_3 = !table.find( rows ); }
          if(env_var_4 == 137) { _res_key_if_3 = !table.max_load_factor( columns ); }
          if(env_var_4 == 138) { _res_key_if_3 = !table.max_load_factor( i ); }
          if(env_var_4 == 139) { _res_key_if_3 = !table.max_load_factor( j ); }
          if(env_var_4 == 140) { _res_key_if_3 = !table.max_load_factor( k ); }
          if(env_var_4 == 141) { _res_key_if_3 = !table.max_load_factor( rows ); }
          if(env_var_4 == 142) { _res_key_if_3 = !table.rehash( columns ); }
          if(env_var_4 == 143) { _res_key_if_3 = !table.rehash( i ); }
          if(env_var_4 == 144) { _res_key_if_3 = !table.rehash( j ); }
          if(env_var_4 == 145) { _res_key_if_3 = !table.rehash( k ); }
          if(env_var_4 == 146) { _res_key_if_3 = !table.rehash( rows ); }
          if(env_var_4 == 147) { _res_key_if_3 = !table.reserve( columns ); }
          if(env_var_4 == 148) { _res_key_if_3 = !table.reserve( i ); }
          if(env_var_4 == 149) { _res_key_if_3 = !table.reserve( j ); }
          if(env_var_4 == 150) { _res_key_if_3 = !table.reserve( k ); }
          if(env_var_4 == 151) { _res_key_if_3 = !table.reserve( rows ); }
          if(env_var_4 == 152) { _res_key_if_3 = !table.swap( table ); }
          if(env_var_4 == 153) { _res_key_if_3 = !toupper( columns ); }
          if(env_var_4 == 154) { _res_key_if_3 = !toupper( i ); }
          if(env_var_4 == 155) { _res_key_if_3 = !toupper( j ); }
          if(env_var_4 == 156) { _res_key_if_3 = !toupper( k ); }
          if(env_var_4 == 157) { _res_key_if_3 = !toupper( rows ); }
          if(env_var_4 == 158) { _res_key_if_3 = !toupper(); }
          if ( _res_key_if_3 ) {
            set < int > x ;
            x . insert ( j ) ;
            table [ k ] . insert ( x ) ;
          }
          else table [ k ] . insert ( j ) ;
        }
      }
    }
  }
  return false ;
}


int main() {
    int n_success = 0;
    vector<vector<vector<int>>> param0 {{{48,25,59,46,32,28,36,78,51,68,32,63,94,45,90,93,95,29,66,1,55,53,49,16,51,17,18,84,42,99,81,70,8,40,38,24,15,69,87,65,62,15,13,34,47,97,25,79,89},{59,6,26,37,34,82,74,80,97,4,74,32,65,10,20,91,19,66,32,12,6,20,61,43,86,65,61,57,20,34,75,83,94,60,18,17,28,64,32,15,64,2,73,25,17,58},{53,73,23,77,38,21,75,40,32,24,71,27,77,18,79,76,40,76,7,32,33,52,19,34,29,64,73,13,6,54,1,27,38,78,68,29,25,29,74,8},{2,64,70,65,78,75,79,86,6,23,42,53,55,41,19,65,85,26,47,78,90,51,43},{63,34,35,15,75,35,20,41,85,7,97,95,11,7,13},{64,9,44,1,49,51,44,6,54,73,37,89,29,73,50,36,15,92,1,51,33,83,89,95,61,50,70,73,75,67,42,81,21,86,80,76,97,47,28,54},{41,2,65,77,25,93,77,12,49,35,56,48,73,75,89,41,52,11,81,5,11,92,22,3,61,99,68,69,31,41,74,9,92,58,53,12,65,93},{76,91,13,62,90,27,53,8,87,71,9,8,96,40,8,24,72,96,50,23,58,49,88,83,60,84,75,49,80,95,29,69,77,24,7,96,72,5,73,6,62,54,42,94,8,97,57},{23,16,32,72,45,56,85,70,14,10,55},{8,51,31,64,57,39,52,31,76,83,69,27,35,35,71,36,87,2,34,99,17,83,60,4,8,5,19,81,96,77,94,73,39,37,2,11,12}},{{1,79,87,97,7,62,65},{6,56,66,48,88,75,72,4,97,12,88,82,26,35,82,94,1,43,57,80,49},{29,75,9,81,88,75,77,18,89,29,9,22,17,52,45,53,30,93,15,76,70,35,33,8,26,29,36,26,94,16,74,89,19,54,89,61,44,33,73,45,72,57,78,64,70,49}},{{92,95,14,97,59,45,51,87,26,68,28,6,91,2,10,45,21,2,75,21,28,95,59,37,13,27,98,66,86,73,5,93,45,91,14,93},{2,44,43,32,58,69,78,77,55,87,7,18,22,65,25,73,52,94},{48,11,61},{94,25,96,99,21,46,6,61,7,81,46},{40,64,19,36,72,69,69,62,88,40,92,57,81,70,80,24,41,90,24,95,30,61,30,59,8,6,5,40,20,80,42,29,20,26,19,27,68,48,81,17,99,63,28,66,10,73,9,89},{9,64,15,86,39,36,9,1,55,66,73,63,66,16,17,76,10,39,93,70},{43,65,31,46,94,41,83,89,95,3,43,12,6,49,8,28,64,42,16,3,95,43,94,76,16,31},{9,56,14,88,77,91,26,49,32,51,89,79,30,77,85,37,69,70,86,20,5,35,29,90,17,97,80,16,13,25,71,31,33,8,21,65,99,24,53,20,20,62},{97,23,62,90,61,89,20,47,83,56,3,34,8},{53,41,27},{94,24,80,16,31,5,31,66,1,13,77,88,40,34,15,90,46,8,26,39,52,22,33,3,30,49,51},{50,39,59,41,79},{75,82,35,14,61,77,79,9,71,25,21,58,40,44,80,92,45,46,80,74,62,71,56,59,46,35,53,31,86,65,33,47,31,20,55,73,9,96,37,51,53,98,73,21},{3,91,78,78,96,77,32,50,59,34,1,28},{50,11},{8,57,96,5,68,47,18,63,62,64,68,2,88,70,68,2,38,39,21,36,37,26,73,85,51,18,88,3,67,9,7,97,7,44,9,13,91,20,83,11,66,43,62,34,40,96,13},{4,37,63,82,19,41,18,75,56,26,44,64,97,25,44,9,72,75,14,44,91,46,2,41,22,66,26,94,73,35,60,28,49,94,73,40,83,52,39,69,4,2,98,90},{81,15,33,85,24,4,76,32,67,63,46,21,31,26,61,77,32,59,89,70,79,68,68,8},{36,36,60,94,41,69,75,36,71,3,22,13,7,74,42,2,81,35,46,44,63,11,94,45,81,10,51,59,72,74,12,55,41,72,87,82,84,19,52,13,52,1,61,59,49},{70,57,5,6,65,66,78,65,61},{2,49,22,44,27,25,1},{56,85,62,45,35,14,97,81,14,27,32,90,73,98,23,35,93,8,40,18,71,12,11,32,92,52,11,89,58,10,74,54,3,67,17,23,61,24,54,12,36,22,88,64,73,89,76,48},{27,63,60,19,6,70,11,1,66,90,29,71,18,25,21,61,52,9,84,28,10,99,42,31,69,49,5,19,28,47,48,27,62},{6,30,86,95,8,8,23,25,50,21,12,76,56,77,82,91,44,2,55,56,18,4,22,35,88,33,66,28,4,84,2,64,59},{23,33,81,16,79,14,15,4,32,77,17,43,18,37,1,13,53,52,5,66,96,30,51,61,29,62,12,55,66},{63,81,85,16,23,90,26,65,49,96,91,55,78,92,50,2,98,44,34,6,5,82},{2,67,52,5,47,22,30,25,90,76,18,15,40,45,48,79,90,24,63,33,90,25,45,93,3,5,76,6,83,76,12,2,88,78,12,7,54,74,61,97,88,90,91,20,46,33,5,12},{28,38,21,36,66,32,87,78,53,57,87,80,79,61,65,4,43,96,13},{57,44,10,43,74,3,59,35,69,25,66,92,66,57,66,3,45,9,16,7,47,50,57,46,53,90,67,89,16,82,48,81,51,80,83,84,90},{1,97,93,55,52,20,3,28,49,38,38,11,59,98,22,87,7,73,18,91,72,26,71,59,50,91},{5,26,37,44,57,84,73,13,18,96,51,33,75,36,21,56,25,99,18},{90,90,26,61},{61,21,32,48,64,48,7,69,40,63,50,63,83,80,16},{51,19,94,14,63,34,21,4,91,96,75,85,7,22,63,48,64,1,63,83,71,8,97,67,84,41,76,40,68,7,94,96,73},{33,21,45,12,24,20,4,97,31,30,17,98,73,79,63,57,28,20,86},{82,86,3,87,17,7,19,63,93,70,99,26,46,37,24,10,77,9,79,39,2,51,79,3,39},{2,77,66,19,22,51,7,28,18,19,37,28,9,69,76,16,60,78,95,77,52,99,66,82,50,37,60},{78,75,87,13,10,11,40,11,17,28,79,26,32},{95,92,17,70,28,20,42,33,60,97,52,81,79,68,32,6,40,46,75,75,84,39},{14,5,34,98,57,38,88,51,5,70,20,6,7,19,47,12,26,53,60,60,34,48,7},{19,63,38,57,85,36,13}},{{52,56,26,61,68,41,84,98,51,57,79,92,33,85,71,78,55,22,96,27,6,55,37,20,62,2,56,41,31,83,81,44,80,4,98,62,83,28},{39,93,63,3,14,44,18,95,42,14,55,54,54,87,85,57,57,27,62,73,9,13,26,14,72,37,90,42,42},{43,26,54,83,96,93,93,16,8,32,17,34,56},{59,95,94,10,62,40,36,10,6,34,7,86,71,45,82,74,96,46,15,73,35,39,76,77,69,59,7,70,75,20,67,27,5},{45,79,16,85,58,19,14,43,35,33,51,28,74,40,69,25,55,28,6,96,38,90,69,27,33,95,68,58,65,56,89,69,98,61,48,83,84,11,5,89,38,57,13,31,99,6,43},{78,61,19,19,68,83,50,72,61,90,13,28,94,79,39,78,97,13,23,54,88},{34,56,16,73,59,66,89,36,62,66,77,19,93,49,16,64,60,19,83},{25,20,66,5,51,14,98,98,57,14,76,96,8,69,91,94,46,26,44,14,67,50,1,56,21,86,36,7,68,25,51,64,27,22,84,7,31,53,71,66},{39,80,18,31,31,7,87,62,71,5,34,87,33,51,53,55,66,11,58,45,92,50,77,50,43,82,16,29,33},{33,15,80,56,82,63,24,41,77,82,19,32,21,24,45,7,70,89,37,79,14,25,51,21,58,52},{77,6,17,14,83,67,37,8,71,21,88,16,72,46,96,98,11,57,99,56,68,65,98,29,59,11,60,36,24,75,23,21,97,58,80,97,40,8,7,5,4,38},{77,26},{75,96,87,50,64,88,66,94,1,19,88,1,18,96,1,91,68,91,85,1,20,99,2,9,68},{11,7,69,96,8,58,95,89,5,87,74,61,19,3,55,72,78,36},{77,13,44,85,54,3,79,23,44,40,70,67,78,28,32,51,12,58,52,2,68,23,38,62,40,85,78,95,72,78,49},{85,42,73},{73,68,18,36,3,24,12,22,77,1,46},{60,34,33,80,37,51,42,3,2,97,7,51,97,26,46,74,31,2,40,2,67,90,43,14,4,51,6,24,26},{58,87,20,27,20,71,36,22,55,6},{16,68,60,55,44,32,99,18,83,29,79,6,45,86,30,17,98,14},{8,45,41,74,35,20,97,30,52,19,87,93,75,25,34,58,27,41,74,14,96,3,21,77,16,5,62,25,14,35,57,24,54},{12,84,26,80,68,70,8,51,2,4,38,52,8,80,14,59,72,53,63,68,61,9,84,63,46,34,31,69,3,32,53,51,61,57,48,81,5,54,3,19,31,50},{85,92,84,94,24,62,90,89,9,90,73,89,22,80,21,88,20,13,48,6,9,78,76,15,50,23,23,42,31,8,86,35,68,59,92,89,92,10,4,32,73},{72,43,43,57,37,28,69,47},{89,32,87,42,68,35,58,53,70,16,47},{73,62,55,45,25,51,77,90,50,6,56,77,81,42,24,97,25,58,91,35,22},{18,45,40,60,53,25,28,23,20,71,57,81,12,64,32,20,41,82,98,78,53,77,96,60,20,3,39,36,74,81},{91,13,77,95,17,60,98,90,92,32,14,51,2,43,78,76,8,62,84,26,42,54,7,38},{63,69,64,80,50,51,77,12,27,49,57,89,2,84,92,67,85,45,14,90,53,33,83,88,86,28,81,17,51,94,64,24,75,11,71,25,67},{13,36,67,30,47,47,51,52,30,44,20,72,53,85,10,13,43,77,6,1,16,77,53,11,23,85,39,7,63,96,32,7},{99,93,66,53,33,80,12,19,6,59,65,34,34,62,27},{85,26,38,18,35,84,24,95,3,42,3,96,37,64},{68},{86,66,83,19,20,49,97,62,84,27,57,83,46,60,92,55,88,41,37,93,41,50,18},{78,81,58,12,78,28,82,20,34,29,22,26,98,87,48,27,14,37,40,94,42,12,43,46,72,7,23,9},{4,22,78,80,32,75,84,1,66,82,73,47,34,98,41,91,67,34,62},{79,21,86,40,17,5,49,93,10,43,99,64,8,56,72,15,10,30,30,14,80,31,27,57,60,33,75,14,92,37,1,6,43,1,51,73,83},{92,57,14,51},{6,31,18,83,40,82,84,36,75,52,93,87,49,16,53,45,87,68,77,79,71,84,27,26,15,5,8,92,92,16,77,39,35,69,61,52,61},{18,91,29,92,26,43,84,31,11,83,67,18,1,54,30,93,40,35,12,31,48,82,99,71,81,22,57,44,55,8,23,45,7,82,63,37,13,98,53},{32,2,97,38,5,17,8,7},{58,94,32,44,32,95,3,16,58,45,73,89,70,64,92,30,17,94,86,5,92,38,6,9,60,83,55,56},{42,19,31,55,51,40,85,81,83,89,62},{99,19,20,28,94},{36,90,94,37,56,29,7,66,75,66,90,8,39,72,43,23,95}},{{49,88,86,47,6,1,20,49,89,17,82,98,57,51,87,75,43},{66,32,51,49,75,33,66,35,91,46,35,52,58,57,71,86,77,50,68,10,11,22,72,48,21,68,77,30,37,66,9,66,98,17,9,24,76,24,15,12},{58,83,35,37,64,27,82,97,91,51,35,39,86,85,22,60,89,14,78,61,60,76,29,21,13,52,79,4,52,96,14,91,26,88,12,54,72,56,27,84,94,23,79,54,6},{95,30,62,38,80,47,92,95,21,51,98,14,68,94,50,51,52,41,37,32,51,53,55,35,7,70,80,12,16,51,13,14,60,45,11,39,60,94},{54,88,92,62,80,72},{25,11,71,39,81,14,43,69,62,18,68,88,22,74,62,78,17,39,40,16,50,98,94,49,40,59,95,89},{48},{29,37,74,25,41,39,11,33,96,85,10,2,23,73,62,93,8,38,61,62,41,59,56,34,34,98,55,82,40,31,13,95},{81,45,51,86,54,85,12},{19,75,88,72,19,52,22,59,57,6,30,55,9,72,36,71},{48,19,30,48,53,12,73,71,45,83,36,92,32,61,28,57,40,11,92,2,41,13,64,81,98,75,96,69,62,17,19,6,52,96,66,72,36,54,6,1,34,62,81},{9,1,27,12,85,33,87,39,62,74,45}},{{80,69,6,27,11,59,18,95,25,93,9,27,26,32,98,17,38,14,76,64,95,93,29,5,12,44,8,37,39,86,82,4,35,16,86,15,92,33,99},{50,22,41,83},{77,41,89,68,74,22,90,11,12,86,37,53,8,95,65,13,84,90,35,82,20,67,29,26,35,38,84,20,57,38,90,16,82,66,23,12,40,54,57,11,16},{27,27,7,39,50,81,9,73,68,92,5,91,97,61,82,7,46,79,88,89,60,14,38,79,52,85,81,25,82,17,99,82,36,27,6},{52,97,39,73,62,35,1,38,84,71,78,84,64,39,61,78,99,20,46,27,3,65,84,40,11,37,83,92,67,2,93,20,24,20,37,49},{26,20,97,14,75,43,99,32,77,73,13,8,84,54,48,67,65,98,75,12,97,42,42,63,35,28,75,75,86,17,70,48,77,31,8,18,50,30,33,40,71,56,5,64,51,33,45,25,97},{41,44,5,95,42,19,71,73,76,32,92,69,48,93,32,30,19,51},{47,36,32,2,28,99,65,84,27,71,83,96,62,21,52,94,27,91,9,85,71,29,24,11,45,40,21,5,15,7,15,81,15,82},{43,67,4,5,90,70,21,72,40,83,24,95,34,4,47,2,93,10,80,15,79,27,60,59,46,49,32,44,45,8,91,85,28,86,64,89,70,94,50},{75,13,2,45,25,44,16,9,48,77,67,63,3,56,84,58,64,34,95,85,82,48,85},{17,74,75,16,65,14,58,60,1,60,23,71,38,37,99,65,34,12,8,25,45,1}},{{91},{14,11,41,41,98,17,76,17,18,65,89,92,17,87,8,41,18,33,7,85,68},{82,59,42,79,36,7,41,36,38,85,94,95,43},{64,55,31,36,78,74,64,36,78,24,84,10,53,75,56,91,31,3,9,19,46,92,11,39,57,63,36,88,99,46,10,71,29,33,62,29,58,98,26},{87,62,3,74,9,3},{36,8,48,42,65,2,32,60,33,55,48,2,69,93,60,49,57,61,78,46,13,40,26,26,71,80,46,65,60,50,89,35,25,19,75,13,80,87,31,93,21,99,74,49,62,65,25},{25},{94,92,53,64,15,57,27,95,4,12,81,49,23,2,50,29,29,19,95,27,77},{27,5,50,22,42,92,98,27,1,3,79,8,57,64,40,6,31,78,91,94,91,31,38,4,30,86,64,92,62,42,8,53,47,56,48,88,6,96,50,61,4,94},{62,80,11},{44,61,44,14,44,3,62,95,69,44,67,29,96,36,88,80,59,35,33,57},{5,96,55,4,54,40,67},{84,76,63,40,53,73,19,94,66,12,46,2,53,42,86,33,83,54,56,49,28,60,84,53,49,53,53,44,50,96},{55,15,82,59,39,39,72,26,57,86,18,32,26,23,37,21,54,10,71,34,95,43,38,85,60,98,28,76,7,49,48,46,59,90,45,30,6,95,15,95,18,55,43,65,76,66},{59,49,3,60,53,36,3,12,67,69,39,89,40,66,78,89,64,86,91,7},{1,95,52},{94,14,8,16,47,59,22,94,74,44,50,4,29,13,26,16,3,45,78,81,70,41,15,82,35,61,89,93,57,7,45,20,85,88,31,33,87,26,73,25,89,10,24,8},{82,90,54,75,16,22,37,57,49,99,83,41,66,75,56,82,55,95,36,74,99,34,70,37,8,39,10,98,20,2,2,45,66},{53,58,37,84,36,26,18,40,67,18,68,17,43,88,40,48,74,59,8,43,93,87,76,35,88,93,75,17,55,21,16,16,24},{85,97,20,99,92,97,55,83,61},{71,3,14,95,1,13,27,7,5,71,78,97,24,25,23,42,55,17,77,28,4,8,3,37,18,24,73,95,48,40,52,76,3,49,16,15,67,55},{82,37,65,71,34},{26,1,83,26,6,99,24,70,94,57,93,88,98,42,42,22,52,56,19,87,16,15,79,51},{2,83,91,20,45,33,5,63,89,17,4,51,12,25,6,73,72,5,26},{32,21,10,56,16,53,11,9,3,42,40,64,1,57,30,49,92,57,19,20,37,35,88,92,88,24},{43,65,42,41},{94,86,30,12,51,64,57,35,20,6,40,86,77,98,90,79,33,31,37,48,13,50,22,53,5,24,12,97,8,10,72,55,99,86,97,18,47},{22,4,24,98,94,9,31,11,64,39,45,37,74,7,6,37,10,43,66,54},{43,73,30,1,66,57,38,76,84,12,22,34,62,8,33,67,20,32,66,91,23,96,14,69,50,66,7,81,65,51,90,92,46,54,66,9,31,63,43,79,73,70,50,40,47,83},{25,40,47,67,93,59,15,6,98,28,49,9,32,97,70,51,20,50,64,40,9,73,61,93,49},{9,86,54,68,29,8,26,74,30,24,62,73,23,98,46,2},{2,34,28,57,29,2,67,78,45,86,23,9,45,63,4,6,1,78,69,46,3,82,68,56,26,7,42,79,98,64,76,6,21,91,68,35,15,50,14,64,20,2},{30,91,56,33,23,48,20,41,98,50,83,21,65,97,30,48,75,17,3,64,22,97,64,99,98,39,6,19,8,98,83,6,12},{98,58,19,21,92,81,71,69,27,39,26,23,65,76,3,4,88,9,46,80,42,45,94,69,24,20,4,94,17,4,99,99,48,38,32,95,63,96,54,87,72,65,49,32,8,42,10,17},{59,84,3,26,22,25,1,61,39,74,94,38,20,5,80,68,80,54,17,33,94,55,28},{62,76,61,55,33,38,86,90,63,72,23,82,42,44,27,87,12,27,79,83,6,25,93,37,40,5,3,53,82,76,81,43,99,79,90,68,96,50,95,40,58,5,96,83,68,72},{70,71,67,68,89,88,47,57,60,48,88,88,54,50,31,62,37,51,44,3,48,42,24,70,92,51},{75,14,18,20,46,3,53,87,48,81,6,80,85,98,88,69,70,18},{79,3,39,97,20,21,82,79,12,93},{21,69,53,54,99,25,12,79,28,40,94,7,48,53,23,6,69,7,21,17,76,47},{50,67,76,80,45,2,97,34,98,70,50,15,60,42,75,47,64,24,77,16},{27,29,77,85,69,51,46,52,69,50,65,83,30,46,56,37,42,59,83,8,29,60,39,79,95,53,26,46,63,42,46,41,24,95,79,74},{30,53,62,3,52,43,20,50,31,40,50,68,41,40,80,66,15,77},{16,42,66,74,37,62,60,45,1,40,59,35,63,12,25,74,63,53,27,37,58,22,12,51,4,2,54,17,48,14,47,45,68,67,83,28,12,39,7,90,75},{45,73,4,90,62,95,57,60,33,13,76,36,24,60,39,5,47,56,92,83,4,6,11,98,51,18,39},{93,85,94,70,30,12,61,71,97,53,94,62,92,42,43,41,94,37,16,87,89,30,16,16,26,44,6,74,53,53,67,58,7,89,31,53,87,87,75,77,5},{42,66,60,49,89,63,51,56,68,74,87,69,5,28,54,3,5,54,89,40,96,36,44,35,4,63,33,78,84,10,86,25}},{{56,83,53,71,33,13,1,84,77,26,59,37,93,34,20},{2,31,43,92,53,5,85,14,13,86,15,78,43,63,34,2,13,2,30,17,32,26,61,58,61,87},{89,95,26,54,50,76,92,86,3,62,86,40,77,32,3,61,12,61,91,78,45,65,32,42,51,62,46,20},{41,8,47,91,48,33,79,48,86},{49,52,28,42,64,32,44,54,4,84,38,52,46,67,70,23,38,53,96,47,99,98,88,54,44,95,65,37,39,91,64,49,81,8,67,70},{62,9,38,62,93,12,29,35,40,64,62,6,40,7,70,83,19,76,38,43,68,82,47,96,71,61,9,82,74,6,84,95,87,24,11,72,90,28,97,75},{60,47,82,39,70,35,93,10,22,67,56,47,11,7,21,48,74,58,9,47,52,8,39,89,64,94,26,62,94,78,8,81,44,58,9,66,21,16,96},{59,23,42,85,84,56,78,56,47,5,37,67,93,7,19,49,62,86,71,42,68,31,46,42,28,42},{62,2,90,86,8,34,20,45,53,71,19,10,53,61,84,13,55,89,79,62,6,5,44,84,4,29,62,63,97,43,66,42,43,35,94,65,8,86,67,12,81,34,55,95,26,77},{25,62},{26,73,20,85,56,2,30,73,94,7,8,86,34,75,59,90,71,62,7,22,12,5,66,63},{22,27,1,54,93,81,58,78,48,48,45,27,80,8,44,74,57,32,85,40,31,2,87,13,51,20,91},{52,80,24,20,66,10,28},{2,33,63,50,88,23,36,38,8,86,92,45},{69,5,59,20,10,58,20,10,50,36,53,29,2,73,15,61,93,26,47,2,82,82,10,3,96,59,42,35},{71,49,46,15,76,7,85,14,59,94,98,54,35,83,53,60,43,73,37,45,6},{17,6,14,10,69,77,43,80,81,54},{27,50,89,67,55,75,49,39,6,19,29,5,71,17,58,55,39,16,71,76,2,23,8,42,55,58,68,12,69,97,71,57,82,55,66,37,67},{54,11,49,78,22,43,23,73,46,51,75,19,80,85,67,68,40,1,22,77,24,15,48,39,7,62,22,44,72,6,6,71,78,57,15,25,26,15,33,9,20,38,9,10},{89,65,67,92,8,53,65,98,56,80,3,83,80,26,96,55,71,34,74},{29,57,95,2,96,41,95,94},{73,93,10,64,5,94,31,53,59,61,2,80,49,3,85,83,59,83,20,46},{86,84,26,57,29,42,15,79,72,89,61,52,58,38,65,23,14,82,61,77,2,40,66,26,20,94,45,78,85,23,29,73,65,76,91,97,41,77,98,66,77,68,70},{41,53,23,59,65,1,18,94,4,28,61,39,81,73,37,44,90},{72,15,95,49,11,56,87,86,79,86,80,39,7,88,54,74,40,31,43,75,51,94,75,60,58,11,20,5,11,10,79,8,57,26,65,13,39,8,82,9,8,48,17,35,71,81},{48,53,33,24,18,93},{94,16,72,19,10,93,84,36,26,38,54,53,87,36,44,20,4,37,9,2,72,77,16,61,2,84,4,56,64,29,25,73,80,62,49,21,14,44,73,47,65,84,33,73,8},{79,10,51,57,62,87,35,83,83,72,59,80,24,6,41,35,82,33,46,99,49,35,31,10,56,14,87,72,12},{3,5,22,51,52,5,81,61,3},{39,72,3,60,30,60,50,66,62,89,54,52,99},{20,79,87,27,69,21,11,34,8,92,23,92,33},{94,87,74,63,4,84,7,87,94,62,56,97,98,52,50,48,24,5,90,32,86,58,3,21,15,22,97,60,39,72,61,72,95,74,10,54,27},{8,48,46,62,49,28,87,10,55,56,48,33,26,54,21,79,87,57,91,84,64,27,56,32,36,47,22,7,32,46,51,74,27,66,13,61,12,52,81,71,50},{81,14,14,8,21,61,31,39,29,51,16,85,44,62,2,71,88,60,78,32,46,17,47,65,78,65,94,18,3,15,9,61,73,3,62,87,1,54,97,61,37,23,65,84,62,33,34,78,23},{3,69,92,41,72,82,69,9,20,32,24,27,15,24,48,54,42,23,91,75,30,15,66,30,93,45,8,94,59,35,94,23,79,84,39,4,24,90,62},{65,19,57,24,78,96,61,40,94,74,33,18,97,68,44,68,82,45,75,44,62,16,65,38,55,61,53,98},{11,90,89,57,89,86,83,87,15,14,76,27,52,22,12,28,4,28,49,67,81,60,29,65,25,2,91,90,34,39,74,91,36,36,11,79,51,15,92,37,27},{96,53,99},{56,55,30,39,79,3,90,99,93,68,16,93,61,76,40,49,87,14,93,90,11,57,81,55,97,17,89,64,96,46,73,38,83,86,14,5,62,39,80,89,16,99},{40,72,2,54,95,50,99,38,16,34,19,50,20,63,1,26,87,79,76,50,54,32,86,26,84,83,45,16,93,90,82,44,81,28,36},{55,78,19,48,3,55,81,47,6,88,8,85,76,94,51,45,3},{68,15,80,27,28,1,40,78,80,85,21,63,27,44,30,60,62,66},{49,42,84,79,26,75,58,2,41,36,85,9,85,6,68,45,63,58,16,87,83,53},{6,21,86,58,48,27,18,73,16,79,51,33,63,26,37,88,48,58,44,32,58,23,31},{87,77,44,15,70,89,36,79,82,3,18,76,37,79,85,97,19,53,17,74,87,58,49,76,10,9,39,36,11,75,99,10,50,70,1,47,36,7},{64,95,33,47,20,98,54,94,1,78,27,75,69,19,73,68},{94,73,97,58,51,89,18,87,72,61,98,24,83,93,13,80,48,78,33,60},{53,81,89,64,14,47,67,85,67,31,45,93,36,54,7,65,5}},{{38,67,78,64,72,89,83,96,92,65,99,92,34,51,57,98,28,57,31,62,49,60,50,81,18,62,6,84,53,52,4,26,54,39,73,75,10,12,99,87,99,24,91,15},{96,97,87,80,9,6,57},{29,78,80,91,74,17,77,10,83,17,53,30,60,61,6,78,59,68,26,24,73,52,36,98,14,32,5,7,74,97,51,65,68,11,80,48,91,66,90,38},{5,88,21,92,18,47,48,56,31,51},{48,88,70,15,82,94,64,98,47,10,14,28,34,18,51,42,33,23,98,38,71,61,72,53,92,28,29,1,11,2,65,86,44,59,4,16,26,2,58,39,32,38,83,10,80},{68,53,68,93,45,41,8,51,53,31,94,54,55,36,46,52,10,35,54,38,41},{12,30,80,25,68,48,8,18,16,88,83,74,53,16,29,43,46,42,46,78,11,10,43,72,69,2,39,66,9},{5,55,58,20,42,42,11,99,42,76,47,67,30,75,5,31,27,45,39,17,86,24,69,95,67,44,28,47,50,40,31,93,63,82},{70,95,37,49,36,56,61,43,25,19,34,21,2,54,63,24,81,3,39,49,4,49,81,78,91,83,97,11,96,14,42,16,69,28,68,98,24,67},{2,18,22,44,77,52,62,24,46,40,44,30,29,49,47,20,85,99,47,16,34,50},{29,42,24,58,44,59,24,48,96,6,88,89,8,86,69,33,79,95,3,2,57,7,91,85,88,79,44,47,98,78,16,15,3,65,41,58,21},{28,8,36,76,17,41,2,67},{67,62,33,39,36,62,95,11,40},{67,38,49,22,76,82,26,78,79,7},{54,6,71,82,1,60,34,89,9,19,97,37,22,37,65,71,21,74,33},{34,1,41,10,87,39,9,70,18,79,41,18,67,28,9,27,81,10,12,66,72,34,99,37},{58,93,24,14,5,35,53,84,61,13,80,22,26,88,87,7,14},{97,9,67,61,4,72,63,91,77,57,14,98,99,20,6,71,66,39,76,80,45,21,82,41,20,88,24,10,11,7,93,38,71,92,40,81,69,15,52,49,54,18,92,33,21,91,21,5},{77,92,26,58,72,55,76,18,13,59,9,12,31,24,36,33,71,87,55,19,42,25,82,66,34},{81,4,22,35,98,59,27,67,72,4,69,88,39,73,55,96,25,56,70,49,88,61,34,20},{66,64,38,47,88,86,78,12,4},{48,13,19,77,49,93,58,15,20,1,98,11,86,96,43,28,87,84,82,16,64,55,99,65,26,85,35,54,17,97,63,12,43,74,65,13},{63,16,94,97,94,85},{5,50,19,79,48,73,85,65,37,95,50,83,33,80,43,87,4,34,96,60,25,44,45,71,25,11,47,5,13,4,90,64,20,98,44,26,61},{20,42,31,16,76,4,88,97,36,81,37,69,43,83},{15,76,8,82,90,32,89,23,24,47,50,61,38,29,27,91,86,78,91,4,79,35,58,25,7,64},{35,71,14,29,11,35,61,21,61,26,27,93,95,77,5,33,94,67,57,61,28,90,60,2,67,94,18,79,62,48,89,61},{93,46,35,32,25,59,87,24,46,98,20,5},{42,77,82,41,35,8,91,12,44,22,91,56,85,79,65,36,3,94,73,75,48,17,96,23,61,6,28,63,33},{75,98,72,69,35,90,42,44,28,64,4,58,76,2,28,33,14,7,98,36,19,52,33,66,35},{88,57,47,21,50,83,48,93,25,25,35,39,34,98,80,22,14,48,64,77,87,56,27,33,15,81,55,72,5,25,2,88,17,73,12,3,92,80,5,8,27,44,50,4,69},{90,94,15,78,79,78,16,22,85,33,39,30,26,22,73,37,25,16,70,62,26,3,30,46,33,68,91,93,26,60,85,45,62,75,2,10,33,7,69,30,29,46,94},{35,58,73,81,93,12,83,37,63,60,89,40,32},{54,63,76,76,77,50,2,53,82,50,46,5,49,37},{77,16,95},{6,66,1,16,10,52,61,28,95,56,49,60,46,75,4,49,9,81,93,5},{93,71,54,16,35,58,91,36,98,76,65,98,45,69,19,1,49,38,85,91,52,9,20,95,38,81,32,1,70,71,50,93,62,3,23,34,35,63,55,62,12,14,3,48,31,35,10,90},{76,14,65,74,49,58,56,26,27,5,22,82,85,18,26,71,71,73,27,9,86,98,78},{97,68,59,18,81,34,52,55,15,59,22,35,64,87,96,23,24,17,30,20,15,16,84,32,32,24,5}},{{2,95,2},{92,62,11,25,66,2,91,54,77,28,94,15,90,63},{1,58,34,7,40,62,94,25,30,33,53,33,92,4,55,4,82,32,62,36,24,84},{54,63,7,55,37,64,44,55,55,28,2,42,97,3,99,99,24,86,84,17,41,87,68,34,17,70,23,84,74,4,78,84,83,48,75},{73,99,81,84,54,2,23,11,8},{75,17,49,12,17,53,58,1,64,83,29,36,96,34,89,62,95,38,41,95,16,31,62,52,2,91,5,90,35,20},{88,82,21,25,94,12,88,85,42,76,59,72,23,20,41,15,5,42,52,45,20},{56,69,48,44,39,97,32,88,70,71,75,39,42,32,45,87,43,9,70,38,39,60,70,19,90,45,57},{80,81,38,79,44,94,9,59,20,31,64,67,70,37,94,68,94,69,26,63,54,2,76,95,27,7,6,32,19,27,44,44,59,81,94,4,92,19,92,14,55,74,2,29,28,98,16,34},{94,5,74,9,55,74,73,32,92,11,90,97},{78,65,56,81,62,51,99,11,94,42,35,94,73,85,75,65,25,27,81,94,3,6,75,5},{10,35,64,71,9,86,93,13,40,23,39,65,48,76,53,5,87,63,62,74,38,90,21,31,38,14,86,61,78,65,96,29,53,81,79,8,36,28,53,60,64,9,35,79,40,69,5,5,56},{63,89,75,22,83,98,97,16,76,2,55,50},{20,98,48,99,69,23,73,99,53,81,74,40,74,71,29,34,51,37,68,96,83,12,97,68,59,34,70},{62,3,97,59,36,26,42,66,92,60,1,80,4,66,9,76,45,41,65,67,87,78,49,60,7,33,53,55},{58,24,52,50,98,4,4,10,32,6,18,71,42,32,27,63,72,18,85,83,45,95,31,97,94,82,39,74,12,85,22,40,34,17,2},{1,48,96,7,6,56,62,88,39,77,5,98,20,69,26,13,57,4,57,64,24,16,27,81,7,49,46,93,13,17,26,13,81,65},{51,47,12,60,89,15,93,53},{21,6,26,25,28,44,73,28,63,27,64,21,50,85,75,44,86,97,34,69,36,27,26,86},{21,3,65,94,90,72,71,83,39,78,41,90,82,70,23,72,99,48,97,87},{56,35,92,24,99,1,5,82,51,68},{72,44,64,59},{77,58,8,45,22,83,81,65,23,56,81},{28,93,96,10,24,13,24,60,37,17,91,54,69,46,8,93,15,96,17,25,75,9,36,76,34,29,8,28,56,8,71,37,20,38,45,47,73,86,52,13,96,90,35,11},{96,29,14,84,59,14,28,52,80,22,10,94,18,67,39,52,72},{17,45,48,54,57,68,56,17,86,24,1,67,87,60,58,98,45,80,32},{84,89,7,59,5,20,40,81,80,5,80}}};
     for (int i =0; i < param0.size(); i+=2 )
        for (int j =0; j < param0[i].size(); ++j )
            for (int k =0; k < param0[i][j].size(); ++k )
                param0[i][j][k]= param0[i][j][k] %2;
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
