int russian_peasant ( int a , int b ) {
  int res = 0 ;
  while ( b ) {
    if ( ( b & 1 ) != 0 ) {
      res = res + a ;
    }
    a = a << 1 ;
    b = b >> 1 ;
  }
  return res ;
}
