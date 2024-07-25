int equilibrium ( vector < int > arr ) {
  int totalSum = sum ( arr ) ;
  int leftsum = 0 ;
  for ( int i = 0 , num = arr . size ( ) ;
  i < num ;
  i ++ ) {
    totalSum -= arr [ i ] ;
    if ( leftsum == totalSum ) return i ;
    leftsum += arr [ i ] ;
  }
  return - 1 ;
}
