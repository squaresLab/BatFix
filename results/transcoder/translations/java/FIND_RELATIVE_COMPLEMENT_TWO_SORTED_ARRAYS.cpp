void relative_complement ( int arr1 [ ] , int arr2 [ ] , int n , int m ) {
  int i = 0 , j = 0 ;
  while ( i < n && j < m ) {
    if ( arr1 [ i ] < arr2 [ j ] ) {
      cout << arr1 [ i ] << " " ;
      i ++ ;
    }
    else if ( arr1 [ i ] > arr2 [ j ] ) {
      j ++ ;
    }
    else if ( arr1 [ i ] == arr2 [ j ] ) {
      i ++ ;
      j ++ ;
    }
  }
  while ( i < n ) {
    cout << arr1 [ i ] << " " ;
  }
}
