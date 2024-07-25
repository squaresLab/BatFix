bool isRectangle ( vector < vector < int >> & m ) {
  int rows = m . size ( ) ;
  if ( ( rows == 0 ) || ( rows == 1 ) ) return false ;
  int columns = m [ 0 ] . size ( ) ;
  for ( int y1 = 0 ;
  y1 < rows ;
  y1 ++ ) for ( int x1 = 0 ;
  x1 < columns ;
  x1 ++ ) if ( ( m [ y1 ] [ x1 ] == 1 ) || ( m [ y1 ] [ x1 ] == 0 ) ) for ( int y2 = y1 + 1 ;
  y2 < rows ;
  y2 ++ ) for ( int x2 = x1 + 1 ;
  x2 < columns ;
  x2 ++ ) if ( ( m [ y1 ] [ x2 ] == 1 && m [ y2 ] [ x1 ] == 1 && m [ y2 ] [ x2 ] == 1 ) || ( m [ y1 ] [ x2 ] == 0 ) ) return true ;
  return false ;
}
