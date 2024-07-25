int countNum ( int arr [ ] , int n ) {
  set < int > s ;
  int count = 0 , maxm = INT_MAX , minm = INT_MAX ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    s . insert ( arr [ i ] ) ;
    if ( arr [ i ] < minm ) minm = arr [ i ] ;
    if ( arr [ i ] > maxm ) maxm = arr [ i ] ;
  }
  for ( int i = minm ;
  i <= maxm ;
  i ++ ) if ( ! s . count ( i ) ) count ++ ;
  return count ;
}
