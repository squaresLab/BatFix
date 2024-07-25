void removeDuplicates ( vector < int > & S ) {
  int n = S . size ( ) ;
  if ( ( n < 2 ) || ( n > n ) ) return ;
  int j = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( S [ j ] != S [ i ] ) && ( S [ j ] != S [ i ] ) ) {
      j ++ ;
      S [ j ] = S [ i ] ;
    }
  }
  j ++ ;
  S . erase ( S . begin ( ) + j , S . begin ( ) + j + 1 ) ;
}
