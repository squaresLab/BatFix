int sumNodes ( int l ) {
  int leafNodeCount = ( int ) pow ( 2 , l - 1 ) ;
  Vector < Vector < int >> vec ;
  for ( int i = 1 ;
  i <= l ;
  i ++ ) {
    vec . push_back ( Vector < int > ( ) ) ;
  }
  for ( int i = 1 ;
  i <= leafNodeCount ;
  i ++ ) {
    vec [ l - 1 ] . push_back ( i ) ;
  }
  for ( int i = l - 2 ;
  i >= 0 ;
  i -- ) {
    int k = 0 ;
    while ( k < vec [ i + 1 ] . size ( ) - 1 ) {
      vec [ i ] . push_back ( vec [ i + 1 ] [ k ] + vec [ i + 1 ] [ k + 1 ] ) ;
      k += 2 ;
    }
  }
  int sum = 0 ;
  for ( int i = 0 ;
  i < l ;
  i ++ ) {
    for ( int j = 0 ;
    j < vec [ i ] . size ( ) ;
    j ++ ) {
      sum += vec [ i ] [ j ] ;
    }
  }
  return sum ;
}
