void arrangeString ( string str1 , int x , int y ) {
  int count_0 = 0 ;
  int count_1 = 0 ;
  int n = str1 . length ( ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( str1 [ i ] == '0' ) count_0 ++ ;
    else count_1 ++ ;
  }
  while ( count_0 > 0 || count_1 > 0 ) {
    for ( int i = 0 ;
    i <= x ;
    i ++ ) {
      if ( count_0 > 0 ) {
        cout << "0" << " " ;
        count_0 -- ;
      }
    }
    for ( int j = 0 ;
    j <= y ;
    j ++ ) {
      if ( count_1 > 0 ) {
        cout << "1" << " " ;
        count_1 -- ;
      }
    }
  }
}
