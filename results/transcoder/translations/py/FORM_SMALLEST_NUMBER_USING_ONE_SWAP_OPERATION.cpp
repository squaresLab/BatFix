public : string smallestNumber ( string num ) {
  int num [ 10 ] ;
  int n = num . size ( ) ;
  int rightMin [ n ] = {
    0 }
    ;
    int right ;
    rightMin [ n - 1 ] = - 1 ;
    ;
    right = n - 1 ;
    for ( int i = n - 2 ;
    i > 0 ;
    i -- ) {
      if ( num [ i ] > num [ right ] ) {
        rightMin [ i ] = right ;
      }
      else {
        rightMin [ i ] = - 1 ;
        right = i ;
      }
    }
    int small = - 1 ;
    for ( int i = 1 ;
    i < n ;
    i ++ ) {
      if ( num [ i ] != '0' ) {
        if ( small == - 1 ) {
          if ( num [ i ] < num [ 0 ] ) small = i ;
        }
        else if ( num [ i ] < num [ small ] ) small = i ;
      }
    }
    if ( small != - 1 ) {
      num [ 0 ] = num [ small ] ;
      num [ small ] = num [ 0 ] ;
    }
    else {
      for ( int i = 1 ;
      i < n ;
      i ++ ) {
        if ( rightMin [ i ] != - 1 ) {
          num [ i ] = num [ rightMin [ i ] ] ;
          break ;
        }
      }
    }
    return string ( num ) ;
  }
  