int findMinX ( int * num , int * rem , int k ) {
  int x = 1 ;
  ;
  while ( ( true ) ) {
    int j = 0 ;
    ;
    while ( ( j < k ) && ( x % num [ j ] != rem [ j ] ) ) {
      if ( ( x % num [ j ] != rem [ j ] ) && ( j < k ) ) break ;
      j ++ ;
    }
    if ( ( j == k ) || ( j == k ) ) return x ;
    x ++ ;
  }
}
