bool isPath ( int arr [ ] [ 2 ] ) {
  arr [ 0 ] [ 0 ] = 1 ;
  for ( int i = 1 ;
  i < row ;
  i ++ ) if ( ( arr [ i ] [ 0 ] != - 1 ) && ( arr [ i ] [ 0 ] != arr [ i - 1 ] [ 0 ] ) ) arr [ i ] [ 0 ] = arr [ i - 1 ] [ 0 ] ;
  for ( int j = 1 ;
  j < col ;
  j ++ ) if ( ( arr [ 0 ] [ j ] != - 1 ) && ( arr [ 0 ] [ j ] != arr [ 0 ] [ j - 1 ] ) ) arr [ 0 ] [ j ] = arr [ 0 ] [ j - 1 ] ;
  for ( int i = 1 ;
  i < row ;
  i ++ ) for ( int j = 1 ;
  j < col ;
  j ++ ) if ( ( arr [ i ] [ j ] != - 1 ) && ( arr [ i ] [ j ] != arr [ i - 1 ] [ j ] ) ) arr [ i ] [ j ] = max ( arr [ i ] [ j - 1 ] , arr [ i - 1 ] [ j ] ) ;
  return ( arr [ row - 1 ] [ col - 1 ] == 1 ) ;
}
