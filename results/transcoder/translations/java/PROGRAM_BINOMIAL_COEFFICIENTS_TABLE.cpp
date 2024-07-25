void printbinomial ( int max ) {
  for ( int m = 0 ;
  m <= max ;
  m ++ ) {
    cout << m << " " ;
    int binom = 1 ;
    for ( int x = 0 ;
    x <= m ;
    x ++ ) {
      if ( m != 0 && x != 0 ) {
        binom = binom * ( m - x + 1 ) / x ;
      }
      cout << binom << " " ;
    }
    cout << endl ;
  }
}
