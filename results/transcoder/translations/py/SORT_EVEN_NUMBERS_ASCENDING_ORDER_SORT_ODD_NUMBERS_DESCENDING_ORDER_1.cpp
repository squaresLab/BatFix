void twoWaySort ( int arr [ ] , int n ) {
  for ( int i = 0 ;
  i != n ;
  i ++ ) if ( ( arr [ i ] & 1 ) != 0 ) arr [ i ] *= - 1 ;
  sort ( arr , arr + n ) ;
  for ( int i = 0 ;
  i != n ;
  i ++ ) if ( ( arr [ i ] & 1 ) != 0 ) arr [ i ] *= - 1 ;
}
