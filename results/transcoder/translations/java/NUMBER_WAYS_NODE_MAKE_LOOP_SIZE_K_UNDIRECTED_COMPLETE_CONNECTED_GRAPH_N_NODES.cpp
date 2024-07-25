int numOfways ( int n , int k ) {
  int p = 1 ;
  if ( k % 2 != 0 ) {
    p = - 1 ;
  }
  return ( int ) ( pow ( n - 1 , k ) + p * ( n - 1 ) ) / n ;
}
