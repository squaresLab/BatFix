int findSum ( int n ) {
  n -- ;
  int sum = 0 ;
  sum += ( n * ( n + 1 ) ) / 2 ;
  sum += ( n * ( n + 1 ) * ( 2 * n + 1 ) ) / 6 ;
  return sum ;
}
