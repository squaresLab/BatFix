void printTreeEdges ( int * prufer , int m ) {
  int vertices = m + 2 ;
  int * vertex_set = new int [ vertices ] ;
  vertex_set [ 0 ] = 0 ;
  for ( int i = 0 ;
  i < vertices - 2 ;
  i ++ ) vertex_set [ prufer [ i ] - 1 ] ++ ;
  cout << "The edge set E(G) is :" << endl ;
  int j ;
  for ( int i = 0 ;
  i < vertices - 2 ;
  i ++ ) {
    for ( j = 0 ;
    j < vertices ;
    j ++ ) {
      if ( ( vertex_set [ j ] == 0 ) && ( j < vertices ) ) {
        vertex_set [ j ] = - 1 ;
        cout << "(" << ( j + 1 ) << ", " << prufer [ i ] << ") " << endl ;
        vertex_set [ prufer [ i ] - 1 ] -- ;
        break ;
      }
    }
  }
  j = 0 ;
  for ( int i = 0 ;
  i < vertices ;
  i ++ ) {
    if ( ( vertex_set [ i ] == 0 && j == 0 ) || ( vertex_set [ i ] == 1 && j == 1 ) ) {
      cout << "(" << ( i + 1 ) << ", " << prufer [ i ] << ")" << endl ;
      j ++ ;
    }
    else if ( ( vertex_set [ i ] == 0 && j == 1 ) || ( vertex_set [ i ] == 0 && j == 2 ) ) {
      cout << ( i + 1 ) << ")" << endl ;
    }
  }
  delete [ ] vertex_set ;
}
