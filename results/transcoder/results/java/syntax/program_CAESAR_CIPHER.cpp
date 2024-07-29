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
typedef string StringBuffer;
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


int foo;
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
StringBuffer f_filled ( const char * text, int s ) {
  StringBuffer result;
  for ( int i = 0;
  i < strlen ( text );
  i ++ ) {
    if ( isupper ( text [ i ] ) ) {
      char ch = ( char ) ( ( ( int ) text [ i ] + s - 65 ) % 26 + 65 );
      if(env_var_0 == 0) { isupper( ch ); }
      if(env_var_0 == 1) { isupper( i ); }
      if(env_var_0 == 2) { isupper( s ); }
      if(env_var_0 == 3) { isupper( text[i] ); }
      if(env_var_0 == 4) { isupper( text[s] ); }
      if(env_var_0 == 5) { result.__append_default_init( ch ); }
      if(env_var_0 == 6) { result.__append_default_init( i ); }
      if(env_var_0 == 7) { result.__append_default_init( s ); }
      if(env_var_0 == 8) { result.__append_default_init( text[i] ); }
      if(env_var_0 == 9) { result.__append_default_init( text[s] ); }
      if(env_var_0 == 10) { result.__resize_default_init( ch ); }
      if(env_var_0 == 11) { result.__resize_default_init( i ); }
      if(env_var_0 == 12) { result.__resize_default_init( s ); }
      if(env_var_0 == 13) { result.__resize_default_init( text[i] ); }
      if(env_var_0 == 14) { result.__resize_default_init( text[s] ); }
      if(env_var_0 == 15) { result.__shrink_or_extend( ch ); }
      if(env_var_0 == 16) { result.__shrink_or_extend( i ); }
      if(env_var_0 == 17) { result.__shrink_or_extend( s ); }
      if(env_var_0 == 18) { result.__shrink_or_extend( text[i] ); }
      if(env_var_0 == 19) { result.__shrink_or_extend( text[s] ); }
      if(env_var_0 == 20) { result.append( result ); }
      if(env_var_0 == 21) { result.append( text ); }
      if(env_var_0 == 22) { result.append( text+i ); }
      if(env_var_0 == 23) { result.append( text+s ); }
      if(env_var_0 == 24) { result.assign( result ); }
      if(env_var_0 == 25) { result.assign( text ); }
      if(env_var_0 == 26) { result.assign( text+i ); }
      if(env_var_0 == 27) { result.assign( text+s ); }
      if(env_var_0 == 28) { result.at( ch ); }
      if(env_var_0 == 29) { result.at( i ); }
      if(env_var_0 == 30) { result.at( s ); }
      if(env_var_0 == 31) { result.at( text[i] ); }
      if(env_var_0 == 32) { result.at( text[s] ); }
      if(env_var_0 == 33) { result.compare( result ); }
      if(env_var_0 == 34) { result.compare( text ); }
      if(env_var_0 == 35) { result.compare( text+i ); }
      if(env_var_0 == 36) { result.compare( text+s ); }
      if(env_var_0 == 37) { result.push_back( ch ); }
      if(env_var_0 == 38) { result.push_back( i ); }
      if(env_var_0 == 39) { result.push_back( s ); }
      if(env_var_0 == 40) { result.push_back( text[i] ); }
      if(env_var_0 == 41) { result.push_back( text[s] ); }
      if(env_var_0 == 42) { result.reserve( ch ); }
      if(env_var_0 == 43) { result.reserve( i ); }
      if(env_var_0 == 44) { result.reserve( s ); }
      if(env_var_0 == 45) { result.reserve( text[i] ); }
      if(env_var_0 == 46) { result.reserve( text[s] ); }
      if(env_var_0 == 47) { result.resize( ch ); }
      if(env_var_0 == 48) { result.resize( i ); }
      if(env_var_0 == 49) { result.resize( s ); }
      if(env_var_0 == 50) { result.resize( text[i] ); }
      if(env_var_0 == 51) { result.resize( text[s] ); }
      if(env_var_0 == 52) { result.swap( result ); }
      if(env_var_0 == 53) { std::max( ch,ch ); }
      if(env_var_0 == 54) { std::max( ch,i ); }
      if(env_var_0 == 55) { std::max( ch,s ); }
      if(env_var_0 == 56) { std::max( ch,text[i] ); }
      if(env_var_0 == 57) { std::max( ch,text[s] ); }
      if(env_var_0 == 58) { std::max( i,ch ); }
      if(env_var_0 == 59) { std::max( i,i ); }
      if(env_var_0 == 60) { std::max( i,s ); }
      if(env_var_0 == 61) { std::max( i,text[i] ); }
      if(env_var_0 == 62) { std::max( i,text[s] ); }
      if(env_var_0 == 63) { std::max( s,ch ); }
      if(env_var_0 == 64) { std::max( s,i ); }
      if(env_var_0 == 65) { std::max( s,s ); }
      if(env_var_0 == 66) { std::max( s,text[i] ); }
      if(env_var_0 == 67) { std::max( s,text[s] ); }
      if(env_var_0 == 68) { std::max( text[i],ch ); }
      if(env_var_0 == 69) { std::max( text[i],i ); }
      if(env_var_0 == 70) { std::max( text[i],s ); }
      if(env_var_0 == 71) { std::max( text[i],text[i] ); }
      if(env_var_0 == 72) { std::max( text[i],text[s] ); }
      if(env_var_0 == 73) { std::max( text[s],ch ); }
      if(env_var_0 == 74) { std::max( text[s],i ); }
      if(env_var_0 == 75) { std::max( text[s],s ); }
      if(env_var_0 == 76) { std::max( text[s],text[i] ); }
      if(env_var_0 == 77) { std::max( text[s],text[s] ); }
      if(env_var_0 == 78) { std::min( ch,ch ); }
      if(env_var_0 == 79) { std::min( ch,i ); }
      if(env_var_0 == 80) { std::min( ch,s ); }
      if(env_var_0 == 81) { std::min( ch,text[i] ); }
      if(env_var_0 == 82) { std::min( ch,text[s] ); }
      if(env_var_0 == 83) { std::min( i,ch ); }
      if(env_var_0 == 84) { std::min( i,i ); }
      if(env_var_0 == 85) { std::min( i,s ); }
      if(env_var_0 == 86) { std::min( i,text[i] ); }
      if(env_var_0 == 87) { std::min( i,text[s] ); }
      if(env_var_0 == 88) { std::min( s,ch ); }
      if(env_var_0 == 89) { std::min( s,i ); }
      if(env_var_0 == 90) { std::min( s,s ); }
      if(env_var_0 == 91) { std::min( s,text[i] ); }
      if(env_var_0 == 92) { std::min( s,text[s] ); }
      if(env_var_0 == 93) { std::min( text[i],ch ); }
      if(env_var_0 == 94) { std::min( text[i],i ); }
      if(env_var_0 == 95) { std::min( text[i],s ); }
      if(env_var_0 == 96) { std::min( text[i],text[i] ); }
      if(env_var_0 == 97) { std::min( text[i],text[s] ); }
      if(env_var_0 == 98) { std::min( text[s],ch ); }
      if(env_var_0 == 99) { std::min( text[s],i ); }
      if(env_var_0 == 100) { std::min( text[s],s ); }
      if(env_var_0 == 101) { std::min( text[s],text[i] ); }
      if(env_var_0 == 102) { std::min( text[s],text[s] ); }
      if(env_var_0 == 103) { toupper( ch ); }
      if(env_var_0 == 104) { toupper( i ); }
      if(env_var_0 == 105) { toupper( s ); }
      if(env_var_0 == 106) { toupper( text[i] ); }
      if(env_var_0 == 107) { toupper( text[s] ); }
      ;
    }
    else {
      char ch = ( char ) ( ( ( int ) text [ i ] + s - 97 ) % 26 + 97 );
      if(env_var_1 == 0) { isupper( ch ); }
      if(env_var_1 == 1) { isupper( i ); }
      if(env_var_1 == 2) { isupper( s ); }
      if(env_var_1 == 3) { isupper( text[i] ); }
      if(env_var_1 == 4) { isupper( text[s] ); }
      if(env_var_1 == 5) { result.__append_default_init( ch ); }
      if(env_var_1 == 6) { result.__append_default_init( i ); }
      if(env_var_1 == 7) { result.__append_default_init( s ); }
      if(env_var_1 == 8) { result.__append_default_init( text[i] ); }
      if(env_var_1 == 9) { result.__append_default_init( text[s] ); }
      if(env_var_1 == 10) { result.__resize_default_init( ch ); }
      if(env_var_1 == 11) { result.__resize_default_init( i ); }
      if(env_var_1 == 12) { result.__resize_default_init( s ); }
      if(env_var_1 == 13) { result.__resize_default_init( text[i] ); }
      if(env_var_1 == 14) { result.__resize_default_init( text[s] ); }
      if(env_var_1 == 15) { result.__shrink_or_extend( ch ); }
      if(env_var_1 == 16) { result.__shrink_or_extend( i ); }
      if(env_var_1 == 17) { result.__shrink_or_extend( s ); }
      if(env_var_1 == 18) { result.__shrink_or_extend( text[i] ); }
      if(env_var_1 == 19) { result.__shrink_or_extend( text[s] ); }
      if(env_var_1 == 20) { result.append( result ); }
      if(env_var_1 == 21) { result.append( text ); }
      if(env_var_1 == 22) { result.append( text+i ); }
      if(env_var_1 == 23) { result.append( text+s ); }
      if(env_var_1 == 24) { result.assign( result ); }
      if(env_var_1 == 25) { result.assign( text ); }
      if(env_var_1 == 26) { result.assign( text+i ); }
      if(env_var_1 == 27) { result.assign( text+s ); }
      if(env_var_1 == 28) { result.at( ch ); }
      if(env_var_1 == 29) { result.at( i ); }
      if(env_var_1 == 30) { result.at( s ); }
      if(env_var_1 == 31) { result.at( text[i] ); }
      if(env_var_1 == 32) { result.at( text[s] ); }
      if(env_var_1 == 33) { result.compare( result ); }
      if(env_var_1 == 34) { result.compare( text ); }
      if(env_var_1 == 35) { result.compare( text+i ); }
      if(env_var_1 == 36) { result.compare( text+s ); }
      if(env_var_1 == 37) { result.push_back( ch ); }
      if(env_var_1 == 38) { result.push_back( i ); }
      if(env_var_1 == 39) { result.push_back( s ); }
      if(env_var_1 == 40) { result.push_back( text[i] ); }
      if(env_var_1 == 41) { result.push_back( text[s] ); }
      if(env_var_1 == 42) { result.reserve( ch ); }
      if(env_var_1 == 43) { result.reserve( i ); }
      if(env_var_1 == 44) { result.reserve( s ); }
      if(env_var_1 == 45) { result.reserve( text[i] ); }
      if(env_var_1 == 46) { result.reserve( text[s] ); }
      if(env_var_1 == 47) { result.resize( ch ); }
      if(env_var_1 == 48) { result.resize( i ); }
      if(env_var_1 == 49) { result.resize( s ); }
      if(env_var_1 == 50) { result.resize( text[i] ); }
      if(env_var_1 == 51) { result.resize( text[s] ); }
      if(env_var_1 == 52) { result.swap( result ); }
      if(env_var_1 == 53) { std::max( ch,ch ); }
      if(env_var_1 == 54) { std::max( ch,i ); }
      if(env_var_1 == 55) { std::max( ch,s ); }
      if(env_var_1 == 56) { std::max( ch,text[i] ); }
      if(env_var_1 == 57) { std::max( ch,text[s] ); }
      if(env_var_1 == 58) { std::max( i,ch ); }
      if(env_var_1 == 59) { std::max( i,i ); }
      if(env_var_1 == 60) { std::max( i,s ); }
      if(env_var_1 == 61) { std::max( i,text[i] ); }
      if(env_var_1 == 62) { std::max( i,text[s] ); }
      if(env_var_1 == 63) { std::max( s,ch ); }
      if(env_var_1 == 64) { std::max( s,i ); }
      if(env_var_1 == 65) { std::max( s,s ); }
      if(env_var_1 == 66) { std::max( s,text[i] ); }
      if(env_var_1 == 67) { std::max( s,text[s] ); }
      if(env_var_1 == 68) { std::max( text[i],ch ); }
      if(env_var_1 == 69) { std::max( text[i],i ); }
      if(env_var_1 == 70) { std::max( text[i],s ); }
      if(env_var_1 == 71) { std::max( text[i],text[i] ); }
      if(env_var_1 == 72) { std::max( text[i],text[s] ); }
      if(env_var_1 == 73) { std::max( text[s],ch ); }
      if(env_var_1 == 74) { std::max( text[s],i ); }
      if(env_var_1 == 75) { std::max( text[s],s ); }
      if(env_var_1 == 76) { std::max( text[s],text[i] ); }
      if(env_var_1 == 77) { std::max( text[s],text[s] ); }
      if(env_var_1 == 78) { std::min( ch,ch ); }
      if(env_var_1 == 79) { std::min( ch,i ); }
      if(env_var_1 == 80) { std::min( ch,s ); }
      if(env_var_1 == 81) { std::min( ch,text[i] ); }
      if(env_var_1 == 82) { std::min( ch,text[s] ); }
      if(env_var_1 == 83) { std::min( i,ch ); }
      if(env_var_1 == 84) { std::min( i,i ); }
      if(env_var_1 == 85) { std::min( i,s ); }
      if(env_var_1 == 86) { std::min( i,text[i] ); }
      if(env_var_1 == 87) { std::min( i,text[s] ); }
      if(env_var_1 == 88) { std::min( s,ch ); }
      if(env_var_1 == 89) { std::min( s,i ); }
      if(env_var_1 == 90) { std::min( s,s ); }
      if(env_var_1 == 91) { std::min( s,text[i] ); }
      if(env_var_1 == 92) { std::min( s,text[s] ); }
      if(env_var_1 == 93) { std::min( text[i],ch ); }
      if(env_var_1 == 94) { std::min( text[i],i ); }
      if(env_var_1 == 95) { std::min( text[i],s ); }
      if(env_var_1 == 96) { std::min( text[i],text[i] ); }
      if(env_var_1 == 97) { std::min( text[i],text[s] ); }
      if(env_var_1 == 98) { std::min( text[s],ch ); }
      if(env_var_1 == 99) { std::min( text[s],i ); }
      if(env_var_1 == 100) { std::min( text[s],s ); }
      if(env_var_1 == 101) { std::min( text[s],text[i] ); }
      if(env_var_1 == 102) { std::min( text[s],text[s] ); }
      if(env_var_1 == 103) { toupper( ch ); }
      if(env_var_1 == 104) { toupper( i ); }
      if(env_var_1 == 105) { toupper( s ); }
      if(env_var_1 == 106) { toupper( text[i] ); }
      if(env_var_1 == 107) { toupper( text[s] ); }
      ;
    }
  }
  return result;
}



string f_filled_inner(string param0, int param1)
{
char char_arr_param0[param0.length() + 1];
strcpy(char_arr_param0, param0.c_str());
return  f_filled(char_arr_param0,param1);
}

int main() {
    int n_success = 0;
    vector<string> param0 {"LsvbpcviVPwq","35225904","010010","QnYd","2571694","101101011010","jb","928874","11","FbvbkMb"};
    vector<int> param1 {15,2,36,44,11,94,22,83,93,37};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled_inner(param0[i],param1[i]) == f_gold(param0[i],param1[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
