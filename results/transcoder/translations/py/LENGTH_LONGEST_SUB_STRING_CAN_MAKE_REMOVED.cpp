public : int longestNull ( string S ) {
  vector < pair < string , int >> arr ;
  arr . push_back ( make_pair ( "@" , - 1 ) ) ;
  int maxlen = 0 ;
  for ( int i = 0 ;
  i < S . size ( ) ;
  i ++ ) {
    arr . push_back ( make_pair ( S [ i ] , i ) ) ;
    while ( ( arr . size ( ) >= 3 && arr [ arr . size ( ) - 3 ] . first == '1' && arr [ arr . size ( ) - 2 ] . first == '0' && arr [ arr . size ( ) - 1 ] . first == '0' ) || ( arr . size ( ) >= 2 && arr [ arr . size ( ) - 1 ] . first == '1' && arr [ arr . size ( ) - 2 ] . first == '0' ) ) {
      arr . pop_back ( ) ;
      arr . pop_back ( ) ;
      arr . pop_back ( ) ;
    }
    pair < string , int > tmp = arr . back ( ) ;
    maxlen = max ( maxlen , i - tmp . second ) ;
  }
  return maxlen ;
}
