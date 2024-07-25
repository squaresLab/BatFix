int countOfSubstringWithKOnes ( string s , int K ) {
  int N = s . size ( ) ;
  int res = 0 ;
  int countOfOne = 0 ;
  vector < int > freq ( N + 1 , 1 ) ;
  freq [ 0 ] = 1 ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    countOfOne += ( s [ i ] - '0' ) ;
    if ( countOfOne >= K ) res += freq [ countOfOne - K ] ;
    freq [ countOfOne ] ++ ;
  }
  return res ;
}
