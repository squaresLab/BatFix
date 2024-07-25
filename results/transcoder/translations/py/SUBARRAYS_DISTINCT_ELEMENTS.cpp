public : int sumoflength ( vector < int > arr , int n ) {
  vector < int > s ;
  int j = 0 ;
  int ans = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    while ( ( j < n ) && ( arr [ j ] != 0 ) ) {
      s . push_back ( arr [ j ] ) ;
      j ++ ;
    }
    ans += ( ( j - i ) * ( j - i + 1 ) ) / 2 ;
    s . erase ( s . begin ( ) + i ) ;
  }
  return ans ;
}
