bool checkReverse ( int arr [ ] , int n ) {
  if ( n == 1 ) return true ;
  int i ;
  for ( i = 1 ;
  arr [ i - 1 ] < arr [ i ] && i < n ;
  i ++ ) ;
  if ( i == n ) return true ;
  int j = i ++ ;
  while ( arr [ j ] < arr [ j - 1 ] ) {
    if ( i > 1 && arr [ j ] < arr [ i - 2 ] ) return false ;
    j ++ ;
  }
  if ( j == n ) return true ;
  int k = j ;
  if ( arr [ k ] < arr [ i - 1 ] ) return false ;
  while ( k > 1 && k < n ) {
    if ( arr [ k ] < arr [ k - 1 ] ) return false ;
    k ++ ;
  }
  return true ;
}
