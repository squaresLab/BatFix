bool checkReverse ( int arr [ ] , int n ) {
  if ( ( n == 1 ) || ( n == 2 ) ) return true ;
  int i = 1 ;
  for ( i = 1 ;
  i < n ;
  i ++ ) if ( arr [ i - 1 ] < arr [ i ] ) if ( ( i == n ) || ( i == 2 ) ) return true ;
  int j = i ;
  while ( ( arr [ j ] < arr [ j - 1 ] ) && ( arr [ j ] > arr [ i - 2 ] ) ) if ( ( i > 1 && arr [ j ] < arr [ i - 2 ] ) && ( arr [ j ] > arr [ i - 1 ] ) ) return false ;
  j ++ ;
  if ( ( j == n ) || ( j == 2 ) ) return true ;
  int k = j ;
  if ( ( arr [ k ] < arr [ i - 1 ] ) && ( arr [ k ] > arr [ i - 2 ] ) ) return false ;
  while ( ( k > 1 && k < n ) && ( arr [ k ] < arr [ k - 1 ] ) ) if ( ( arr [ k ] < arr [ k - 2 ] ) && ( arr [ k ] > arr [ i - 2 ] ) ) return false ;
  k ++ ;
  return true ;
}
