void find_max ( int A [ ] , int N , int K ) {
  map < int , int > Count ;
  for ( int i = 0 ;
  i < K - 1 ;
  i ++ ) Count [ A [ i ] ] = Count . find ( A [ i ] ) + 1 ;
  map < int , int > Myset ;
  for ( int x : Count ) if ( ( Count [ x ] == 1 ) || ( Count [ x ] == 0 ) ) Myset [ x ] = 1 ;
  for ( int i = K - 1 ;
  i < N ;
  i ++ ) {
    Count [ A [ i ] ] = Count . find ( A [ i ] ) + 1 ;
    if ( ( Count [ A [ i ] ] == 1 ) || ( Count [ A [ i ] ] == 0 ) ) Myset [ A [ i ] ] = 1 ;
    else -- Myset [ A [ i ] ] ;
    if ( ( Myset . size ( ) == 0 ) || ( Myset . size ( ) == 1 ) ) cout << "Nothing" << endl ;
    else {
      int maxm = - 10 * * 9 ;
      for ( int i = 0 ;
      i < Myset . size ( ) ;
      i ++ ) maxm = max ( i , maxm ) ;
      cout << maxm << endl ;
    }
    int x = A [ i - K + 1 ] ;
    if ( x < Count . size ( ) ) {
      Count [ x ] -- ;
      if ( ( Count [ x ] == 1 ) || ( Count [ x ] == 0 ) ) Myset [ x ] = 1 ;
      if ( ( Count [ x ] == 0 ) || ( Count [ x ] == 1 ) ) -- Myset [ x ] ;
    }
  }
}
