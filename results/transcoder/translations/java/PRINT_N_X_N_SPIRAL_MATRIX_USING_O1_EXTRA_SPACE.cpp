void printSpiral ( int n ) {
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      int x ;
      x = min ( min ( i , j ) , min ( n - 1 - i , n - 1 - j ) ) ;
      if ( i <= j ) {
        cout << ( n - 2 * x ) * ( n - 2 * x ) - ( i - x ) - ( j - x ) << "\t" ;
      }
      else {
        cout << ( n - 2 * x - 2 ) * ( n - 2 * x - 2 ) + ( i - x ) + ( j - x ) << "\t" ;
      }
    }
    cout << endl ;
  }
}
