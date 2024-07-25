bool isProduct ( int arr [ ] , int n , int x ) {
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      if ( arr [ i ] * arr [ j ] == x ) return true ;
    }
  }
  return false ;
}
