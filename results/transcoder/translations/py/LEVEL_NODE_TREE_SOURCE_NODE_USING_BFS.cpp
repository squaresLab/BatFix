void printLevels ( vector < vector < int >> & graph , int V , int x ) {
  vector < int > level ( V , 0 ) ;
  vector < bool > marked ( V , false ) ;
  queue < int > que ;
  que . push ( x ) ;
  level [ x ] = 0 ;
  marked [ x ] = true ;
  while ( ( ! que . empty ( ) ) && ( graph [ x ] . size ( ) > 0 ) ) {
    int x = que . front ( ) ;
    for ( int i = 0 ;
    i < graph [ x ] . size ( ) ;
    i ++ ) {
      int b = graph [ x ] [ i ] ;
      if ( ( ! marked [ b ] ) && ( ! marked [ b ] ) ) {
        que . pop ( ) ;
        level [ b ] = level [ x ] + 1 ;
        marked [ b ] = true ;
      }
    }
  }
  cout << "Nodes" << " " << "Level" << endl ;
  for ( int i = 0 ;
  i < V ;
  i ++ ) cout << " " << i << " --> " << level [ i ] << endl ;
}
