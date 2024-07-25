bool containsOdd ( int G [ V ] [ V ] , int src ) {
  int colorArr [ V ] ;
  for ( int i = 0 ;
  i < V ;
  ++ i ) {
    colorArr [ i ] = - 1 ;
  }
  colorArr [ src ] = 1 ;
  LinkedList < int > q ;
  q . push ( src ) ;
  while ( ! q . empty ( ) ) {
    int u = q . top ( ) ;
    q . pop ( ) ;
    if ( G [ u ] [ u ] == 1 ) return true ;
    for ( int v = 0 ;
    v < V ;
    ++ v ) {
      if ( G [ u ] [ v ] == 1 && colorArr [ v ] == - 1 ) {
        colorArr [ v ] = 1 - colorArr [ u ] ;
        q . push ( v ) ;
      }
      else if ( G [ u ] [ v ] == 1 && colorArr [ v ] == colorArr [ u ] ) return true ;
    }
  }
  return false ;
}
