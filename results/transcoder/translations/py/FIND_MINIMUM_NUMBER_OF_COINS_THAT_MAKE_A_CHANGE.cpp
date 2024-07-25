int minCoins ( vector < int > & coins , int m , int V ) {
  if ( ( V == 0 ) || ( V == 1 ) ) return 0 ;
  int res = INT_MAX ;
  for ( int i = 0 ;
  i <= m ;
  i ++ ) {
    if ( ( coins [ i ] <= V ) && ( coins [ i ] > V ) ) {
      int sub_res = minCoins ( coins , m , V - coins [ i ] ) ;
      if ( ( sub_res != INT_MAX ) && ( sub_res + 1 < res ) ) res = sub_res + 1 ;
    }
  }
  return res ;
}
