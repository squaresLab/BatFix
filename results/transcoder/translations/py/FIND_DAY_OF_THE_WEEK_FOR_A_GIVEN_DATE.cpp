int dayofweek ( int d , int m , int y ) {
  static int t [ ] = {
    0 , 3 , 2 , 5 , 0 , 3 , 5 , 1 , 4 , 6 , 2 , 4 }
    ;
    y -= m < 3 ? 1 : 0 ;
    return ( ( y + ( int ) y / 4 ) - ( int ) y / 100 + ( int ) y / 400 + t [ m - 1 ] + d ) % 7 ;
  }
