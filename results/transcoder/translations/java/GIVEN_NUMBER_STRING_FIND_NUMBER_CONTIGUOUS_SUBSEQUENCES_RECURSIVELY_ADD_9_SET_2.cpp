int count9s ( char number [ ] ) {
  int n = strlen ( number ) ;
  int d [ 9 ] ;
  d [ 0 ] = 1 ;
  int result = 0 ;
  int mod_sum = 0 , continuous_zero = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( number [ i ] - '0' ) == 0 ) continuous_zero ++ ;
    else continuous_zero = 0 ;
    mod_sum += ( number [ i ] - '0' ) ;
    mod_sum %= 9 ;
    result += d [ mod_sum ] ;
    d [ mod_sum ] ++ ;
    result -= continuous_zero ;
  }
  return result ;
}
