bool checkCount ( int arr [ ] , int n , int k ) {
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int count = 0 ;
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      if ( arr [ j ] == arr [ i ] ) count ++ ;
      if ( count > 2 * k ) return false ;
    }
  }
  return true ;
}
