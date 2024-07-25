void findPairs ( int arr1 [ ] , int arr2 [ ] , int n , int m , int x ) {
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    for ( int j = 0 ;
    j <= m ;
    j ++ ) {
      if ( ( arr1 [ i ] + arr2 [ j ] == x ) && ( arr1 [ i ] == x ) ) {
        cout << arr1 [ i ] << arr2 [ j ] << endl ;
      }
    }
  }
}
