public : int totalNodes ( vector < vector < int >> & adjac , int n , int x , int y ) {
  vector < int > visited ( n + 1 ) ;
  vector < int > p ( n + 1 ) ;
  vector < int > q ;
  q . push_back ( x ) ;
  visited [ x ] = true ;
  int m ;
  while ( ( ! q . empty ( ) ) && ( m < adjac [ m ] . size ( ) ) ) {
    m = q . front ( ) ;
    for ( int i = 0 ;
    i < adjac [ m ] . size ( ) ;
    i ++ ) {
      int h = adjac [ m ] [ i ] ;
      if ( ( ! visited [ h ] ) && ( h < x ) ) {
        visited [ h ] = true ;
        p [ h ] = m ;
        q . pop_front ( ) ;
      }
    }
  }
  int count = 0 ;
  int i = p [ y ] ;
  while ( ( i != x ) && ( i != y ) ) {
    count ++ ;
    i = p [ i ] ;
  }
  return count ;
}
