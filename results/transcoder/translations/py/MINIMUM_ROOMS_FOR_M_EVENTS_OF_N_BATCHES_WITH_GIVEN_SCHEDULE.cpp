int findMinRooms ( char * * slots , int n , int m ) {
  int counts [ m ] = {
    0 }
    ;
    ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
      for ( int j = 0 ;
      j < m ;
      j ++ ) {
        if ( ( slots [ i ] [ j ] == '1' ) || ( slots [ i ] [ j ] == '2' ) ) {
          counts [ j ] ++ ;
        }
        ;
      }
    }
    return max ( counts ) ;
  }
  