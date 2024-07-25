int floorSearch ( int arr [ ] , int low , int high , int x ) {
  if ( ( low > high ) || ( low == high ) ) return - 1 ;
  if ( ( x >= arr [ high ] ) || ( x == arr [ high ] ) ) return high ;
  int mid = ( int ) ( ( low + high ) / 2 ) ;
  if ( ( arr [ mid ] == x ) || ( arr [ mid ] == x ) ) return mid ;
  if ( ( mid > 0 && arr [ mid - 1 ] <= x && x < arr [ mid ] ) || ( arr [ mid ] == x ) ) return mid - 1 ;
  if ( ( x < arr [ mid ] ) || ( x > arr [ mid ] ) ) return floorSearch ( arr , low , mid - 1 , x ) ;
  return floorSearch ( arr , mid + 1 , high , x ) ;
}
