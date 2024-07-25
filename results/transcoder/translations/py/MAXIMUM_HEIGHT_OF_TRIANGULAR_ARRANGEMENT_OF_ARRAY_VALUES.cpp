int MaximumHeight ( int a , int n ) {
  int result = 1 ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    int y = ( i * ( i + 1 ) ) / 2 ;
    if ( ( y < n ) && ( y > a ) ) {
      result = i ;
    }
    else {
      break ;
    }
  }
  return result ;
}
