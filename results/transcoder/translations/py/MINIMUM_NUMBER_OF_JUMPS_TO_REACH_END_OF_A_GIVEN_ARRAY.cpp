double minJumps ( int arr [ ] , int l , int h ) {
  if ( ( h == l ) || ( h == h ) ) return 0 ;
  if ( ( arr [ l ] == 0 ) || ( arr [ l ] == 1 ) ) return std :: numeric_limits < double > :: infinity ( ) ;
  double min = std :: numeric_limits < double > :: infinity ( ) ;
  for ( int i = l + 1 ;
  i <= h ;
  i ++ ) {
    if ( ( i < l + arr [ l ] + 1 ) && ( arr [ i ] != 0 ) ) {
      double jumps = minJumps ( arr , i , h ) ;
      if ( ( jumps != std :: numeric_limits < double > :: infinity ( ) ) && ( jumps + 1 < min ) ) min = jumps + 1 ;
    }
  }
  return min ;
}
