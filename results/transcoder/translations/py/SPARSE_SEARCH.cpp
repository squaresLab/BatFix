int sparseSearch ( string arr , int key , int low , int high ) {
  int left = 0 ;
  ;
  int right = 0 ;
  while ( low <= high ) {
    int mid = ( low + high ) / 2 ;
    if ( ifarr [ mid ] == "" ) {
      left = mid - 1 ;
      right = mid + 1 ;
      if ( ifleft < lowandright > high ) return - 1 ;
      if ( elifright <= highandarr [ right ] != "" ) mid = right ;
      if ( elifleft >= lowandarr [ left ] != "" ) mid = left ;
    }
    if ( ifarr [ mid ] == key ) {
      cout << "Found string {} at index {}" << arr [ mid ] << endl ;
      return 0 ;
    }
    if ( elifarr [ mid ] > key ) high = mid - 1 ;
    if ( elifarr [ mid ] < key ) low = mid + 1 ;
    left -- ;
    right ++ ;
  }
  return - 1 ;
}
