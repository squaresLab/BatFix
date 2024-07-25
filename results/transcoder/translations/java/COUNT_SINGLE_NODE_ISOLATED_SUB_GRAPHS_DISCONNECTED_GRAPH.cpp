int compute ( int * graph , int N ) {
  int count = 0 ;
  for ( int i = 1 ;
  i < 7 ;
  i ++ ) {
    if ( graph [ i ] == 0 ) {
      count ++ ;
    }
  }
  return count ;
}
