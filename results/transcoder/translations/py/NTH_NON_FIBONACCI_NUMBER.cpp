public : int nonFibonacci ( int n ) {
  int prevPrev = 1 ;
  int prev = 2 ;
  int curr = 3 ;
  while ( n > 0 ) {
    prevPrev = prev ;
    prev = curr ;
    curr = prevPrev + prev ;
    n = n - ( curr - prev - 1 ) ;
  }
  n = n + ( curr - prev - 1 ) ;
  return prev + n ;
}
