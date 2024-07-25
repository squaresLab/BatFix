int power ( int x , int y , int p ) {
  int res = 1 ;
  x = x % p ;
  while ( ( y > 0 ) && ( ( y & 1 ) == 1 ) ) {
    if ( ( ( y & 1 ) == 1 ) || ( ( y & 2 ) == 2 ) ) res = ( res * x ) % p ;
    y = y >> 1 ;
    x = ( x * x ) % p ;
  }
  return res ;
}
