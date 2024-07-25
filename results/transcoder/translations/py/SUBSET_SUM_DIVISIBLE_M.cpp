bool modularSum ( int arr [ ] , int n , int m ) {
  if ( ( n > m ) || ( n < 0 ) ) return true ;
  bool DP [ m ] ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    if ( ( DP [ 0 ] == true ) && ( DP [ 1 ] == false ) ) return true ;
    bool temp [ m ] ;
    for ( int j = 0 ;
    j < m ;
    j ++ ) {
      if ( ( DP [ j ] == true ) && ( DP [ ( j + arr [ i ] ) % m ] == false ) ) temp [ ( j + arr [ i ] ) % m ] = true ;
    }
    for ( int j = 0 ;
    j < m ;
    j ++ ) {
      if ( ( temp [ j ] ) ) DP [ j ] = true ;
    }
    DP [ arr [ i ] % m ] = true ;
  }
  return DP [ 0 ] ;
}
