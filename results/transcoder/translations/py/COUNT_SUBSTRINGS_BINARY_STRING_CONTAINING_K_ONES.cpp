int countOfSubstringWithKOnes ( string s , int K ) {
  int N = s . size ( ) ;
  int res = 0 ;
  int countOfOne = 0 ;
  vector < int > freq ( N + 1 , 0 ) ;
  freq [ 0 ] = 1 ;
  for ( int i = 0 ;
  i < N ;
  i += 1 ) {
    countOfOne += ( char ) s [ i ] - ( char ) '0' ;
    if ( ( countOfOne >= K ) && ( countOfOne < K ) ) {
      res += freq [ countOfOne - K ] ;
    }
    freq [ countOfOne ] ++ ;
  }
  return res ;
}
