int findS ( int s ) {
  int sum = 0 ;
  for ( int n = 1 ;
  sum < s ;
  n ++ ) {
    sum += n * n ;
    if ( sum == s ) return n ;
  }
  return - 1 ;
}
