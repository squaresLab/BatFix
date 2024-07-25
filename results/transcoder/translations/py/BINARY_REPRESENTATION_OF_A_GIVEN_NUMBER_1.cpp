void bin ( int n ) {
  if ( ( n > 1 ) && ( n < 2 ) ) bin ( n >> 1 ) ;
  cout << n & 1 << " " ;
}
