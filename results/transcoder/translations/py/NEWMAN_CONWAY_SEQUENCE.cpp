int sequence ( int n ) {
  if ( n == 1 || n == 2 ) return 1 ;
  else return sequence ( sequence ( n - 1 ) ) + sequence ( n - sequence ( n - 1 ) ) ;
  ;
}
