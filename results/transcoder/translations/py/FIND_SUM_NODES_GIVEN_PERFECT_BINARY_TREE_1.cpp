int sumNodes ( int l ) {
  int leafNodeCount = pow ( 2 , l - 1 ) ;
  ;
  int sumLastLevel ;
  sumLastLevel = ( ( leafNodeCount * ( leafNodeCount + 1 ) ) / 2 ) ;
  ;
  int sum = sumLastLevel * l ;
  return ( int ) sum ;
}
