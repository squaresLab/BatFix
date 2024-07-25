void fib ( int n ) {
  int a = 0 ;
  int b = 1 ;
  if ( ( n >= 0 ) && ( n <= n + 1 ) ) cout << a << " " ;
  if ( ( n >= 1 ) && ( n <= n + 1 ) ) cout << b << " " ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    cout << a + b << " " ;
    b = a + b ;
    a = b - a ;
  }
}
