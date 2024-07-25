void interchangeFirstLast ( vector < vector < int >> & m ) {
  int rows = m . size ( ) ;
  for ( int i = 0 ;
  i < m [ 0 ] . size ( ) ;
  i ++ ) {
    int t = m [ 0 ] [ i ] ;
    m [ 0 ] [ i ] = m [ rows - 1 ] [ i ] ;
    m [ rows - 1 ] [ i ] = t ;
  }
}
