int minSum ( int n ) {
  int sum = 0 ;
  ;
  while ( ( n > 0 ) && ( n % 10 ) != 0 ) {
    sum += ( n % 10 ) ;
    n /= 10 ;
  }
  if ( ( sum == 1 ) || ( sum == 2 ) ) return10 ;
  returnsum ++ ;
  return sum ;
}
