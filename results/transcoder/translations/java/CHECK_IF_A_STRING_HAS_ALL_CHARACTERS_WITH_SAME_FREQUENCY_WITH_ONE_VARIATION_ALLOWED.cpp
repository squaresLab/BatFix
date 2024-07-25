bool isValidString ( const std :: string & str ) {
  int freq [ CHARS ] ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) freq [ str [ i ] - 'a' ] ++ ;
  int i , freq1 = 0 , count_freq1 = 0 ;
  for ( i = 0 ;
  i < CHARS ;
  i ++ ) {
    if ( freq [ i ] != 0 ) {
      freq1 = freq [ i ] ;
      count_freq1 = 1 ;
      break ;
    }
  }
  int j , freq2 = 0 , count_freq2 = 0 ;
  for ( j = i + 1 ;
  j < CHARS ;
  j ++ ) {
    if ( freq [ j ] != 0 ) {
      if ( freq [ j ] == freq1 ) count_freq1 ++ ;
      else {
        count_freq2 = 1 ;
        freq2 = freq [ j ] ;
        break ;
      }
    }
  }
  for ( int k = j + 1 ;
  k < CHARS ;
  k ++ ) {
    if ( freq [ k ] != 0 ) {
      if ( freq [ k ] == freq1 ) count_freq1 ++ ;
      if ( freq [ k ] == freq2 ) count_freq2 ++ ;
      else return false ;
    }
    if ( count_freq1 > 1 && count_freq2 > 1 ) return false ;
  }
  return true ;
}
