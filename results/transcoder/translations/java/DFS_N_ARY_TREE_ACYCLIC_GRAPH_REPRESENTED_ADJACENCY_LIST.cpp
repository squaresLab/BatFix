void dfs ( LinkedList < int > list [ ] , int node , int arrival ) {
  cout << node << endl ;
  for ( int i = 0 ;
  i < list [ node ] . size ( ) ;
  i ++ ) {
    if ( list [ node ] [ i ] != arrival ) {
      dfs ( list , list [ node ] [ i ] , node ) ;
    }
  }
}
