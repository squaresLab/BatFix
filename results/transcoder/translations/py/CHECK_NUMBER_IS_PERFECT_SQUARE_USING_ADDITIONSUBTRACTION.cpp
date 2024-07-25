bool isPerfectSquare ( int n ) {
  int i = 1 ;
  int the_sum = 0 ;
  while ( the_sum < n ) {
    the_sum += i ;
    if ( the_sum == n ) return true ;
    i += 2 ;
  }
  return false ;
}
