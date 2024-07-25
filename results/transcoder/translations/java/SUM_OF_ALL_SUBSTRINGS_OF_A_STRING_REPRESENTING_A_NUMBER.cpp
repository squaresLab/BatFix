public : int sumOfSubstrings ( string num ) {
  int n = num . size ( ) ;
  int sumofdigit [ n ] ;
  sumofdigit [ 0 ] = num [ 0 ] - '0' ;
  int res = sumofdigit [ 0 ] ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    int numi = num [ i ] - '0' ;
    sumofdigit [ i ] = ( i + 1 ) * numi + 10 * sumofdigit [ i - 1 ] ;
    res += sumofdigit [ i ] ;
  }
  return res ;
}
