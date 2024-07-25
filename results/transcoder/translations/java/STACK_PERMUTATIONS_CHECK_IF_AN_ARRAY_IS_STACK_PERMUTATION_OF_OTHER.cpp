bool checkStackPermutation ( int ip [ ] , int op [ ] , int n ) {
  queue < int > input ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) input . push ( ip [ i ] ) ;
  queue < int > output ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) output . push ( op [ i ] ) ;
  stack < int > tempStack ;
  while ( ! input . empty ( ) ) {
    int ele = input . top ( ) ;
    if ( ele == output . top ( ) ) {
      output . pop ( ) ;
      while ( ! tempStack . empty ( ) ) {
        if ( tempStack . top ( ) == output . top ( ) ) {
          tempStack . pop ( ) ;
          output . pop ( ) ;
        }
        else break ;
      }
    }
    else tempStack . push ( ele ) ;
  }
  return ( input . empty ( ) && tempStack . empty ( ) ) ;
}
