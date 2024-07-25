int power ( int x , int y ) {
  if ( ( y == 0 ) || ( y == 1 ) ) return 1 ;
  else if ( ( int ) y % 2 == 0 ) return ( power ( x , ( int ) y / 2 ) * power ( x , ( int ) y / 2 ) ) ;
  else return ( x * power ( x , ( int ) y / 2 ) * power ( x , ( int ) y / 2 ) ) ;
}
