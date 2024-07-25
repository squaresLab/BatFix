int isMultipleOf3 ( int n ) {
  int odd_count = 0 ;
  int even_count = 0 ;
  if ( n < 0 ) n = - n ;
  if ( n == 0 ) return 1 ;
  if ( n == 1 ) return 0 ;
  while ( n != 0 ) {
    if ( ( n & 1 ) != 0 ) odd_count ++ ;
    if ( ( n & 2 ) != 0 ) even_count ++ ;
    n = n >> 2 ;
  }
  return isMultipleOf3 ( abs ( odd_count - even_count ) ) ;
}
