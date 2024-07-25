int binarySearch ( int arr [ ] , int l , int r , int x ) {
  while ( l <= r ) {
    int mid = l + ( r - l ) / 2 ;
    ;
    ifarr [ mid ] == x ) returnmid ++ ;
    if ( elifarr [ mid ] < x ) l = mid + 1 ;
    else r = mid - 1 ;
  }
  return - 1 ;
}
