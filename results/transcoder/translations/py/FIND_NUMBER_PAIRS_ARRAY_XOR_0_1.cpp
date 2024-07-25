public : int calculate ( vector < int > a ) {
  int maximum = max ( a ) ;
  vector < int > frequency ( maximum + 1 , 0 ) ;
  for ( int i = 0 ;
  i < a . size ( ) ;
  i ++ ) {
    frequency [ i ] ++ ;
  }
  int answer = 0 ;
  for ( int i = 0 ;
  i < frequency . size ( ) ;
  i ++ ) {
    answer = answer + i * ( frequency [ i ] - 1 ) / 2 ;
  }
  return answer ;
}
