void printTreeEdges ( int prufer [ ] , int m ) {
  int vertices = m + 2 ;
  int vertex_set [ vertices ] ;
  for ( int i = 0 ;
  i < vertices ;
  i ++ ) {
    vertex_set [ i ] = 0 ;
  }
  for ( int i = 0 ;
  i < vertices - 2 ;
  i ++ ) {
    vertex_set [ prufer [ i ] - 1 ] += 1 ;
  }
  cout << "\nThe edge set E(G) is :\n" ;
  int j = 0 ;
  for ( int i = 0 ;
  i < vertices - 2 ;
  i ++ ) {
    for ( j = 0 ;
    j < vertices ;
    j ++ ) {
      if ( vertex_set [ j ] == 0 ) {
        vertex_set [ j ] = - 1 ;
        cout << "(" << ( j + 1 ) << ", " << prufer [ i ] << ") " ;
        vertex_set [ prufer [ i ] - 1 ] -- ;
        break ;
      }
    }
  }
  j = 0 ;
  for ( int i = 0 ;
  i < vertices ;
  i ++ ) {
    if ( vertex_set [ i ] == 0 && j == 0 ) {
      cout << "(" << ( i + 1 ) << ", " ;
      j ++ ;
    }
    else if ( vertex_set [ i ] == 0 && j == 1 ) {
      cout << ( i + 1 ) << ")\n" ;
    }
  }
}
