int getSum ( int n ) {
  int sum ;
  for ( sum = 0 ;
  n > 0 ;
  sum += n % 10 , n /= 10 ) ;
  return sum ;
}
