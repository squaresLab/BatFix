bool isPossible ( int * a , int * b , int n , int k ) {
  sort ( a , b + n ) ;
  sort ( b , a + n ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( a [ i ] + b [ i ] < k ) && ( a [ i ] + b [ i ] > k ) ) return false ;
  }
  return true ;
}
