int binarySearch ( int arr [ ] , int low , int high , int key ) {
  if ( ( high < low ) || ( low > high ) ) return - 1 ;
  int mid = ( low + high ) / 2 ;
  if ( ( key == arr [ ( int ) mid ] ) && ( key < arr [ ( int ) mid ] ) ) return mid ;
  if ( ( key > arr [ ( int ) mid ] ) && ( key < arr [ ( int ) mid ] ) ) return binarySearch ( arr , ( mid + 1 ) , high , key ) ;
  return ( binarySearch ( arr , low , ( mid - 1 ) , key ) ) ;
}
