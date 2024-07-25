public : int findMinSum ( int num ) {
  int sum = 0 ;
  int i = 2 ;
  while ( ( i * i <= num ) && ( num % i == 0 ) ) {
    while ( ( num % i == 0 ) && ( num % i == 0 ) ) {
      sum += i ;
      num /= i ;
    }
    i ++ ;
  }
  sum += num ;
  return sum ;
}
