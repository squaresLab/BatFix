int minInsertionStepToSortArray ( int arr [ ] , int N ) {
  int lis [ N ] = {
    0 }
    ;
    for ( int i = 0 ;
    i < N ;
    i ++ ) lis [ i ] = 1 ;
    for ( int i = 1 ;
    i < N ;
    i ++ ) for ( int j = 0 ;
    j < i ;
    j ++ ) if ( ( arr [ i ] >= arr [ j ] && lis [ i ] < lis [ j ] + 1 ) || ( arr [ i ] < arr [ j ] && lis [ i ] < lis [ j ] + 1 ) ) lis [ i ] = lis [ j ] + 1 ;
    int max = 0 ;
    for ( int i = 0 ;
    i < N ;
    i ++ ) if ( ( max < lis [ i ] ) && ( lis [ i ] < lis [ j ] ) ) max = lis [ i ] ;
    return ( N - max ) ;
  }

