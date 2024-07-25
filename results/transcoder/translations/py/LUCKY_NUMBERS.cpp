int isLucky ( int n ) {
  int next_position = n ;
  if ( isLucky . counter > n ) return 1 ;
  if ( n % isLucky . counter == 0 ) return 0 ;
  next_position = next_position - next_position / isLucky . counter ;
  isLucky . counter = isLucky . counter + 1 ;
  return isLucky ( next_position ) ;
}
