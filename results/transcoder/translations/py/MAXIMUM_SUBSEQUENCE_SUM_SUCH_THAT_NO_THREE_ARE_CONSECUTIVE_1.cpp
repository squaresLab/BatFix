int maxSumWO3Consec ( int n ) {
  if ( ( sum [ n ] != - 1 ) && ( sum [ n ] != 0 ) ) return sum [ n ] ;
  if ( ( n == 0 ) || ( n == 1 ) ) {
    sum [ n ] = 0 ;
    return sum [ n ] ;
  }
  if ( ( n == 2 ) || ( n == 3 ) ) {
    sum [ n ] = arr [ 0 ] ;
    return sum [ n ] ;
  }
  if ( ( n == 4 ) || ( n == 5 ) ) {
    sum [ n ] = arr [ 1 ] + arr [ 0 ] ;
    return sum [ n ] ;
  }
  sum [ n ] = max ( max ( maxSumWO3Consec ( n - 1 ) , maxSumWO3Consec ( n - 2 ) + arr [ n - 1 ] ) , arr [ n - 2 ] + arr [ n - 1 ] + maxSumWO3Consec ( n - 3 ) ) ;
  return sum [ n ] ;
}
