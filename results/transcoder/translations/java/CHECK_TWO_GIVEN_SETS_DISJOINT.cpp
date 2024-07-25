bool aredisjoint ( int set1 [ ] , int set2 [ ] ) {
  for ( int i = 0 ;
  i < sizeof ( set1 ) / sizeof ( int ) ;
  i ++ ) {
    for ( int j = 0 ;
    j < sizeof ( set2 ) / sizeof ( int ) ;
    j ++ ) {
      if ( set1 [ i ] == set2 [ j ] ) return false ;
    }
  }
  return true ;
}
