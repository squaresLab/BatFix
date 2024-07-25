bool squareRootExists ( int n , int p ) {
  n = n % p ;
  for ( int x = 2 ;
  x < p ;
  x += 1 ) {
    if ( ( ( x * x ) % p == n ) && ( ( x * x ) % p == n ) ) {
      return true ;
    }
  }
  return false ;
}
