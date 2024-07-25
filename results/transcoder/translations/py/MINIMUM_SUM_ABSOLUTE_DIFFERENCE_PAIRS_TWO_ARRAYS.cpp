int findMinSum ( vector < int > & a , vector < int > & b , int n ) {
  sort ( a . begin ( ) , a . end ( ) ) ;
  sort ( b . begin ( ) , b . end ( ) ) ;
  int sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) sum = sum + abs ( a [ i ] - b [ i ] ) ;
  return sum ;
}
