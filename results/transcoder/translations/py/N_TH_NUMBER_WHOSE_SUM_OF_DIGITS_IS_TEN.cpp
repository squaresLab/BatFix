int findNth ( int n ) {
  int count = 0 ;
  for ( int curr = 0 ;
  curr < n ;
  curr ++ ) {
    int sum = 0 ;
    int x = curr ;
    while ( ( x ) ) {
      sum = sum + x % 10 ;
      x = x / 10 ;
    }
    if ( ( sum == 10 ) && ( count == 10 ) ) {
      returncurr = curr ;
    }
  }
  return - 1 ;
}
