bool canRepresentBST ( int pre [ ] , int n ) {
  stack < int > s ;
  int root = INT_MIN ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( pre [ i ] < root ) {
      return false ;
    }
    while ( ! s . empty ( ) && s . top ( ) < pre [ i ] ) {
      root = s . top ( ) ;
      s . pop ( ) ;
    }
    s . push ( pre [ i ] ) ;
  }
  return true ;
}
