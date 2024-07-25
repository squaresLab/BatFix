int findMinX ( int num [ ] , int rem [ ] , int k ) {
  int x = 1 ;
  while ( true ) {
    int j ;
    for ( j = 0 ;
    j < k ;
    j ++ ) if ( x % num [ j ] != rem [ j ] ) break ;
    if ( j == k ) return x ;
    x ++ ;
  }
}
