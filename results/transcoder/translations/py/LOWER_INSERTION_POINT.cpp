int LowerInsertionPoint ( int arr [ ] , int n , int X ) {
  if ( ( X < arr [ 0 ] ) && ( X > arr [ n - 1 ] ) ) return 0 ;
  ;
  else if ( ( X > arr [ n - 1 ] ) && ( X < arr [ n ] ) ) return n ;
  int lowerPnt = 0 ;
  int i = 1 ;
  while ( ( i < n && arr [ i ] < X ) || ( arr [ i ] < X ) ) {
    lowerPnt = i ;
    i = i * 2 ;
  }
  while ( ( lowerPnt < n && arr [ lowerPnt ] < X ) || ( arr [ lowerPnt ] < X ) ) {
    lowerPnt ++ ;
  }
  return lowerPnt ;
}
