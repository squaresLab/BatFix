int maxSumWO3Consec ( int n ) {
  if ( sum [ n ] != - 1 ) return sum [ n ] ;
  if ( n == 0 ) return sum [ n ] = 0 ;
  if ( n == 1 ) return sum [ n ] = arr [ 0 ] ;
  if ( n == 2 ) return sum [ n ] = arr [ 1 ] + arr [ 0 ] ;
  return sum [ n ] = max ( max ( maxSumWO3Consec ( n - 1 ) , maxSumWO3Consec ( n - 2 ) + arr [ n - 1 ] ) , arr [ n - 2 ] + arr [ n - 1 ] + maxSumWO3Consec ( n - 3 ) ) ;
}
