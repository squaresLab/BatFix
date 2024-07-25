int unitnumber ( int x , int y ) {
  x = x % 10 ;
  if ( y != 0 ) y = y % 4 + 4 ;
  return ( ( ( int ) ( pow ( x , y ) ) ) % 10 ) ;
}
