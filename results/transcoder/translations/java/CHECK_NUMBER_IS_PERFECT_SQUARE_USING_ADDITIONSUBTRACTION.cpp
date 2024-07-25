bool isPerfectSquare ( int n ) {
  for ( int sum = 0 , i = 1 ;
  sum < n ;
  i += 2 ) {
    sum += i ;
    if ( sum == n ) return true ;
  }
  return false ;
}
