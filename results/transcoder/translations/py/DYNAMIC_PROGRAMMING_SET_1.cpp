int fib ( int n , int lookup [ ] ) {
  if ( n == 0 || n == 1 ) lookup [ n ] = n ;
  if ( lookup [ n ] == 0 ) lookup [ n ] = fib ( n - 1 , lookup ) + fib ( n - 2 , lookup ) ;
  return lookup [ n ] ;
}
