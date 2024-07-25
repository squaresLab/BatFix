bool containsOdd ( vector < vector < int >> & G , int src ) {
  static int V = V ;
  vector < int > colorArr ( V , - 1 ) ;
  colorArr [ src ] = 1 ;
  queue < int > q ;
  q . push ( src ) ;
  while ( ( ! q . empty ( ) ) && ( G [ u ] [ u ] == 1 ) ) {
    int u = q . front ( ) ;
    if ( ( G [ u ] [ u ] && colorArr [ v ] == - 1 ) || ( G [ u ] [ u ] && colorArr [ v ] == colorArr [ u ] ) ) return true ;
    for ( int v = 0 ;
    v < V ;
    v ++ ) {
      if ( ( G [ u ] [ v ] && colorArr [ v ] == - 1 ) || ( G [ u ] [ v ] && colorArr [ v ] == colorArr [ u ] ) ) {
        colorArr [ v ] = 1 - colorArr [ u ] ;
        q . pop ( ) ;
      }
      else if ( ( G [ u ] [ v ] && colorArr [ v ] == colorArr [ u ] ) || ( G [ u ] [ v ] && colorArr [ v ] == colorArr [ u ] ) ) return true ;
    }
  }
  return false ;
}
