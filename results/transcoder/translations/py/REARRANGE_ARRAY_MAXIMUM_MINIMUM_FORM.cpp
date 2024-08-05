void rearrange ( int arr [ ] , int n ) {
  int temp [ n * sizeof ( int ) ] = {
    NULL }
    ;
    int small = 0 , large = n - 1 ;
    bool flag = true ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
      if ( flag == true ) {
        temp [ i ] = arr [ large ] ;
        large -- ;
      }
      else {
        temp [ i ] = arr [ small ] ;
        small ++ ;
      }
      flag = ( bool ) ( 1 - flag ) ;
    }
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
      arr [ i ] = temp [ i ] ;
    }
  }
