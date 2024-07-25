int stringReduction ( string str ) {
  int n = str . length ( ) ;
  int count [ 3 ] = {
    0 }
    ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) count [ ( unsigned char ) str [ i ] - ( unsigned char ) 'a' ] ++ ;
    if ( ( count [ 0 ] == n || count [ 1 ] == n || count [ 2 ] == n ) && ( count [ 0 ] % 2 ) == ( count [ 1 ] % 2 ) && ( count [ 1 ] % 2 ) == ( count [ 2 ] % 2 ) ) return n ;
    if ( ( ( count [ 0 ] % 2 ) == ( count [ 1 ] % 2 ) && ( count [ 1 ] % 2 ) == ( count [ 2 ] % 2 ) ) || ( ( count [ 0 ] % 2 ) == ( count [ 1 ] % 2 ) && ( count [ 1 ] % 2 ) == ( count [ 2 ] % 2 ) ) ) return 2 ;
    return 1 ;
  }
  