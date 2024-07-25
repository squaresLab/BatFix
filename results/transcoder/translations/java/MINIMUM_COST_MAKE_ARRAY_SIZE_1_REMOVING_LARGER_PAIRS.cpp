int cost ( vector < int > a , int n ) {
  int min = a [ 0 ] ;
  for ( int i = 1 ;
  i < a . size ( ) ;
  i ++ ) {
    if ( a [ i ] < min ) {
      min = a [ i ] ;
    }
  }
  return ( n - 1 ) * min ;
}
