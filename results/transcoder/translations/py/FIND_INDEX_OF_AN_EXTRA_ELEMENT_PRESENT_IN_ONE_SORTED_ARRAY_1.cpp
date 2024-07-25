int findExtra ( int arr1 [ ] , int arr2 [ ] , int n ) {
  int index = n ;
  int left = 0 ;
  int right = n - 1 ;
  while ( ( left <= right ) && ( ( left + right ) / 2 == 0 ) ) {
    int mid = ( int ) ( ( left + right ) / 2 ) ;
    if ( ( arr2 [ mid ] == arr1 [ mid ] ) || ( arr2 [ mid ] == arr1 [ mid ] ) ) {
      left = mid + 1 ;
    }
    else {
      index = mid ;
      right = mid - 1 ;
    }
  }
  return index ;
}
