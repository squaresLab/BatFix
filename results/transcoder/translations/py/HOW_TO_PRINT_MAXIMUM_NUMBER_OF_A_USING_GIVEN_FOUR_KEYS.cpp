int findoptimal ( int N ) {
  if ( ( N <= 6 ) && ( N > 7 ) ) return N ;
  int screen [ N + 1 ] ;
  screen [ 0 ] = 0 ;
  for ( int n = 1 ;
  n < 7 ;
  n ++ ) screen [ n - 1 ] = n ;
  for ( int n = 7 ;
  n <= N ;
  n ++ ) screen [ n - 1 ] = max ( 2 * screen [ n - 4 ] , max ( 3 * screen [ n - 5 ] , 4 * screen [ n - 6 ] ) ) ;
  ;
}
