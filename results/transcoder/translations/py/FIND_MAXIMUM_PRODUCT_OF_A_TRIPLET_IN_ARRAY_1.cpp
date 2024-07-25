int maxProduct ( int arr [ ] , int n ) {
  if ( n < 3 ) return - 1 ;
  sort ( arr , arr + n ) ;
  return max ( arr [ 0 ] * arr [ 1 ] * arr [ n - 1 ] , arr [ n - 1 ] * arr [ n - 2 ] * arr [ n - 3 ] ) ;
}
