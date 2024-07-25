bool checkSentence ( char * str ) {
  int len = strlen ( str ) ;
  if ( str [ 0 ] < 'A' || str [ 0 ] > 'Z' ) return false ;
  if ( str [ len - 1 ] != '.' ) return false ;
  int prev_state = 0 , curr_state = 0 ;
  int index = 1 ;
  while ( index <= len ) {
    if ( str [ index ] >= 'A' && str [ index ] <= 'Z' ) curr_state = 0 ;
    else if ( str [ index ] == ' ' ) curr_state = 1 ;
    else if ( str [ index ] >= 'a' && str [ index ] <= 'z' ) curr_state = 2 ;
    else if ( str [ index ] == '.' ) curr_state = 3 ;
    if ( prev_state == curr_state && curr_state != 2 ) return false ;
    if ( prev_state == 2 && curr_state == 0 ) return false ;
    if ( curr_state == 3 && prev_state != 1 ) return ( index + 1 == len ) ;
    index ++ ;
    prev_state = curr_state ;
  }
  return false ;
}
