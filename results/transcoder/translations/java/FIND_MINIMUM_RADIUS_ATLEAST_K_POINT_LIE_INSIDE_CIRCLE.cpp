int minRadius ( int k , int * x , int * y , int n ) {
  int dis [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    dis [ i ] = x [ i ] * x [ i ] + y [ i ] * y [ i ] ;
  }
  sort ( dis , dis + k ) ;
  return dis [ k - 1 ] ;
}
