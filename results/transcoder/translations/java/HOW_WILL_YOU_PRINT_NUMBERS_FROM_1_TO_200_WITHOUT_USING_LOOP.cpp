void print_nos ( int n ) {
  if ( n > 0 ) {
    print_nos ( n - 1 ) ;
    cout << n << " " ;
  }
  return ;
}
