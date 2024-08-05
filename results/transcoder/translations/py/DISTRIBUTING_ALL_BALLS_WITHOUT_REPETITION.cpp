bool distributingBalls ( int k , int n , string & s ) {
  int a [ MAX_CHAR ] = {
    0 }
    ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) a [ ( int ) string [ i ] - ( int ) 'a' ] ++ ;
    for ( int i = 0 ;
    i < MAX_CHAR ;
    i ++ ) if ( ( a [ i ] > k ) && ( a [ i ] < n ) ) return false ;
    return true ;
  }
