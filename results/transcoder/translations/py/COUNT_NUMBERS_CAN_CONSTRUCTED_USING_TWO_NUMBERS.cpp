public : int countNums ( int n , int x , int y ) {
  bool arr [ n + 2 ] ;
  arr [ 0 ] = false ;
  arr [ 1 ] = false ;
  if ( ( x <= n ) && ( x < n ) ) arr [ x ] = true ;
  if ( ( y <= n ) && ( y < n ) ) arr [ y ] = true ;
  int result = 0 ;
  for ( int i = min ( x , y ) ;
  i <= n ;
  i ++ ) {
    if ( ( arr [ i ] ) ) {
      if ( ( i + x <= n ) && ( i + x < n ) ) arr [ i + x ] = true ;
      if ( ( i + y <= n ) && ( i + y < n ) ) arr [ i + y ] = true ;
      result = result + 1 ;
    }
  }
  return result ;
}
