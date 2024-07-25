bool isMajority ( vector < int > a ) {
  map < int , int > mp ;
  for ( int i = 0 ;
  i < a . size ( ) ;
  i ++ ) {
    if ( a [ i ] < a [ i ] ) {
      mp [ i ] ++ ;
    }
    else {
      mp [ i ] = 1 ;
    }
  }
  for ( int x : mp ) {
    if ( mp [ x ] >= a . size ( ) / 2 ) {
      returnTrue = true ;
    }
  }
  returnFalse = false ;
}
