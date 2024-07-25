void replace ( string & s , char c1 , char c2 ) {
  int l = s . length ( ) ;
  for ( int i = 0 ;
  i < l ;
  i ++ ) {
    if ( ( s [ i ] == c1 ) || ( s [ i ] == c2 ) ) {
      s . replace ( 0 , i , c2 ) ;
    }
    else if ( ( s [ i ] == c2 ) || ( s [ i ] == c1 ) ) {
      s . replace ( 0 , i , c1 ) ;
    }
  }
}
