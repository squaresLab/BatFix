int countRotations ( int arr [ ] , int low , int high ) {
  if ( ( high < low ) || ( high == low ) ) return 0 ;
  if ( ( high == low ) || ( high == high ) ) return low ;
  int mid = low + ( high - low ) / 2 ;
  ;
  mid = ( int ) mid ;
  if ( ( mid < high && arr [ mid + 1 ] < arr [ mid ] ) || ( mid > low && arr [ mid ] < arr [ mid - 1 ] ) ) return mid ;
  if ( ( arr [ high ] > arr [ mid ] ) || ( high == low ) ) return countRotations ( arr , low , mid - 1 ) ;
  ;
  return countRotations ( arr , mid + 1 , high ) ;
}
