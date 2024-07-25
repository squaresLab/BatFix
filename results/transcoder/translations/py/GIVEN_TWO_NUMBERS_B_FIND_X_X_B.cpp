void modularEquation ( int a , int b ) {
  if ( ( a < b ) || ( a > b ) ) {
    cout << "No solution possible " << endl ;
    return ;
  }
  if ( ( a == b ) || ( a == b ) ) {
    cout << "Infinite Solution possible " << endl ;
    return ;
  }
  int count = 0 ;
  int n = a - b ;
  int y = ( int ) ( sqrt ( a - b ) ) ;
  for ( int i = 1 ;
  i <= y ;
  i ++ ) {
    if ( ( n % i ) == 0 ) {
      if ( ( n / i > b ) && ( i > b ) ) count = count + 1 ;
      if ( ( i > b ) && ( y * y == n && y > b ) ) count = count - 1 ;
    }
  }
  if ( ( y * y == n && y > b ) || ( y == b ) ) count = count - 1 ;
  cout << count << endl ;
}
