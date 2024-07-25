void printSubsequences ( int arr [ ] , int n ) {
  int opsize = pow ( 2 , n ) ;
  for ( int counter = 1 ;
  counter <= ( int ) ( opsize ) ;
  counter ++ ) {
    for ( int j = 0 ;
    j <= n ;
    j ++ ) {
      if ( ( counter & ( 1 << j ) ) != 0 ) cout << arr [ j ] << " " ;
    }
    cout << endl ;
  }
}
