bool checkForSorting ( int arr [ ] , int n ) {
  for ( int i = 0 ;
  i <= n - 1 ;
  i ++ ) {
    if ( ( arr [ i ] > arr [ i + 1 ] ) && ( arr [ i ] - arr [ i + 1 ] == 1 ) ) {
      if ( ( arr [ i ] - arr [ i + 1 ] == 1 ) && ( arr [ i ] > arr [ i + 1 ] ) ) {
        arr [ i ] = arr [ i + 1 ] ;
        arr [ i + 1 ] = arr [ i ] ;
      }
      else return false ;
    }
  }
  return true ;
}
