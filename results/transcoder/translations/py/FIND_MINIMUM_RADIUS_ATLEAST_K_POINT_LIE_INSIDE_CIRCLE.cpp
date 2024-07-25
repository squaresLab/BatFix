int minRadius ( int k , double * x , double * y , int n ) {
  int dis [ n ] ;
  dis [ 0 ] = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) dis [ i ] = x [ i ] * x [ i ] + y [ i ] * y [ i ] ;
  sort ( dis , dis + k - 1 ) ;
  return dis [ k - 1 ] ;
}
