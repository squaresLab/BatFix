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
int f_gold ( string str [ ], int n ) {
  unordered_map < string, int > m;
  for ( int i = 0;
  i < n;
  i ++ ) m [ str [ i ] ] += 1;
  int res = 0;
  for ( auto it = m . begin ( );
  it != m . end ( );
  it ++ ) if ( ( it -> second == 2 ) ) res ++;
  return res;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled(std::string stri, int n) {
    map<std::string, int> m;
    for (int i = 0; i < n; i++)
        if(env_var_0 == 0) { isupper( i ); }
        if(env_var_0 == 1) { isupper( n ); }
        if(env_var_0 == 2) { isupper( stri[i] ); }
        if(env_var_0 == 3) { isupper( stri[n] ); }
        if(env_var_0 == 4) { m.at( stri ); }
        if(env_var_0 == 5) { m.count( stri ); }
        if(env_var_0 == 6) { m.equal_range( stri ); }
        if(env_var_0 == 7) { m.erase( stri ); }
        if(env_var_0 == 8) { m.find( stri ); }
        if(env_var_0 == 9) { m.lower_bound( stri ); }
        if(env_var_0 == 10) { m.swap( m ); }
        if(env_var_0 == 11) { m.upper_bound( stri ); }
        if(env_var_0 == 12) { std::max( i,i ); }
        if(env_var_0 == 13) { std::max( i,n ); }
        if(env_var_0 == 14) { std::max( i,stri[i] ); }
        if(env_var_0 == 15) { std::max( i,stri[n] ); }
        if(env_var_0 == 16) { std::max( n,i ); }
        if(env_var_0 == 17) { std::max( n,n ); }
        if(env_var_0 == 18) { std::max( n,stri[i] ); }
        if(env_var_0 == 19) { std::max( n,stri[n] ); }
        if(env_var_0 == 20) { std::max( stri[i],i ); }
        if(env_var_0 == 21) { std::max( stri[i],n ); }
        if(env_var_0 == 22) { std::max( stri[i],stri[i] ); }
        if(env_var_0 == 23) { std::max( stri[i],stri[n] ); }
        if(env_var_0 == 24) { std::max( stri[n],i ); }
        if(env_var_0 == 25) { std::max( stri[n],n ); }
        if(env_var_0 == 26) { std::max( stri[n],stri[i] ); }
        if(env_var_0 == 27) { std::max( stri[n],stri[n] ); }
        if(env_var_0 == 28) { std::min( i,i ); }
        if(env_var_0 == 29) { std::min( i,n ); }
        if(env_var_0 == 30) { std::min( i,stri[i] ); }
        if(env_var_0 == 31) { std::min( i,stri[n] ); }
        if(env_var_0 == 32) { std::min( n,i ); }
        if(env_var_0 == 33) { std::min( n,n ); }
        if(env_var_0 == 34) { std::min( n,stri[i] ); }
        if(env_var_0 == 35) { std::min( n,stri[n] ); }
        if(env_var_0 == 36) { std::min( stri[i],i ); }
        if(env_var_0 == 37) { std::min( stri[i],n ); }
        if(env_var_0 == 38) { std::min( stri[i],stri[i] ); }
        if(env_var_0 == 39) { std::min( stri[i],stri[n] ); }
        if(env_var_0 == 40) { std::min( stri[n],i ); }
        if(env_var_0 == 41) { std::min( stri[n],n ); }
        if(env_var_0 == 42) { std::min( stri[n],stri[i] ); }
        if(env_var_0 == 43) { std::min( stri[n],stri[n] ); }
        if(env_var_0 == 44) { stri.__append_default_init( i ); }
        if(env_var_0 == 45) { stri.__append_default_init( n ); }
        if(env_var_0 == 46) { stri.__append_default_init( stri[i] ); }
        if(env_var_0 == 47) { stri.__append_default_init( stri[n] ); }
        if(env_var_0 == 48) { stri.__resize_default_init( i ); }
        if(env_var_0 == 49) { stri.__resize_default_init( n ); }
        if(env_var_0 == 50) { stri.__resize_default_init( stri[i] ); }
        if(env_var_0 == 51) { stri.__resize_default_init( stri[n] ); }
        if(env_var_0 == 52) { stri.__shrink_or_extend( i ); }
        if(env_var_0 == 53) { stri.__shrink_or_extend( n ); }
        if(env_var_0 == 54) { stri.__shrink_or_extend( stri[i] ); }
        if(env_var_0 == 55) { stri.__shrink_or_extend( stri[n] ); }
        if(env_var_0 == 56) { stri.append( stri ); }
        if(env_var_0 == 57) { stri.assign( stri ); }
        if(env_var_0 == 58) { stri.at( i ); }
        if(env_var_0 == 59) { stri.at( n ); }
        if(env_var_0 == 60) { stri.at( stri[i] ); }
        if(env_var_0 == 61) { stri.at( stri[n] ); }
        if(env_var_0 == 62) { stri.compare( stri ); }
        if(env_var_0 == 63) { stri.push_back( i ); }
        if(env_var_0 == 64) { stri.push_back( n ); }
        if(env_var_0 == 65) { stri.push_back( stri[i] ); }
        if(env_var_0 == 66) { stri.push_back( stri[n] ); }
        if(env_var_0 == 67) { stri.reserve( i ); }
        if(env_var_0 == 68) { stri.reserve( n ); }
        if(env_var_0 == 69) { stri.reserve( stri[i] ); }
        if(env_var_0 == 70) { stri.reserve( stri[n] ); }
        if(env_var_0 == 71) { stri.resize( i ); }
        if(env_var_0 == 72) { stri.resize( n ); }
        if(env_var_0 == 73) { stri.resize( stri[i] ); }
        if(env_var_0 == 74) { stri.resize( stri[n] ); }
        if(env_var_0 == 75) { stri.swap( stri ); }
        if(env_var_0 == 76) { toupper( i ); }
        if(env_var_0 == 77) { toupper( n ); }
        if(env_var_0 == 78) { toupper( stri[i] ); }
        if(env_var_0 == 79) { toupper( stri[n] ); }
        ;
    int res = 0;
    return res;
}






int main() {
    int n_success = 0;
    vector<vector<string>> param0 {
    {"hate", "love", "peace", "love", "peace", "hate", "love", "peace", "love", "peace"},
    {"16","946613197072","532052","42780833","511552","1241934","4","3444540","47487223670074","23753","14158","4","95420017116714","16","0845","689000748","976403809728","8922","487784120896","329","611","59101","611","2131059721","53952148295020","445948587","3905249775372","4683180907","7169093","01413852276627","63","5864","40862536595","2280304422294","930028582","05","33447"},
    {"001000100000","1010","01011","11","011","1010"},
    {"Om", "Om", "Shankar", "Tripathi", "Tom", "Jerry", "Jerry"},
    {"2","644","2","42484637089","81578664","0778"},
    {"001000101","011010","1","101010011","011010","01","10111000101","0","1","00101101","0","0"},
    {"kl","p sH","PwCPMPu","tQoIgPpk","wtsNP WjS","kl ","TXsFWgU","kl","AD","NjjTyFGwNWZcB","jpFQslbGbDI","cEpGAgvpk","EMaDkMOm","YZuNZgfwDIjG","k","hJx jHmGpQYwQP","CIETe","RH","Pj","h","DInR","AEsqOvliQtz","NwzHTALTt LS","LwLR","WvDCzlQF","soJb","WktoldCbWyTO","pIdRJxY","BmpWxjOwTXkjjL","zmtCiQ","g","yBmDW","QhaBZrQnOJaAJ","u","MGTwCKve","UxYQrONag","xsGSz","dqNPTT","U W","ygJKvCEKDClby","M","yXJQHxjyDQDLkT","oJmaREOEk YA","zUwiwhSMdiC","jYgZEktcdgLD","fwyTAAW","GENttdzeGY "},
    {"938","074209","0949093096","218622476","71692175","0714","81217924991","74016430795374","52213147","338","939","798161500954","90528060774015","68715","75810","43450","8017","0193164","5945740","212","4589289","2912211026","0","49","8230114","0733435391403","5429","10070"},
    {"00","0","00","0101111010100","110"},
    {"g","h","ok","h","ok","sqozuC","ut","ZwRcG","ok","MR","jHrWyy","qaJlrokgRHuZH","LjPNzDUKszYmCq","g","ZGjLfMnyAGL","kEZoSxOMEWSFpw","IFtqNaDVnG","iJoJXl","vjrQMyWor","FTEHZqbHGlmHph","QeSdzm","nPostKHkigyJt","mOSekk"}};
    vector<int> param1 {10,32,6,7,6,12,43,20,4,15};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),param1[i]) == f_gold(&param0[i].front(),param1[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
