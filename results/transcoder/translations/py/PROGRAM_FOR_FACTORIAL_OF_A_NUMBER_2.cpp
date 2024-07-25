int factorial ( int n ) {
  return 1 == ( n == 1 || n == 0 ) ? n : n * factorial ( n - 1 ) ;
}
