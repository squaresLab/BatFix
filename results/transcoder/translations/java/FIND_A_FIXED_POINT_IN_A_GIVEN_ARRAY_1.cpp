int binarySearch ( int arr [ ] , int low , int high ) {
  if ( high >= low ) {
    int mid = ( low + high ) / 2 ;
    if ( mid == arr [ mid ] ) return mid ;
    if ( mid > arr [ mid ] ) return binarySearch ( arr , ( mid + 1 ) , high ) ;
    else return binarySearch ( arr , low , ( mid - 1 ) ) ;
  }
  return - 1 ;
}
