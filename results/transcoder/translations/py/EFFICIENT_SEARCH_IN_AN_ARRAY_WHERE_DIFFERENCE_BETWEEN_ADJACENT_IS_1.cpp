int search ( int arr [ ] , int n , int x ) {
  int i = 0 ;
  while ( ( i <= n - 1 ) && ( arr [ i ] == x ) ) {
    if ( ( arr [ i ] == x ) || ( arr [ i ] == 0 ) ) return i ;
    i += abs ( arr [ i ] - x ) ;
  }
  return - 1 ;
}
