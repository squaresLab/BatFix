void findElements ( int arr [ ] , int n ) {
  int first = INT_MAX ;
  int second = INT_MAX ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] > first ) {
      second = first ;
      first = arr [ i ] ;
    }
    else if ( arr [ i ] > second ) {
      second = arr [ i ] ;
    }
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) if ( arr [ i ] < second ) cout << arr [ i ] << " " ;
}
