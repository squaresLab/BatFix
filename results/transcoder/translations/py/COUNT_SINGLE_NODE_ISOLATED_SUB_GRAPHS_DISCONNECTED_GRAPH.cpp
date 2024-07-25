int compute ( vector < int > & graph , int N ) {
  int count = 0 ;
  for ( int i = 1 ;
  i <= N ;
  i ++ ) {
    if ( ( graph [ i ] ) . size ( ) == 0 ) {
      count ++ ;
    }
  }
  return count ;
}
