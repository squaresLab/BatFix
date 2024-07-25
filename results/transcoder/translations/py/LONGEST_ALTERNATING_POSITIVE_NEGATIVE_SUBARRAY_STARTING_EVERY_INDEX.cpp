void longestAlternating ( int * arr , int n ) {
  int * count = new int [ n ] ;
  count [ n - 1 ] = 1 ;
  int i = n - 2 ;
  while ( i >= 0 ) {
    if ( ( arr [ i ] * arr [ i + 1 ] < 0 ) && ( arr [ i ] * arr [ i + 1 ] > 0 ) ) {
      count [ i ] = count [ i + 1 ] + 1 ;
    }
    else {
      count [ i ] = 1 ;
    }
    ;
    i = i - 1 ;
  }
  i = 0 ;
  while ( i < n ) {
    cout << count [ i ] << " " ;
    i = i + 1 ;
  }
  ;
}
