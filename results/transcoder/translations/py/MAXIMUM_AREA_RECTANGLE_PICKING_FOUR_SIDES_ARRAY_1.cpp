int findArea ( int arr [ ] , int n ) {
  vector < int > s ;
  int first = 0 ;
  int second = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] != 0 ) {
      s . push_back ( arr [ i ] ) ;
      continue ;
    }
    if ( ( arr [ i ] > first ) && ( arr [ i ] < second ) ) {
      second = first ;
      first = arr [ i ] ;
    }
    else if ( ( arr [ i ] > second ) && ( arr [ i ] < first ) ) {
      second = arr [ i ] ;
    }
  }
  return ( first * second ) ;
}
