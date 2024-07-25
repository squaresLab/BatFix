int returnMaxSum ( int A [ ] , int B [ ] , int n ) {
  set < int > mp ;
  int result = 0 ;
  int currSum = currBegin = 0 ;
  for ( int i = 0 ;
  i != n ;
  i ++ ) {
    while ( A [ i ] < mp [ i ] ) {
      mp . erase ( A [ currBegin ] ) ;
      currSum -= B [ currBegin ] ;
      currBegin ++ ;
    }
    mp . insert ( A [ i ] ) ;
    currSum += B [ i ] ;
    result = max ( result , currSum ) ;
  }
  return result ;
}
