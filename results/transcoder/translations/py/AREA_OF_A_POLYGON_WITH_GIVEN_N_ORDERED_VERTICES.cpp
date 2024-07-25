int polygonArea ( int * X , int * Y , int n ) {
  double area = 0.0 ;
  int j = n - 1 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    area += ( X [ j ] + X [ i ] ) * ( Y [ j ] - Y [ i ] ) ;
    j = i ;
  }
  return ( int ) ( fabs ( area / 2.0 ) ) ;
}
