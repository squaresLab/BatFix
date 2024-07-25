void findFibSubset ( int arr [ ] , int n ) {
  int m = max ( arr ) ;
  int a = 0 ;
  int b = 1 ;
  int hash [ n ] ;
  hash [ 0 ] = a ;
  hash [ 1 ] = b ;
  while ( ( b < m ) && ( a < b ) ) {
    int c = a + b ;
    a = b ;
    b = c ;
    hash [ b ] = c ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] < hash [ i ] ) {
      cout << arr [ i ] << " " ;
    }
  }
}
