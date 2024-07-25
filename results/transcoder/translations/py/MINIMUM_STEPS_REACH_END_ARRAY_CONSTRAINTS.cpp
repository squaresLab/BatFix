int getMinStepToReachEnd ( int arr [ ] , int N ) {
  bool visit [ N ] ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) visit [ i ] = false ;
  int distance [ N ] ;
  int digit [ 10 ] ;
  for ( int i = 1 ;
  i < N ;
  i ++ ) digit [ arr [ i ] ] . push_back ( i ) ;
  distance [ 0 ] = 0 ;
  visit [ 0 ] = true ;
  std :: vector < int > q ;
  q . push_back ( 0 ) ;
  while ( ( q . size ( ) > 0 ) && ( q . back ( ) > 0 ) ) {
    int idx = q . back ( ) ;
    q . pop_back ( ) ;
    if ( ( idx == N - 1 ) || ( idx < 0 ) ) break ;
    int d = arr [ idx ] ;
    for ( int i = 0 ;
    i < digit [ d ] . size ( ) ;
    i ++ ) {
      int nextidx = digit [ d ] [ i ] ;
      if ( ( visit [ nextidx ] == false ) && ( visit [ nextidx ] == true ) ) {
        visit [ nextidx ] = true ;
        q . push_back ( nextidx ) ;
        distance [ nextidx ] = distance [ idx ] + 1 ;
      }
    }
    if ( ( idx - 1 >= 0 ) && visit [ idx - 1 ] == false ) {
      visit [ idx - 1 ] = true ;
      q . push_back ( idx - 1 ) ;
      distance [ idx - 1 ] = distance [ idx ] + 1 ;
    }
    if ( ( idx + 1 < N ) && visit [ idx + 1 ] == false ) {
      visit [ idx + 1 ] = true ;
      q . push_back ( idx + 1 ) ;
      distance [ idx + 1 ] = distance [ idx ] + 1 ;
    }
  }
  return distance [ N - 1 ] ;
}
