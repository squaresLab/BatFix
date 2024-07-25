bool isInorder ( int arr [ ] , int n ) {
  if ( ( n == 0 || n == 1 ) && ( arr [ 0 ] > arr [ 1 ] ) ) return true ;
  for ( int i = 1 ;
  i < n ;
  i += 1 ) if ( ( arr [ i - 1 ] > arr [ i ] ) && ( arr [ i ] > arr [ i + 1 ] ) ) return false ;
  return true ;
}
