void findMissing ( int a [ ] , int b [ ] , int n , int m ) {
  set < int > s ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    s . insert ( b [ i ] ) ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) if ( ! s . count ( a [ i ] ) ) cout << a [ i ] << " " ;
}
