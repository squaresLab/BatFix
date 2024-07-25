int findLongestConseqSubseq ( int arr [ ] , int n ) {
  set < int > S ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    S . insert ( arr [ i ] ) ;
  }
  int ans = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( S . count ( arr [ i ] ) ) {
      int j = arr [ i ] ;
      while ( S . count ( j ) ) {
        j ++ ;
      }
      ans = max ( ans , j - arr [ i ] ) ;
    }
  }
  return ans ;
}
