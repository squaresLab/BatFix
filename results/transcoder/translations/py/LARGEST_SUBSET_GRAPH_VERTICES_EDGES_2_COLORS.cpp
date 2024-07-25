int subsetGraph ( vector < vector < int >> C ) {
  static int N = 10 ;
  set < int > vertices ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) vertices . insert ( i ) ;
  while ( ( int ) vertices . size ( ) != 0 ) {
    if ( ( int ) vertices . size ( ) == 1 ) return 1 ;
    bool someOneRemoved = false ;
    for ( int x = 0 ;
    x < vertices . size ( ) ;
    x ++ ) {
      set < int > values ;
      for ( int y = 0 ;
      y < vertices . size ( ) ;
      y ++ ) {
        if ( ( int ) vertices [ x ] [ y ] != x ) values . insert ( C [ x ] [ y ] ) ;
      }
      if ( ( int ) values . size ( ) == 1 ) {
        vertices . erase ( vertices . begin ( ) + x ) ;
        someOneRemoved = true ;
        break ;
      }
    }
    if ( ( ! someOneRemoved ) && ( ( int ) vertices . size ( ) == 1 ) ) break ;
  }
  return vertices . size ( ) ;
}
