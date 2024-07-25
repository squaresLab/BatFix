void computeTotient ( int n ) {
  int * phi = new int [ n + 2 ] ;
  for ( int i = 0 ;
  i < n + 2 ;
  i ++ ) {
    phi [ i ] = 0 ;
  }
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    phi [ i ] = i ;
  }
  for ( int p = 2 ;
  p <= n ;
  p ++ ) {
    if ( ( phi [ p ] == p ) && ( phi [ p ] != 0 ) ) {
      phi [ p ] = p - 1 ;
      for ( int i = 2 * p ;
      i <= n ;
      i += p ) {
        phi [ i ] = ( phi [ i ] / p ) * ( p - 1 ) ;
      }
    }
  }
  foriinrange ( 1 , n + 1 ) {
    cout << "Totient of " << i << " is " << phi [ i ] << endl ;
  }
}
