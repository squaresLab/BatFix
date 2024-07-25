void squareRoot ( int n , int p ) {
  n = n % p ;
  for ( int x = 2 ;
  x < p ;
  x ++ ) {
    if ( ( ( x * x ) % p ) == n ) {
      cout << "Square root is " << x << endl ;
      return ;
    }
  }
  cout << "Square root doesn't exist" << endl ;
}
