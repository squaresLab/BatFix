public : int countWays ( string s ) {
  int count [ 26 ] = {
    0 }
    ;
    ;
    for ( int x = 0 ;
    x < s . length ( ) ;
    x ++ ) {
      count [ ( int ) s [ x ] - ( int ) s [ x ] ] = ( count [ ( int ) s [ x ] - ( int ) s [ x ] ] ) + 1 ;
    }
    ;
    count [ ( int ) s [ 0 ] - ( int ) s [ 0 ] ] = 1 ;
    int ans = 1 ;
    for ( int i = 0 ;
    i < 26 ;
    i ++ ) {
      if ( ( count [ i ] != 0 ) && ( count [ i ] != 1 ) ) {
        ans *= count [ i ] ;
      }
    }
    return ans ;
  }
