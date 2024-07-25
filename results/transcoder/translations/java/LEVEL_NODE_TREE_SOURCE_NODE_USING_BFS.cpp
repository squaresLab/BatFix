void printLevels ( Vector < Vector < int >> & graph , int V , int x ) {
  int level [ V ] ;
  bool marked [ V ] ;
  Queue < int > que ;
  que . push ( x ) ;
  level [ x ] = 0 ;
  marked [ x ] = true ;
  while ( que . size ( ) > 0 ) {
    x = que . top ( ) ;
    que . pop ( ) ;
    for ( int i = 0 ;
    i < graph [ x ] . size ( ) ;
    i ++ ) {
      int b = graph [ x ] [ i ] ;
      if ( ! marked [ b ] ) {
        que . push ( b ) ;
        level [ b ] = level [ x ] + 1 ;
        marked [ b ] = true ;
      }
    }
  }
  cout << "Nodes" << " " << "Level" << endl ;
  for ( int i = 0 ;
  i < V ;
  i ++ ) {
    cout << " " << i << " --> " << level [ i ] << endl ;
  }
}
