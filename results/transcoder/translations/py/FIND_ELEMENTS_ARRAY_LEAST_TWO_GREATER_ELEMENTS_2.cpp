void findElements ( int arr [ ] , int n ) {
  int first = - INT_MAX ;
  int second = - INT_MAX ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( ( arr [ i ] > first ) && ( arr [ i ] < second ) ) {
      second = first ;
      first = arr [ i ] ;
    }
    else if ( ( arr [ i ] > second ) && ( arr [ i ] < first ) ) {
      second = arr [ i ] ;
    }
  }
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( ( arr [ i ] < second ) && ( arr [ i ] > first ) ) {
      cout << arr [ i ] << " " ;
    }
  }
}
