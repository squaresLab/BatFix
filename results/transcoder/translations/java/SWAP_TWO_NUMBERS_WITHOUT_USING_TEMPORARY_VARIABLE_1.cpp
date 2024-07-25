void swap ( int & xp , int & yp ) {
  if ( xp == yp ) return ;
  xp = xp + yp ;
  yp = xp - yp ;
  xp = xp - yp ;
}
