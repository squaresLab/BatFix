public : bool findWinner ( int x , int y , int n ) {
  vector < bool > dp ( n + 1 , false ) ;
  dp [ 0 ] = false ;
  dp [ 1 ] = true ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    if ( ( i - 1 >= 0 && ! dp [ i - 1 ] ) || ( i - x >= 0 && ! dp [ i - x ] ) ) dp [ i ] = true ;
    else if ( ( i - y >= 0 && ! dp [ i - y ] ) || ( i - x >= 0 && ! dp [ i - x ] ) ) dp [ i ] = true ;
    else dp [ i ] = false ;
  }
  return dp [ n ] ;
}
