int numberofways ( string A , string B , int N , int M ) {
  vector < vector < int >> pos ;
  for ( int i = 0 ;
  i < MAX ;
  i ++ ) {
    pos . push_back ( vector < int > ( ) ) ;
  }
  for ( int i = 0 ;
  i < M ;
  i ++ ) {
    pos [ B [ i ] ] . push_back ( i + 1 ) ;
  }
  vector < vector < int >> dpl ( N + 2 , vector < int > ( M + 2 , 0 ) ) ;
  for ( int i = 1 ;
  i <= N ;
  i ++ ) {
    for ( int j = 1 ;
    j <= M ;
    j ++ ) {
      if ( A [ i - 1 ] == B [ j - 1 ] ) {
        dpl [ i ] [ j ] = dpl [ i - 1 ] [ j - 1 ] + 1 ;
      }
      else {
        dpl [ i ] [ j ] = max ( dpl [ i - 1 ] [ j ] , dpl [ i ] [ j - 1 ] ) ;
      }
    }
  }
  int LCS = dpl [ N ] [ M ] ;
  vector < vector < int >> dpr ( N + 2 , vector < int > ( M + 2 , 0 ) ) ;
  for ( int i = N ;
  i >= 1 ;
  i -- ) {
    for ( int j = M ;
    j >= 1 ;
    j -- ) {
      if ( A [ i - 1 ] == B [ j - 1 ] ) {
        dpr [ i ] [ j ] = dpr [ i + 1 ] [ j + 1 ] + 1 ;
      }
      else {
        dpr [ i ] [ j ] = max ( dpr [ i + 1 ] [ j ] , dpr [ i ] [ j + 1 ] ) ;
      }
    }
  }
  int ans = 0 ;
  for ( int i = 0 ;
  i <= N ;
  i ++ ) {
    for ( int j = 0 ;
    j < MAX ;
    j ++ ) {
      for ( int x : pos [ j ] ) {
        if ( dpl [ i ] [ x - 1 ] + dpr [ i + 1 ] [ x + 1 ] == LCS ) {
          ans ++ ;
          break ;
        }
      }
    }
  }
  return ans ;
}
