void arrangeString ( string str , int x , int y ) {
  int count_0 = 0 ;
  int count_1 = 0 ;
  int len = str . length ( ) ;
  for ( int i = 0 ;
  i < len ;
  i ++ ) {
    if ( str [ i ] == '0' ) {
      count_0 ++ ;
    }
    else {
      count_1 ++ ;
    }
  }
  while ( count_0 || count_1 ) {
    for ( int j = 0 ;
    j < x && count_0 > 0 ;
    j ++ ) {
      if ( count_0 > 0 ) {
        cout << "0" ;
        count_0 -- ;
      }
    }
    for ( int j = 0 ;
    j < y && count_1 > 0 ;
    j ++ ) {
      if ( count_1 > 0 ) {
        cout << "1" ;
        count_1 -- ;
      }
    }
  }
}
