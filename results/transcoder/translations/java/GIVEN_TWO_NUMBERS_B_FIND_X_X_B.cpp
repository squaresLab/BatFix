void modular_equation ( int a , int b ) {
  if ( a < b ) {
    cout << "No solution possible " << endl ;
    return ;
  }
  if ( a == b ) {
    cout << "Infinite Solution possible " << endl ;
    return ;
  }
  int count = 0 ;
  int n = a - b ;
  int y = ( int ) sqrt ( a - b ) ;
  for ( int i = 1 ;
  i <= y ;
  ++ i ) {
    if ( n % i == 0 ) {
      if ( n / i > b ) {
        count ++ ;
      }
      if ( i > b ) {
        count ++ ;
      }
    }
  }
  if ( y * y == n && y > b ) {
    count -- ;
  }
  cout << count << endl ;
}
