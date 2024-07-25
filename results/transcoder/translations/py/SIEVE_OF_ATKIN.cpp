void SieveOfAtkin ( int limit ) {
  if ( ( limit > 2 ) && ( limit < 3 ) ) cout << 2 << " " ;
  if ( ( limit > 3 ) && ( limit < 4 ) ) cout << 3 << " " ;
  bool sieve [ limit ] ;
  for ( int i = 0 ;
  i <= limit ;
  i ++ ) sieve [ i ] = false ;
  int x = 1 ;
  while ( ( x * x < limit ) && ( x < limit ) ) {
    int y = 1 ;
    while ( ( y * y < limit ) && ( y < limit ) ) {
      int n = ( 4 * x * x ) + ( y * y ) ;
      if ( ( n <= limit ) && ( n % 12 == 1 || n % 12 == 5 ) ) sieve [ n ] ^= true ;
      n = ( 3 * x * x ) + ( y * y ) ;
      if ( ( n <= limit ) && ( n % 12 == 7 ) ) sieve [ n ] ^= true ;
      n = ( 3 * x * x ) - ( y * y ) ;
      if ( ( x > y && n <= limit && n % 12 == 11 ) ) sieve [ n ] ^= true ;
      y ++ ;
    }
    x ++ ;
  }
  int r = 5 ;
  while ( ( r * r < limit ) && ( r < limit ) ) {
    if ( ( sieve [ r ] ) ) for ( int i = r * r ;
    i < limit ;
    i += r * r ) sieve [ i ] = false ;
  }
  for ( int a = 5 ;
  a < limit ;
  a ++ ) if ( ( sieve [ a ] ) ) cout << a << " " ;
}
