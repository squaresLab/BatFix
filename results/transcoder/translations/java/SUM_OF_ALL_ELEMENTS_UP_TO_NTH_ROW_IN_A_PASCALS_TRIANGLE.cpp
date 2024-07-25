long long calculateSum ( int n ) {
  long long sum = 0 ;
  for ( int row = 0 ;
  row < n ;
  row ++ ) sum = sum + ( 1 << row ) ;
  return sum ;
}
