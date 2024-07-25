int getPairsCount ( int arr [ ] , int n , int sum ) {
  int m [ 1000 ] ;
  memset ( m , 0 , sizeof ( m ) ) ;
  for ( int i = 0 ;
  i != n ;
  i ++ ) {
    m [ arr [ i ] ] ++ ;
    m [ arr [ i ] ] ++ ;
  }
  int twice_count = 0 ;
  for ( int i = 0 ;
  i != n ;
  i ++ ) {
    twice_count += m [ sum - arr [ i ] ] ;
    if ( ( sum - arr [ i ] ) == arr [ i ] ) {
      twice_count -- ;
    }
  }
  return ( int ) ( twice_count / 2 ) ;
}
