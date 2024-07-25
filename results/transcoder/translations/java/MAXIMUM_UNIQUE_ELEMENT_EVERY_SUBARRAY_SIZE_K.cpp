void find_max ( int A [ ] , int N , int K ) {
  unordered_map < int , int > Count ;
  for ( int i = 0 ;
  i < K - 1 ;
  i ++ ) if ( Count . count ( A [ i ] ) ) Count [ A [ i ] ] = 1 + Count [ A [ i ] ] ;
  else Count [ A [ i ] ] = 1 ;
  unordered_set < int > Myset ;
  for ( auto x : Count ) {
    if ( int ( str ( x ) ) == 1 ) Myset . insert ( int ( str ( x ) ) ) ;
  }
  for ( int i = K - 1 ;
  i < N ;
  i ++ ) {
    if ( Count . count ( A [ i ] ) ) Count [ A [ i ] ] = 1 + Count [ A [ i ] ] ;
    else Count [ A [ i ] ] = 1 ;
    if ( int ( str ( Count [ A [ i ] ] ) ) == 1 ) Myset . insert ( A [ i ] ) ;
    else Myset . erase ( A [ i ] ) ;
    if ( Myset . size ( ) == 0 ) cout << "Nothing" << endl ;
    else cout << Myset . last ( ) << endl ;
    int x = A [ i - K + 1 ] ;
    Count [ x ] = Count [ x ] - 1 ;
    if ( int ( str ( Count [ x ] ) ) == 1 ) Myset . insert ( x ) ;
    if ( int ( str ( Count [ x ] ) ) == 0 ) Myset . erase ( x ) ;
  }
}
