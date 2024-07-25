int LowerInsertionPoint ( int arr [ ] , int n , int X ) {
  if ( X < arr [ 0 ] ) return 0 ;
  else if ( X > arr [ n - 1 ] ) return n ;
  int lower_pnt = 0 ;
  int i = 1 ;
  while ( i < n && arr [ i ] < X ) {
    lower_pnt = i ;
    i = i * 2 ;
  }
  while ( lower_pnt < n && arr [ lower_pnt ] < X ) lower_pnt ++ ;
  return lower_pnt ;
}
