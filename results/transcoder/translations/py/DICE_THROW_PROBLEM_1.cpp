int findWays ( int f , int d , int s ) {
  int * * mem = new int [ s + 1 ] [ d + 1 ] ;
  for ( int j = 0 ;
  j < d + 1 ;
  j ++ ) {
    mem [ j ] [ 0 ] = 1 ;
  }
  mem [ 0 ] [ 0 ] = 1 ;
  for ( int i = 1 ;
  i <= d ;
  i ++ ) {
    for ( int j = 1 ;
    j <= s ;
    j ++ ) {
      mem [ i ] [ j ] = mem [ i ] [ j - 1 ] + mem [ i - 1 ] [ j - 1 ] ;
      if ( j - f - 1 >= 0 ) {
        mem [ i ] [ j ] -= mem [ i - 1 ] [ j - f - 1 ] ;
      }
    }
  }
  return mem [ d ] [ s ] ;
}
