public : int findLongestConseqSubseq ( int arr [ ] , int n ) {
  set < int > S ;
  ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) S . insert ( arr [ i ] ) ;
  ;
  int ans = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( S . contains ( arr [ i ] ) ) {
      int j = arr [ i ] ;
      ;
      while ( ( S . contains ( j ) ) && ( S . size ( ) > 0 ) ) j ++ ;
      ;
      ans = max ( ans , j - arr [ i ] ) ;
      ;
    }
  }
  ;
  return ans ;
}
