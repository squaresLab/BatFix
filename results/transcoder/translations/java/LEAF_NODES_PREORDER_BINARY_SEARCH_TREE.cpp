void leaf_node ( int preorder [ ] , int n ) {
  stack < int > s ;
  for ( int i = 0 , j = 1 ;
  j < n ;
  i ++ , j ++ ) {
    bool found = false ;
    if ( preorder [ i ] > preorder [ j ] ) {
      s . push ( preorder [ i ] ) ;
    }
    else {
      while ( ! s . empty ( ) ) {
        if ( preorder [ j ] > s . top ( ) ) {
          s . pop ( ) ;
          found = true ;
        }
        else break ;
      }
    }
    if ( found ) {
      cout << preorder [ i ] << " " ;
    }
  }
  cout << preorder [ n - 1 ] << endl ;
}
