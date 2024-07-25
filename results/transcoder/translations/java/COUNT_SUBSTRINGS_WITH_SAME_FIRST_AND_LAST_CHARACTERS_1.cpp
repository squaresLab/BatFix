int countSubstringWithEqualEnds ( string s ) {
  int result = 0 ;
  int n = s . size ( ) ;
  int count [ MAX_CHAR ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    count [ s [ i ] - 'a' ] ++ ;
  }
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) {
    result += ( count [ i ] * ( count [ i ] + 1 ) / 2 ) ;
  }
  return result ;
}
