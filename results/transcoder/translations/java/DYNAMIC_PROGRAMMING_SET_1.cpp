int fib ( int n ) {
  if ( lookup [ n ] == NIL ) {
    if ( n <= 1 ) {
      lookup [ n ] = n ;
    }
    else {
      lookup [ n ] = fib ( n - 1 ) + fib ( n - 2 ) ;
    }
  }
  return lookup [ n ] ;
}
