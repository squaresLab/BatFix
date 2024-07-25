public : int minSwaps ( vector < int > arr ) {
  int n = arr . size ( ) ;
  vector < pair < int , int >> arrpos ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    arrpos . push_back ( make_pair ( arr [ i ] , i ) ) ;
  }
  arrpos . sort ( [ ] ( pair < int , int > o1 , pair < int , int > o2 ) {
    if ( o1 . first > o2 . first ) return - 1 ;
    else if ( o1 . first == o2 . first ) return 0 ;
    else return 1 ;
  }
  ) ;
  vector < bool > vis ( n , false ) ;
  memset ( vis . begin ( ) , 0 , n ) ;
  int ans = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( vis [ i ] || arrpos [ i ] . second == i ) continue ;
    int cycle_size = 0 ;
    int j = i ;
    while ( ! vis [ j ] ) {
      vis [ j ] = true ;
      j = arrpos [ j ] . second ;
      cycle_size ++ ;
    }
    if ( cycle_size ) ans += ( cycle_size - 1 ) ;
  }
  return ans ;
}
