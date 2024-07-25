int countStrings ( int n ) {
  int a [ n ] ;
  int b [ n ] ;
  a [ 0 ] = b [ 0 ] = 1 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    a [ i ] = a [ i - 1 ] + b [ i - 1 ] ;
    b [ i ] = a [ i - 1 ] ;
  }
  return ( 1 << n ) - a [ n - 1 ] - b [ n - 1 ] ;
}
