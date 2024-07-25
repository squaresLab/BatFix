public : int calculate ( string N ) {
  int length = N . length ( ) ;
  int l = ( int ) ( ( length ) / 2 ) ;
  int count = 0 ;
  for ( int i = 0 ;
  i < l + 1 ;
  i ++ ) {
    string s = N . substr ( 0 , 0 + i ) ;
    int l1 = s . length ( ) ;
    string t = N . substr ( i , l1 + i ) ;
    stringstream ss ;
    ss << s ;
    if ( ss . str ( ) . empty ( ) || ss . str ( ) . find ( '0' ) != string :: npos ) continue ;
    if ( ss . str ( ) == t ) count ++ ;
  }
  return count ;
}
