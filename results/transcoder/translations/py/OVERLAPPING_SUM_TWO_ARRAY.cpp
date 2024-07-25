public : int findSum ( vector < int > A , vector < int > B , int n ) {
  unordered_map < int , int > Hash ;
  for ( int i = 0 ;
  i != n ;
  ++ i ) {
    Hash [ A [ i ] ] ++ ;
    Hash [ B [ i ] ] ++ ;
  }
  int Sum = 0 ;
  for ( auto x : Hash ) {
    if ( Hash [ x ] == 1 ) Sum += x ;
  }
  return Sum ;
}
