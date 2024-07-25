int nobleInteger ( int arr [ ] ) {
  sort ( arr , arr + sizeof ( arr ) / sizeof ( int ) ) ;
  int n = sizeof ( arr ) / sizeof ( int ) ;
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    if ( arr [ i ] == arr [ i + 1 ] ) continue ;
    if ( arr [ i ] == n - i - 1 ) return arr [ i ] ;
  }
  if ( arr [ n - 1 ] == 0 ) return arr [ n - 1 ] ;
  return - 1 ;
}
