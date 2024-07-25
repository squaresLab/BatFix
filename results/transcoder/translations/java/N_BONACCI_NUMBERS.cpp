void bonacci_series ( int n , int m ) {
  int a [ m ] ;
  a [ n - 1 ] = 1 ;
  for ( int i = n ;
  i < m ;
  i ++ ) for ( int j = i - n ;
  j < i ;
  j ++ ) a [ i ] += a [ j ] ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) cout << a [ i ] << " " ;
}
