void dfs ( vector < vector < int >> & List , int node , int arrival ) {
  cout << node << endl ;
  for ( int i = 0 ;
  i < List [ node ] . size ( ) ;
  i ++ ) {
    if ( ( List [ node ] [ i ] != arrival ) && ( List [ node ] [ i ] != arrival ) ) {
      dfs ( List , List [ node ] [ i ] , node ) ;
    }
  }
}
