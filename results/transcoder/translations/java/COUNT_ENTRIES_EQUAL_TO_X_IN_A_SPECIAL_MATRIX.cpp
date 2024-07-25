int count ( int n , int x ) {
  int count = 0 ;
  for ( int i = 1 ;
  i <= n && i <= x ;
  i ++ ) {
    if ( x / i <= n && x % i == 0 ) {
      count ++ ;
    }
  }
  return count ;
}
