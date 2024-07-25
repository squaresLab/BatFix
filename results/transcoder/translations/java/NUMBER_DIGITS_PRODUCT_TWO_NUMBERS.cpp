int countDigits ( int a , int b ) {
  int count = 0 ;
  int p = abs ( a * b ) ;
  if ( p == 0 ) return 1 ;
  while ( p > 0 ) {
    count ++ ;
    p = p / 10 ;
  }
  return count ;
}
