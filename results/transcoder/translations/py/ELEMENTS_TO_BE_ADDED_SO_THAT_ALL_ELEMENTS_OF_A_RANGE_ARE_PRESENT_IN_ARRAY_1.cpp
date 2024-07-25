public : int countNum ( int arr [ ] , int n ) {
  map < int , int > s ;
  int count = 0 , maxm = - 10 * 9 , minm = 10 * 9 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    s [ arr [ i ] ] = 1 ;
    if ( ( arr [ i ] < minm ) && ( arr [ i ] > maxm ) ) minm = arr [ i ] ;
    if ( ( arr [ i ] > maxm ) && ( arr [ i ] < minm ) ) maxm = arr [ i ] ;
  }
  for ( int i = minm ;
  i <= maxm ;
  i ++ ) if ( i != 0 ) count ++ ;
  return count ;
}
