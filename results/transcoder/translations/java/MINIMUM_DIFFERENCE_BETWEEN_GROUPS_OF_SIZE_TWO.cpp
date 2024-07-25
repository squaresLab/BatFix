long long calculate ( long long a [ ] , int n ) {
  sort ( a , a + n ) ;
  int i , j ;
  Vector < long long > s ;
  for ( i = 0 , j = n - 1 ;
  i < j ;
  i ++ , j -- ) {
    s . push_back ( ( a [ i ] + a [ j ] ) ) ;
  }
  long long mini = std :: min ( s . begin ( ) , s . end ( ) ) ;
  long long maxi = std :: max ( s . begin ( ) , s . end ( ) ) ;
  return std :: abs ( maxi - mini ) ;
}
