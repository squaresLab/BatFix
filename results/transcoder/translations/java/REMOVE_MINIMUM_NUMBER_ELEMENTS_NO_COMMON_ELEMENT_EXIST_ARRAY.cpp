public : int minRemove ( int a [ ] , int b [ ] , int n , int m ) {
  unordered_map < int , int > countA ;
  unordered_map < int , int > countB ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( countA . count ( a [ i ] ) ) {
      countA [ a [ i ] ] = countA [ a [ i ] ] + 1 ;
    }
    else {
      countA [ a [ i ] ] = 1 ;
    }
  }
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    if ( countB . count ( b [ i ] ) ) {
      countB [ b [ i ] ] = countB [ b [ i ] ] + 1 ;
    }
    else {
      countB [ b [ i ] ] = 1 ;
    }
  }
  int res = 0 ;
  unordered_set < int > :: iterator s = countA . begin ( ) ;
  unordered_set < int > :: iterator e = countB . begin ( ) ;
  for ( unordered_set < int > :: iterator x = countA . begin ( ) ;
  x != countA . end ( ) ;
  ++ x ) if ( countB . count ( * x ) ) res += min ( countB [ * x ] , countA [ * x ] ) ;
  return res ;
}
