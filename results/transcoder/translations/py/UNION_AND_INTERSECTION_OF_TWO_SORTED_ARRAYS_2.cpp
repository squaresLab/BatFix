void printUnion ( int arr1 [ ] , int arr2 [ ] , int m , int n ) {
  int i = 0 , j = 0 ;
  while ( i < m && j < n ) {
    if ( arr1 [ i ] < arr2 [ j ] ) {
      cout << arr1 [ i ] << endl ;
      i ++ ;
    }
    else if ( arr2 [ j ] < arr1 [ i ] ) {
      cout << arr2 [ j ] << endl ;
      j ++ ;
    }
    else {
      cout << arr2 [ j ] << endl ;
      j ++ ;
      i ++ ;
    }
  }
  while ( i < m ) {
    cout << arr1 [ i ] << endl ;
    i ++ ;
  }
  while ( j < n ) {
    cout << arr2 [ j ] << endl ;
    j ++ ;
  }
}
