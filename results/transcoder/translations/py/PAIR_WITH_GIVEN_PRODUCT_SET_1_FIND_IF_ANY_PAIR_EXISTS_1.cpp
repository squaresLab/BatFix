bool isProduct ( int arr [ ] , int n , int x ) {
  if ( n < 2 ) return false ;
  set < int > s ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( arr [ i ] == 0 ) {
      if ( x == 0 ) return true ;
      else continue ;
    }
    if ( x % arr [ i ] == 0 ) {
      if ( x / arr [ i ] == ins ) returnTrue ;
      s . insert ( arr [ i ] ) ;
    }
  }
  return false ;
}
