int totalNodes ( Vector < int > adjac [ ] , int n , int x , int y ) {
  Boolean visited [ n + 1 ] ;
  memset ( visited , false , sizeof ( Boolean ) * n + 1 ) ;
  int p [ n ] ;
  Queue < int > q ;
  q . push ( x ) ;
  visited [ x ] = true ;
  int m ;
  while ( ! q . empty ( ) ) {
    m = q . front ( ) ;
    q . pop ( ) ;
    for ( int i = 0 ;
    i < adjac [ m ] . size ( ) ;
    ++ i ) {
      int h = adjac [ m ] [ i ] ;
      if ( visited [ h ] != true ) {
        visited [ h ] = true ;
        p [ h ] = m ;
        q . push ( h ) ;
      }
    }
  }
  int count = 0 ;
  int i = p [ y ] ;
  while ( i != x ) {
    count ++ ;
    i = p [ i ] ;
  }
  return count ;
}
