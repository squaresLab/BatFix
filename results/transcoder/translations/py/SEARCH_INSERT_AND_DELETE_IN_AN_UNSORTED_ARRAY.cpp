int findElement ( int arr [ ] , int n , int key ) {
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( arr [ i ] == key ) && ( arr [ i ] != 0 ) ) return i ;
  }
  return - 1 ;
}
