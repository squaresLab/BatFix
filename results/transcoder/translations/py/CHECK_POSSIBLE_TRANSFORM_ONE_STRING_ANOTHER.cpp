bool check ( string s1 , string s2 ) {
  int n = s1 . length ( ) ;
  int m = s2 . length ( ) ;
  bool dp [ n + 1 ] [ m + 1 ] ;
  dp [ 0 ] [ 0 ] = true ;
  for ( int i = 0 ;
  i < s1 . length ( ) ;
  i ++ ) for ( int j = 0 ;
  j < s2 . length ( ) + 1 ;
  j ++ ) {
    if ( ( dp [ i ] [ j ] ) ) {
      if ( ( ( j < s2 . length ( ) ) && ( s1 [ i ] . compare ( s2 [ j ] ) == 0 ) ) || ( ( s1 [ i ] . compare ( s2 [ j ] ) == 0 ) && ( s2 [ j ] . compare ( s1 [ i ] ) == 0 ) ) ) dp [ i + 1 ] [ j + 1 ] = true ;
      if ( ( s1 [ i ] . isupper ( ) == false ) && ( s2 [ j ] . compare ( s1 [ i ] ) == 0 ) ) dp [ i + 1 ] [ j ] = true ;
    }
  }
  return ( dp [ n ] [ m ] ) ;
}
