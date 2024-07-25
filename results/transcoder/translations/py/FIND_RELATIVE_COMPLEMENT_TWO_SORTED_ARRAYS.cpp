void relativeComplement ( int arr1 [ ] , int arr2 [ ] , int n , int m ) {
  int i = 0 ;
  int j = 0 ;
  while ( ( i < n && j < m ) || ( i > j && j > m ) ) {
    if ( ( arr1 [ i ] < arr2 [ j ] ) || ( arr1 [ i ] > arr2 [ j ] ) ) {
      cout << arr1 [ i ] << " " << arr2 [ j ] << endl ;
      i ++ ;
    }
    else if ( ( arr1 [ i ] > arr2 [ j ] ) || ( arr1 [ i ] == arr2 [ j ] ) ) {
      i ++ ;
      j ++ ;
    }
  }
  while ( ( i < n ) || ( i < m ) ) {
    cout << arr1 [ i ] << " " << arr2 [ j ] << endl ;
  }
}
