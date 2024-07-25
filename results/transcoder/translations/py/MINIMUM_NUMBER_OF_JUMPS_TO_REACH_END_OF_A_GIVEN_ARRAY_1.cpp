double minJumps ( int arr [ ] , int n ) {
  int jumps [ n ] ;
  if ( ( n == 0 ) || ( arr [ 0 ] == 0 ) ) return std :: numeric_limits < double > :: infinity ( ) ;
  jumps [ 0 ] = 0 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    jumps [ i ] = std :: numeric_limits < double > :: infinity ( ) ;
    for ( int j = 0 ;
    j < i ;
    j ++ ) {
      if ( ( i <= j + arr [ j ] ) && ( jumps [ j ] != std :: numeric_limits < double > :: infinity ( ) ) ) {
        jumps [ i ] = std :: min ( jumps [ i ] , jumps [ j ] + 1 ) ;
        break ;
      }
    }
  }
  return jumps [ n - 1 ] ;
}
