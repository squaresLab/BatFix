double sumNodes ( int l ) {
  double leafNodeCount = pow ( 2 , l - 1 ) ;
  double sumLastLevel = 0 ;
  sumLastLevel = ( leafNodeCount * ( leafNodeCount + 1 ) ) / 2 ;
  double sum = sumLastLevel * l ;
  return sum ;
}
