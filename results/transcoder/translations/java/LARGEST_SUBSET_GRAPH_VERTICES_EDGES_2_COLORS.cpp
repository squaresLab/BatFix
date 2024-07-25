int subset_graph ( int C [ N ] [ N ] ) {
  set < int > vertices ;
  for ( int i = 0 ;
  i < N ;
  ++ i ) vertices . insert ( i ) ;
  while ( ! vertices . empty ( ) ) {
    if ( vertices . size ( ) == 1 ) return 1 ;
    bool someone_removed = false ;
    for ( int x : vertices ) {
      set < int > values ;
      for ( int y : vertices ) {
        if ( y != x ) values . insert ( C [ x ] [ y ] ) ;
      }
      if ( values . size ( ) == 1 ) {
        vertices . erase ( x ) ;
        someone_removed = true ;
        break ;
      }
    }
    if ( ! someone_removed ) break ;
  }
  return ( vertices . size ( ) ) ;
}
