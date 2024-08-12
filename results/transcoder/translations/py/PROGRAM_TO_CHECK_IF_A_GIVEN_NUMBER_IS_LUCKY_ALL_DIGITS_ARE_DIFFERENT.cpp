int isLucky ( int n ) {
  int ar [ 10 ] = {
    0 }
    ;
    while ( ( n > 0 ) && ( ar [ n ] ) ) {
      int digit = floor ( n % 10 ) ;
      if ( ( ar [ digit ] ) ) return 0 ;
      ar [ digit ] = 1 ;
      n = n / 10 ;
    }
    return 1 ;
  }
