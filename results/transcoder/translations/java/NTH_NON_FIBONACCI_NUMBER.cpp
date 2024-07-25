int nonFibonacci ( int n ) {
  int prevPrev = 1 , prev = 2 , curr = 3 ;
  while ( n ) {
    prevPrev = prev ;
    prev = curr ;
    curr = prevPrev + prev ;
    n = n - ( curr - prev - 1 ) ;
  }
  n = n + ( curr - prev - 1 ) ;
  return prev + n ;
}
