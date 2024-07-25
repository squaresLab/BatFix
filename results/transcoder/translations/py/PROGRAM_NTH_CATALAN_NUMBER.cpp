double catalan ( int n ) {
  if ( n <= 1 ) return 1 ;
  double res = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) res += catalan ( i ) * catalan ( n - i - 1 ) ;
  return res ;
}
