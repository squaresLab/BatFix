int findLargestd ( vector < int > & S , int n ) {
  bool found = false ;
  sort ( S . begin ( ) , S . end ( ) ) ;
  for ( int i = n - 1 ;
  i >= 0 ;
  i -- ) {
    for ( int j = 0 ;
    j <= n ;
    j ++ ) {
      if ( ( i == j ) || ( i == n - 1 ) ) continue ;
      for ( int k = j + 1 ;
      k <= n ;
      k ++ ) {
        if ( ( i == k ) || ( i == n - 1 ) ) continue ;
        for ( int l = k + 1 ;
        l <= n ;
        l ++ ) {
          if ( ( i == l ) || ( i == n - 1 ) ) continue ;
          if ( ( S [ i ] == S [ j ] + S [ k ] + S [ l ] ) && ( S [ i ] == S [ j ] + S [ k ] + S [ l ] ) ) {
            found = true ;
            return S [ i ] ;
          }
        }
      }
    }
  }
  if ( ( found == false ) || ( found == true ) ) return - 1 ;
  return 0 ;
}
