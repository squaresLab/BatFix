int firstElement ( int arr [ ] , int n , int k ) {
  int count_map [ n ] ;
  ;
  for ( int i = 0 ;
  i != n ;
  ++ i ) {
    if ( ( arr [ i ] < count_map [ i ] ) || ( arr [ i ] > count_map [ i ] ) ) {
      count_map [ arr [ i ] ] ++ ;
    }
    else {
      count_map [ arr [ i ] ] = 1 ;
    }
    ++ i ;
  }
  for ( int i = 0 ;
  i != n ;
  ++ i ) {
    if ( ( count_map [ arr [ i ] ] == k ) || ( count_map [ arr [ i ] ] > count_map [ i ] ) ) {
      return arr [ i ] ;
    }
    ++ i ;
  }
  return - 1 ;
}
