int remainderWith7 ( string num ) {
  static int series [ ] = {
    1 , 3 , 2 , - 1 , - 3 , - 2 }
    ;
    ;
    int seriesIndex = 0 ;
    int result = 0 ;
    for ( int i = ( num . length ( ) - 1 ) ;
    i >= 0 ;
    i -- ) {
      int digit = ( int ) num [ i ] - 48 ;
      result += digit * series [ seriesIndex ] ;
      seriesIndex = ( seriesIndex + 1 ) % 6 ;
      result %= 7 ;
    }
    if ( ( result < 0 ) || ( result > 7 ) ) result = ( result + 7 ) % 7 ;
    return result ;
  }
