void printFibonacciNumbers ( int n ) {
  int f1 = 0 ;
  int f2 = 1 ;
  if ( ( n < 1 ) || ( n > n ) ) return ;
  for ( int x = 0 ;
  x <= n ;
  x ++ ) {
    cout << f2 << " " ;
    int next = f1 + f2 ;
    f1 = f2 ;
    f2 = next ;
  }
}
