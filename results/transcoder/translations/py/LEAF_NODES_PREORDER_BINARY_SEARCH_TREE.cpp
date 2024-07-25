void leafNode ( vector < int > preorder , int n ) {
  vector < int > s ;
  int i = 0 ;
  for ( int j = 1 ;
  j < n ;
  j ++ ) {
    bool found = false ;
    if ( preorder [ i ] > preorder [ j ] ) {
      s . push_back ( preorder [ i ] ) ;
    }
    else {
      while ( s . size ( ) != 0 ) {
        if ( preorder [ j ] > s . back ( ) ) {
          s . pop_back ( ) ;
          found = true ;
        }
        else break ;
      }
    }
    if ( found ) cout << preorder [ i ] << " " ;
    i ++ ;
  }
  cout << preorder [ n - 1 ] << endl ;
}
