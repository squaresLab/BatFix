int minOps ( int arr [ ] , int n , int k ) {
  int max1 = max ( arr ) ;
  double res = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( ( ( max1 - arr [ i ] ) % k != 0 ) && ( ( max1 - arr [ i ] ) / k != 0 ) ) return - 1 ;
    else res += ( max1 - arr [ i ] ) / k ;
  }
  return ( int ) res ;
}
