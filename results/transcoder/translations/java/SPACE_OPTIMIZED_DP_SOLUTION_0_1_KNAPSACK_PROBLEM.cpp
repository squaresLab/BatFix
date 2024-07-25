int KnapSack ( int val [ ] , int wt [ ] , int n , int W ) {
  int mat [ 2 ] [ W + 1 ] ;
  int i = 0 ;
  while ( i < n ) {
    int j = 0 ;
    if ( i % 2 != 0 ) {
      while ( ++ j <= W ) {
        if ( wt [ i ] <= j ) mat [ 1 ] [ j ] = max ( val [ i ] + mat [ 0 ] [ j - wt [ i ] ] , mat [ 0 ] [ j ] ) ;
        else mat [ 1 ] [ j ] = mat [ 0 ] [ j ] ;
      }
    }
    else {
      while ( ++ j <= W ) {
        if ( wt [ i ] <= j ) mat [ 0 ] [ j ] = max ( val [ i ] + mat [ 1 ] [ j - wt [ i ] ] , mat [ 1 ] [ j ] ) ;
        else mat [ 0 ] [ j ] = mat [ 1 ] [ j ] ;
      }
    }
    i ++ ;
  }
  return ( n % 2 != 0 ) ? mat [ 0 ] [ W ] : mat [ 1 ] [ W ] ;
}
