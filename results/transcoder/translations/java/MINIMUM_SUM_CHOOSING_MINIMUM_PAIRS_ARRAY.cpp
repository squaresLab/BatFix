int minSum ( vector < int > & A , int n ) {
  int min_val = accumulate ( A . begin ( ) , A . end ( ) , 0 ) ;
  return ( min_val * ( n - 1 ) ) ;
}
