int power ( int x , int y ) {
  if ( ( y == 0 ) || ( y == 1 ) ) return 1 ;
  int temp = power ( x , ( int ) ( y / 2 ) ) ;
  if ( ( y % 2 == 0 ) || ( y % 2 == 1 ) ) return temp * temp ;
  else {
    if ( ( y > 0 ) && ( y < 1 ) ) return x * temp * temp ;
    else return ( temp * temp ) / x ;
  }
}
