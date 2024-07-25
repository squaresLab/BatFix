void reorder ( ) {
  for ( int i = 0 ;
  i < arr . size ( ) ;
  i ++ ) {
    while ( index [ i ] != i ) {
      int oldTargetI = index [ index [ i ] ] ;
      char oldTargetE = ( char ) arr [ index [ i ] ] ;
      arr [ index [ i ] ] = arr [ i ] ;
      index [ index [ i ] ] = index [ i ] ;
      index [ i ] = oldTargetI ;
      arr [ i ] = oldTargetE ;
    }
  }
}
