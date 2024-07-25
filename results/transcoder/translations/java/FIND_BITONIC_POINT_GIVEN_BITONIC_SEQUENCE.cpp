int binarySearch ( int arr [ ] , int left , int right ) {
  if ( left <= right ) {
    int mid = ( left + right ) / 2 ;
    if ( arr [ mid - 1 ] < arr [ mid ] && arr [ mid ] > arr [ mid + 1 ] ) return mid ;
    if ( arr [ mid ] < arr [ mid + 1 ] ) return binarySearch ( arr , mid + 1 , right ) ;
    else return binarySearch ( arr , left , mid - 1 ) ;
  }
  return - 1 ;
}
