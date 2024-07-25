public : int findMinNumber ( int n ) {
  int count = 0 ;
  int ans = 1 ;
  while ( n % 2 == 0 ) {
    count ++ ;
    n /= 2 ;
  }
  ifcount % 2 isnot0 ;
  ans *= 2 ;
  foriinrange ( 3 , ( int ) ( sqrt ( n ) ) + 1 , 2 ) {
    count = 0 ;
    whilen % i == 0 ;
    count ++ ;
    n /= i ;
  }
  ifcount % 2 isnot0 ;
  ans *= i ;
  return ans ;
}
