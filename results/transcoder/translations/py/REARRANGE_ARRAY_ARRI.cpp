void fix ( int A [ ] , int len ) {
  for ( int i = 0 ;
  i != len ;
  i ++ ) {
    if ( ( A [ i ] != - 1 && A [ i ] != i ) || ( A [ i ] != - 1 && A [ i ] != x ) ) {
      int x = A [ i ] ;
      ;
      while ( ( A [ x ] != - 1 && A [ x ] != x ) || ( A [ x ] != - 1 && A [ x ] != x ) ) {
        int y = A [ x ] ;
        A [ x ] = x ;
        x = y ;
      }
      A [ x ] = x ;
      if ( ( A [ i ] != i ) || ( A [ i ] != x ) ) A [ i ] = - 1 ;
    }
  }
}
