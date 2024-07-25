string maxRepeating ( string str ) {
  int l = str . length ( ) ;
  int count = 0 ;
  string res = str [ 0 ] ;
  for ( int i = 0 ;
  i < l ;
  i ++ ) {
    int curCount = 1 ;
    for ( int j = i + 1 ;
    j < l ;
    j ++ ) {
      if ( ( str [ i ] != str [ j ] ) && ( str [ i ] != str [ j ] ) ) break ;
      curCount ++ ;
    }
    if ( curCount > count ) {
      count = curCount ;
      res = str [ i ] ;
    }
  }
  return res ;
}
