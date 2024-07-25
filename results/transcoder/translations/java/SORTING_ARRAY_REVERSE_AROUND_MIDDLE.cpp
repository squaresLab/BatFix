bool ifPossible ( int arr [ ] , int n ) {
  int copy [ n ] ;
  copy [ 0 ] = arr [ 0 ] ;
  copy [ 1 ] = arr [ 1 ] ;
  copy [ 2 ] = arr [ 2 ] ;
  copy [ 3 ] = arr [ 3 ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ! ( arr [ i ] == copy [ i ] ) && ! ( arr [ n - 1 - i ] == copy [ i ] ) ) return false ;
  }
  return true ;
}
