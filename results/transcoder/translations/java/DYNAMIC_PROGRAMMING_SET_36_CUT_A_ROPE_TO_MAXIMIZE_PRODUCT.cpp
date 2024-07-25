int maxProd ( int n ) {
  if ( n == 0 || n == 1 ) return 0 ;
  int max_val = 0 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    max_val = max ( max_val , max ( i * ( n - i ) , maxProd ( n - i ) * i ) ) ;
  }
  return max_val ;
}
