bool ifPossible ( int arr [ ] , int n ) {
  int cp [ n ] = {
    0 }
    ;
    cp = arr ;
    sort ( cp , cp + n ) ;
    for ( int i = 0 ;
    i <= n ;
    i ++ ) {
      if ( ( ! ( arr [ i ] == cp [ i ] ) && ! ( arr [ n - 1 - i ] == cp [ i ] ) ) || ( ! ( arr [ n - 1 - i ] == cp [ i ] ) && ! ( arr [ n - 1 - i ] == cp [ i ] ) ) ) return false ;
    }
    return true ;
  }
  