public : int numberOfPaths ( int p , int q ) {
  vector < int > dp ( q , 1 ) ;
  for ( int i = 0 ;
  i < q ;
  i ++ ) {
    for ( int j = 1 ;
    j < q ;
    j ++ ) {
      dp [ j ] += dp [ j - 1 ] ;
    }
  }
  return dp [ q - 1 ] ;
}
