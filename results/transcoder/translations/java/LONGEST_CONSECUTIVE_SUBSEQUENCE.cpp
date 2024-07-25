int findLongestConseqSubseq ( int arr [ ] , int n ) {
  set < int > S ;
  int ans = 0 ;
  for ( int i = 0 ;
  i < n ;
  ++ i ) {
    S . insert ( arr [ i ] ) ;
  }
  for ( int i = 0 ;
  i < n ;
  ++ i ) {
    if ( ! S . count ( arr [ i ] - 1 ) ) {
      int j = arr [ i ] ;
      while ( S . count ( j ) ) {
        ++ j ;
      }
      if ( ans < j - arr [ i ] ) {
        ans = j - arr [ i ] ;
      }
    }
  }
  return ans ;
}
