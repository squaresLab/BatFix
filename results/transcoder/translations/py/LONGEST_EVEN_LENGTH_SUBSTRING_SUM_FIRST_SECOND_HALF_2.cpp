public : int findLength ( string & string , int n ) {
  vector < int > Sum ( n + 1 , 0 ) ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) Sum [ i ] = ( Sum [ i - 1 ] + ( int ) string [ i - 1 ] ) ;
  int ans = 0 ;
  for ( int length = 2 ;
  length <= n ;
  length += 2 ) {
    for ( int i = 0 ;
    i <= n - length + 1 ;
    i ++ ) {
      int j = i + length - 1 ;
      if ( ( Sum [ i + length / 2 ] - Sum [ i ] == Sum [ i + length ] - Sum [ i + length / 2 ] ) && ( Sum [ j ] - Sum [ j ] ) == ( Sum [ j + length / 2 ] - Sum [ j + length ] ) ) ans = max ( ans , length ) ;
    }
  }
  return ans ;
}
