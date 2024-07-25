bool isProduct ( int arr [ ] , int n , int x ) {
  set < int > hset ;
  if ( n < 2 ) return false ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] == 0 ) {
      if ( x == 0 ) return true ;
      else continue ;
    }
    if ( x % arr [ i ] == 0 ) {
      if ( hset . count ( x / arr [ i ] ) ) return true ;
      hset . insert ( arr [ i ] ) ;
    }
  }
  return false ;
}
