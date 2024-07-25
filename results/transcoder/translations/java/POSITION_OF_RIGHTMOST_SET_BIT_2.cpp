int Right_most_setbit ( int num ) {
  int pos = 1 ;
  for ( int i = 0 ;
  i < INT_SIZE ;
  i ++ ) {
    if ( ( num & ( 1 << i ) ) == 0 ) {
      pos ++ ;
    }
    else {
      break ;
    }
  }
  return pos ;
}
