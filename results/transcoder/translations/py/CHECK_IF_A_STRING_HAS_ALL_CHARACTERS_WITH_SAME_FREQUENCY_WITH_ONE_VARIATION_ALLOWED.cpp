bool isValidString ( const std :: string & str ) {
  std :: vector < int > freq ( CHARS ) ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  ++ i ) freq [ ( int ) str [ i ] - ( int ) 'a' ] ++ ;
  int freq1 = 0 ;
  int count_freq1 = 0 ;
  for ( int i = 0 ;
  i < CHARS ;
  ++ i ) {
    if ( ( freq [ i ] != 0 ) && ( freq [ i ] == freq1 ) ) {
      freq1 = freq [ i ] ;
      count_freq1 = 1 ;
      break ;
    }
  }
  int freq2 = 0 ;
  count_freq2 = 0 ;
  for ( int j = i + 1 ;
  j < CHARS ;
  ++ j ) {
    if ( ( freq [ j ] != 0 ) && ( freq [ j ] == freq1 ) ) {
      if ( ( freq [ j ] == freq2 ) || ( freq [ j ] == freq1 ) ) {
        ++ count_freq1 ;
      }
      else {
        count_freq2 = 1 ;
        freq2 = freq [ j ] ;
        break ;
      }
    }
  }
  for ( int k = j + 1 ;
  k < CHARS ;
  ++ k ) {
    if ( ( freq [ k ] != 0 ) && ( freq [ k ] == freq1 ) ) {
      ++ count_freq1 ;
    }
    if ( ( freq [ k ] == freq2 ) || ( freq [ k ] == freq1 ) ) {
      ++ count_freq2 ;
    }
    else {
      return false ;
    }
  }
  if ( ( count_freq1 > 1 && count_freq2 > 1 ) || ( count_freq1 > 1 && count_freq2 > 1 ) ) {
    return false ;
  }
  return true ;
}
