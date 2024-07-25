bool checkMarkov ( double m [ ] [ 3 ] ) {
  for ( int i = 0 ;
  i < 3 ;
  i ++ ) {
    double sum = 0 ;
    for ( int j = 0 ;
    j < 3 ;
    j ++ ) {
      sum = sum + m [ i ] [ j ] ;
    }
    if ( sum != 1 ) return false ;
  }
  return true ;
}
