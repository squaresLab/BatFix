bool isPossible ( Integer a [ ] , Integer b [ ] , int n , int k ) {
  sort ( a , a + n , cmp ) ;
  sort ( b , b + n , cmp ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) if ( a [ i ] + b [ i ] < k ) return false ;
  return true ;
}
