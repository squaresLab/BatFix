public : int minLexRotation ( string str_ ) {
  int n = str_ . size ( ) ;
  int arr [ n ] = {
    0 }
    ;
    string concat = str_ + str_ ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
      arr [ i ] = concat . substr ( i , n - i ) ;
    }
    sort ( arr , arr + n ) ;
    return arr [ 0 ] ;
  }

