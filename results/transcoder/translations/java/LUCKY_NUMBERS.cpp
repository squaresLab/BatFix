bool isLucky ( int n ) {
  int next_position = n ;
  if ( counter > n ) return true ;
  if ( n % counter == 0 ) return false ;
  next_position -= next_position / counter ;
  counter ++ ;
  return isLucky ( next_position ) ;
}
