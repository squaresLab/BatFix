void solution ( int a , int b , int n ) {
  for ( int i = 0 ;
  i * a <= n ;
  i ++ ) {
    if ( ( n - ( i * a ) ) % b == 0 ) {
      cout << "x = " << i << ", y = " << ( n - ( i * a ) ) / b << endl ;
      return ;
    }
  }
  cout << "No solution" << endl ;
}
