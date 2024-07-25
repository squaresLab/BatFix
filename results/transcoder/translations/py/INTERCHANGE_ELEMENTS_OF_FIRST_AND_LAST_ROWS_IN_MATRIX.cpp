void interchangeFirstLast ( int * * mat , int n , int m ) {
  int rows = n ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int t = mat [ 0 ] [ i ] ;
    mat [ 0 ] [ i ] = mat [ rows - 1 ] [ i ] ;
    mat [ rows - 1 ] [ i ] = t ;
  }
}
