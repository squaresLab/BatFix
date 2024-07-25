public : string maxRepeating ( string str ) {
  int n = str . size ( ) ;
  int count = 0 ;
  string res = str [ 0 ] ;
  int cur_count = 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( i < n - 1 && str [ i ] == str [ i + 1 ] ) || ( i < n - 1 && str [ i ] == str [ i + 1 ] ) ) {
      cur_count ++ ;
    }
    else {
      if ( cur_count > count ) {
        count = cur_count ;
        res = str [ i ] ;
      }
      cur_count = 1 ;
    }
  }
  return res ;
}
