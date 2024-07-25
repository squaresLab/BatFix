public : int sumOfSubstrings ( string num ) {
  int n = num . size ( ) ;
  vector < int > sumofdigit ;
  sumofdigit . push_back ( atoi ( num . c_str ( ) ) ) ;
  int res = sumofdigit [ 0 ] ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    int numi = atoi ( num . c_str ( ) ) ;
    sumofdigit . push_back ( ( i + 1 ) * numi + 10 * sumofdigit [ i - 1 ] ) ;
    res += sumofdigit [ i ] ;
  }
  return res ;
}
