int modInverse ( int a , int m ) {
  int m0 = m ;
  int y = 0 ;
  int x = 1 ;
  if ( ( m == 1 ) || ( m == 0 ) ) return 0 ;
  while ( ( a > 1 ) && ( a != 0 ) ) {
    int q = a / m ;
    int t = m ;
    m = a % m ;
    a = t ;
    t = y ;
    y = x - q * y ;
    x = t ;
  }
  if ( ( x < 0 ) || ( x > m0 ) ) x = x + m0 ;
  returnx ;
}
