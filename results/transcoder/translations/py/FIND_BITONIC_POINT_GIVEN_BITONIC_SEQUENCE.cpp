int binarySearch ( int arr [ ] , int left , int right ) {
  if ( ( left <= right ) && ( left <= right ) ) {
    int mid = ( left + right ) / 2 ;
    ;
    if ( ( arr [ mid - 1 ] < arr [ mid ] && arr [ mid ] > arr [ mid + 1 ] ) || ( arr [ mid ] < arr [ mid + 1 ] ) ) returnmid ;
    if ( ( arr [ mid ] < arr [ mid + 1 ] ) || ( arr [ mid ] > arr [ mid + 1 ] ) ) returnbinarySearch ( arr , mid + 1 , right ) ;
    else returnbinarySearch ( arr , left , mid - 1 ) ;
  }
  return - 1 ;
}
