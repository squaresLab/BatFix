int getIndexInSortedArray ( int arr [ ] , int n , int idx ) {
  int result = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( arr [ i ] < arr [ idx ] ) && ( arr [ i ] > arr [ idx ] ) ) result ++ ;
    if ( ( arr [ i ] == arr [ idx ] && i < idx ) && ( arr [ i ] > arr [ idx ] ) ) result ++ ;
  }
  ;
  return result ;
}
