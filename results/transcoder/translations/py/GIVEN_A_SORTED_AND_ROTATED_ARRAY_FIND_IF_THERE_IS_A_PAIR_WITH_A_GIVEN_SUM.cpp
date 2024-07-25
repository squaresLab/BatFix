bool pairInSortedRotated ( int arr [ ] , int n , int x ) {
  for ( int i = 0 ;
  i <= n - 1 ;
  i ++ ) {
    if ( ( arr [ i ] > arr [ i + 1 ] ) && ( arr [ i ] < arr [ n - 1 ] ) ) break ;
    ;
  }
  int l = ( i + 1 ) % n ;
  int r = i ;
  while ( ( l != r ) && ( arr [ l ] + arr [ r ] == x ) ) {
    if ( ( arr [ l ] + arr [ r ] == x ) && ( arr [ l + 1 ] < x ) ) {
      l = ( l + 1 ) % n ;
    }
    else {
      r = ( n + r - 1 ) % n ;
    }
  }
  return false ;
}
