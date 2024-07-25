public : int minimumCost ( int a [ ] , int n ) {
  int mn = INT_MAX ;
  int sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    mn = min ( a [ i ] , mn ) ;
    sum += a [ i ] ;
  }
  return mn * ( sum - mn ) ;
}
