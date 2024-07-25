void longestAlternating ( int arr [ ] , int n ) {
  int count [ n ] ;
  count [ n - 1 ] = 1 ;
  for ( int i = n - 2 ;
  i >= 0 ;
  i -- ) {
    if ( arr [ i ] * arr [ i + 1 ] < 0 ) {
      count [ i ] = count [ i + 1 ] + 1 ;
    }
    else {
      count [ i ] = 1 ;
    }
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    cout << count [ i ] << " " ;
  }
}
