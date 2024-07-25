int getMinStepToReachEnd ( int arr [ ] , int N ) {
  bool visit [ N ] ;
  int distance [ N ] ;
  Vector < int > digit [ 10 ] ;
  for ( int i = 0 ;
  i < 10 ;
  i ++ ) {
    digit [ i ] . clear ( ) ;
  }
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    visit [ i ] = false ;
  }
  for ( int i = 1 ;
  i < N ;
  i ++ ) {
    digit [ arr [ i ] ] . push_back ( i ) ;
  }
  distance [ 0 ] = 0 ;
  visit [ 0 ] = true ;
  Queue < int > q ;
  q . push ( 0 ) ;
  while ( ! q . empty ( ) ) {
    int idx = q . front ( ) ;
    q . pop ( ) ;
    if ( idx == N - 1 ) break ;
    int d = arr [ idx ] ;
    for ( int i = 0 ;
    i < digit [ d ] . size ( ) ;
    i ++ ) {
      int nextidx = digit [ d ] [ i ] ;
      if ( ! visit [ nextidx ] ) {
        visit [ nextidx ] = true ;
        q . push ( nextidx ) ;
        distance [ nextidx ] = distance [ idx ] + 1 ;
      }
    }
    digit [ d ] . clear ( ) ;
    if ( idx - 1 >= 0 && ! visit [ idx - 1 ] ) {
      visit [ idx - 1 ] = true ;
      q . push ( idx - 1 ) ;
      distance [ idx - 1 ] = distance [ idx ] + 1 ;
    }
    if ( idx + 1 < N && ! visit [ idx + 1 ] ) {
      visit [ idx + 1 ] = true ;
      q . push ( idx + 1 ) ;
      distance [ idx + 1 ] = distance [ idx ] + 1 ;
    }
  }
  return distance [ N - 1 ] ;
}
