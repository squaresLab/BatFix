void alternateSubarray ( bool arr [ ] , int n ) {
  int len [ n + 1 ] ;
  for ( int i = 0 ;
  i < n + 1 ;
  i ++ ) len [ i ] = 0 ;
  len [ n - 1 ] = 1 ;
  for ( int i = n - 2 ;
  i >= 0 ;
  i -- ) {
    if ( ( arr [ i ] ^ arr [ i + 1 ] == true ) == true ) len [ i ] = len [ i + 1 ] + 1 ;
    else len [ i ] = 1 ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) cout << len [ i ] << " " << endl ;
}
