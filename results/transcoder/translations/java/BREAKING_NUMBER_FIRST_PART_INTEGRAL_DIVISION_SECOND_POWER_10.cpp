int calculate ( string N ) {
  int len = N . length ( ) ;
  int l = ( len ) / 2 ;
  int count = 0 ;
  for ( int i = 1 ;
  i <= l ;
  i ++ ) {
    string s = N . substr ( 0 , i ) ;
    int l1 = s . length ( ) ;
    string t = N . substr ( i , l1 + i ) ;
    if ( s [ 0 ] == '0' || t [ 0 ] == '0' ) continue ;
    if ( s == t ) count ++ ;
  }
  return count ;
}
