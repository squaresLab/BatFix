int solution ( int a , int b , int n ) {
  int i = 0 ;
  while ( i * a <= n ) {
    if ( ( n - ( i * a ) ) % b == 0 ) {
      cout << "x = " << i << ", y = " << ( int ) ( ( n - ( i * a ) ) / b ) << endl ;
      return 0 ;
    }
    i = i + 1 ;
  }
  cout << "No solution" << endl ;
  return 0 ;
}
