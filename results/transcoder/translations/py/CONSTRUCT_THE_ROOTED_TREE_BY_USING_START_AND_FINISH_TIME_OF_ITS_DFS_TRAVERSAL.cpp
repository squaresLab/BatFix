template < typename S , typename E > void Restore_Tree ( S & S , E & E ) {
  S Identity [ N * 2 ] ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) Identity [ Start [ i ] ] = i ;
  S parent [ N * 2 - 1 ] ;
  S curr_parent = Identity [ 0 ] ;
  for ( int j = 1 ;
  j < N ;
  j ++ ) {
    S child = Identity [ j ] ;
    if ( End [ child ] - j > 1 ) {
      parent [ child ] = curr_parent ;
      curr_parent = child ;
    }
    else {
      parent [ child ] = curr_parent ;
      while ( End [ child ] == End [ parent [ child ] ] ) {
        S child = parent [ child ] ;
        curr_parent = parent [ child ] ;
        if ( curr_parent == Identity [ 0 ] ) break ;
      }
    }
  }
  for ( int i = 0 ;
  i < N ;
  i ++ ) parent [ i ] ++ ;
}
