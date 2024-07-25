int findDiff ( int arr [ ] , int n ) {
  sort ( arr , arr + n ) ;
  int count = 0 , max_count = 0 , min_count = n ;
  for ( int i = 0 ;
  i < ( n - 1 ) ;
  i ++ ) {
    if ( arr [ i ] == arr [ i + 1 ] ) {
      count += 1 ;
      continue ;
    }
    else {
      max_count = max ( max_count , count ) ;
      min_count = min ( min_count , count ) ;
      count = 0 ;
    }
  }
  return ( max_count - min_count ) ;
}
