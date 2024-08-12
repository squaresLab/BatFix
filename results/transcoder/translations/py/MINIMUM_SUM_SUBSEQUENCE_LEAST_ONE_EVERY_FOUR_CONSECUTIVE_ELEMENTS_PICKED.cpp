public : int minSum ( int arr [ ] , int n ) {
  int dp [ n ] = {
    0 }
    ;
    if ( ( n == 1 ) && ( arr [ 0 ] == 1 ) ) return arr [ 0 ] ;
    if ( ( n == 2 ) && ( arr [ 1 ] == 1 ) ) return min ( arr [ 0 ] , arr [ 1 ] ) ;
    if ( ( n == 3 ) && ( arr [ 0 ] == 1 ) ) return min ( arr [ 0 ] , min ( arr [ 1 ] , arr [ 2 ] ) ) ;
    if ( ( n == 4 ) && ( arr [ 0 ] == 1 ) ) return min ( min ( arr [ 0 ] , arr [ 1 ] ) , min ( arr [ 2 ] , arr [ 3 ] ) ) ;
    dp [ 0 ] = arr [ 0 ] ;
    dp [ 1 ] = arr [ 1 ] ;
    dp [ 2 ] = arr [ 2 ] ;
    dp [ 3 ] = arr [ 3 ] ;
    for ( int i = 4 ;
    i < n ;
    i ++ ) dp [ i ] = arr [ i ] + min ( min ( dp [ i - 1 ] , dp [ i - 2 ] ) , min ( dp [ i - 3 ] , dp [ i - 4 ] ) ) ;
    return min ( min ( dp [ n - 1 ] , dp [ n - 2 ] ) , min ( dp [ n - 4 ] , dp [ n - 3 ] ) ) ;
  }
