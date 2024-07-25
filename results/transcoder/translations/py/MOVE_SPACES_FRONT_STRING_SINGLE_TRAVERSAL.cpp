void moveSpaceInFront ( string & s ) {
  int i = s . length ( ) - 1 ;
  ;
  for ( int j = i ;
  j >= 0 ;
  j -- ) {
    if ( ( s [ j ] != ' ' ) && ( s [ j ] != '\t' ) ) {
      s . erase ( 0 , i ) ;
      s . insert ( i , s . begin ( ) + j , s . begin ( ) + j + 1 ) ;
      i -- ;
    }
  }
  while ( ( i >= 0 ) && ( s [ i ] != ' ' ) ) {
    s . erase ( 0 , i ) ;
    s . insert ( i , s . begin ( ) + j , s . begin ( ) + j + 1 ) ;
    i -- ;
  }
}
