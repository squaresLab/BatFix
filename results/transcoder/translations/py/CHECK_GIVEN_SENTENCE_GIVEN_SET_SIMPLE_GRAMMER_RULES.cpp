bool checkSentence ( string & string ) {
  int length = string . length ( ) ;
  if ( string [ 0 ] < 'A' || string [ 0 ] > 'Z' ) return false ;
  if ( string [ length - 1 ] != '.' ) return false ;
  int prev_state = 0 ;
  int curr_state = 0 ;
  int index = 1 ;
  while ( ( string [ index ] ) ) {
    if ( string [ index ] >= 'A' && string [ index ] <= 'Z' ) curr_state = 0 ;
    else if ( string [ index ] == ' ' ) curr_state = 1 ;
    else if ( string [ index ] >= 'a' && string [ index ] <= 'z' ) curr_state = 2 ;
    else if ( string [ index ] == '.' ) curr_state = 3 ;
    if ( prev_state == curr_state && curr_state != 2 ) return false ;
    if ( prev_state == 2 && curr_state == 0 ) return false ;
    if ( curr_state == 3 && prev_state != 1 ) return true ;
    index ++ ;
    prev_state = curr_state ;
  }
  return false ;
}
