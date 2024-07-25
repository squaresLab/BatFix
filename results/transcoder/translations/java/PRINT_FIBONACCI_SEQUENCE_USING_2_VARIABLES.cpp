void fib ( int n ) {
  int a = 0 , b = 1 , c ;
  if ( n >= 0 ) {
    cout << a << " " ;
  }
  if ( n >= 1 ) {
    cout << b << " " ;
  }
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    c = a + b ;
    cout << c << " " ;
    a = b ;
    b = c ;
  }
}
