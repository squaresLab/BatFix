public : int count ( int n ) {
  int table [ n + 1 ] ;
  table [ 0 ] = 1 ;
  for ( int i = 3 ;
  i <= n ;
  i ++ ) {
    table [ i ] += table [ i - 3 ] ;
  }
  for ( int i = 5 ;
  i <= n ;
  i ++ ) {
    table [ i ] += table [ i - 5 ] ;
  }
  for ( int i = 10 ;
  i <= n ;
  i ++ ) {
    table [ i ] += table [ i - 10 ] ;
  }
  return table [ n ] ;
}
