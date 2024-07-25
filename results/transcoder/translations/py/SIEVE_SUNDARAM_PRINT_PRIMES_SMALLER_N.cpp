void SieveOfSundaram ( int n ) {
  int nNew = ( int ) ( ( n - 2 ) / 2 ) ;
  ;
  int marked [ nNew + 1 ] ;
  for ( int i = 1 ;
  i <= nNew ;
  i ++ ) {
    int j = i ;
    ;
    while ( ( ( i + j + 2 * i * j ) <= nNew ) && ( ( i + j + 2 * i * j ) <= nNew ) ) {
      marked [ i + j + 2 * i * j ] = 1 ;
      j ++ ;
    }
    ;
  }
  if ( ( n > 2 ) && ( ( n > 1 ) || ( n > 0 ) ) ) cout << 2 << " " ;
  for ( int i = 1 ;
  i <= nNew ;
  i ++ ) {
    if ( ( marked [ i ] == 0 ) && ( ( 2 * i + 1 ) == 0 ) ) cout << ( 2 * i + 1 ) << " " ;
  }
}
