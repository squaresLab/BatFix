string decodeMedianString ( string s ) {
  int l = s . length ( ) ;
  string s1 ;
  if ( ( l % 2 ) == 0 ) {
    bool isEven = true ;
    if ( ( l % 2 ) == 1 ) {
      s1 . resize ( l / 2 ) ;
      s1 [ 0 ] = ' ' ;
    }
    else {
      if ( ( l - i > 1 ) && ( l - i < l ) ) {
        s1 . resize ( l / 2 ) ;
        s1 [ 0 ] = ' ' ;
        s1 [ 1 ] = ' ' ;
      }
      else {
        s1 [ 0 ] = s [ i ] ;
        s1 [ 1 ] = s [ i + 1 ] ;
      }
    }
  }
  return s1 ;
}
