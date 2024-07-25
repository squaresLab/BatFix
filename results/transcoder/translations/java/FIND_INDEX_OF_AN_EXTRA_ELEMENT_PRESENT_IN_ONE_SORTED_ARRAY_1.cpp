int findExtra ( int arr1 [ ] , int arr2 [ ] , int n ) {
  int index = n ;
  int left = 0 , right = n - 1 ;
  while ( left <= right ) {
    int mid = ( left + right ) / 2 ;
    if ( arr2 [ mid ] == arr1 [ mid ] ) {
      left = mid + 1 ;
    }
    else {
      index = mid ;
      right = mid - 1 ;
    }
  }
  return index ;
}
