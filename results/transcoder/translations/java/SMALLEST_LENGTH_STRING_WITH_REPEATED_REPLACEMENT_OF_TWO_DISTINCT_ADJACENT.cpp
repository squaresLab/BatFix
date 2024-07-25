int stringReduction ( string str ) {
  int n = str . length ( ) ;
  int count [ 3 ] ;
  for ( int i = 0 ;
  i < n ;
  ++ i ) count [ str [ i ] - 'a' ] ++ ;
  if ( count [ 0 ] == n || count [ 1 ] == n || count [ 2 ] == n ) return n ;
  if ( ( count [ 0 ] % 2 ) == ( count [ 1 ] % 2 ) && ( count [ 1 ] % 2 ) == ( count [ 2 ] % 2 ) ) return 2 ;
  return 1 ;
}
