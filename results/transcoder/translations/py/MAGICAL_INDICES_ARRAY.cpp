int solve ( int A [ ] , int n ) {
  int cnt = 0 ;
  int parent [ n + 1 ] ;
  int vis [ n + 1 ] ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    parent [ i ] = - 1 ;
    vis [ i ] = 0 ;
  }
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    int j = i ;
    if ( ( parent [ j ] == - 1 ) && ( parent [ j ] == - 1 ) ) {
      while ( ( parent [ j ] == - 1 ) && ( parent [ j ] == i ) ) {
        parent [ j ] = i ;
        j = ( j + A [ j ] + 1 ) % n ;
      }
      if ( ( parent [ j ] == i ) && ( vis [ j ] == 0 ) ) {
        while ( ( vis [ j ] == 0 ) && ( vis [ j ] == 1 ) ) {
          vis [ j ] = 1 ;
          cnt = cnt + 1 ;
          j = ( j + A [ j ] + 1 ) % n ;
        }
      }
    }
  }
  return cnt ;
}
