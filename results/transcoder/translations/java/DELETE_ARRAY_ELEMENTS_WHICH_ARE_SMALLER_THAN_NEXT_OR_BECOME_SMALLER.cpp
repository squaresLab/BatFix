void deleteElements ( int arr [ ] , int n , int k ) {
  stack < int > s ;
  s . push ( arr [ 0 ] ) ;
  int count = 0 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    while ( ! s . empty ( ) && s . top ( ) < arr [ i ] && count < k ) {
      s . pop ( ) ;
      count ++ ;
    }
    s . push ( arr [ i ] ) ;
  }
  int m = s . size ( ) ;
  int v [ m ] ;
  while ( ! s . empty ( ) ) {
    v [ -- m ] = s . top ( ) ;
    s . pop ( ) ;
  }
  for ( int x : v ) cout << x << " " ;
  ;
  cout << "\n" ;
}
