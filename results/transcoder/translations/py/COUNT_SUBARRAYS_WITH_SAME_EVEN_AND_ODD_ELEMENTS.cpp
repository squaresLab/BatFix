public : int countSubarrays ( int arr [ ] , int n ) {
  int difference = 0 ;
  int ans = 0 ;
  int hashPositive [ n + 1 ] ;
  int hashNegative [ n + 1 ] ;
  hashPositive [ 0 ] = 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( arr [ i ] & 1 == 1 ) && ( arr [ i + 1 ] & 1 == 1 ) ) {
      difference = difference + 1 ;
    }
    else {
      difference = difference - 1 ;
    }
    if ( ( difference < 0 ) || ( difference > n ) ) {
      ans += hashNegative [ - difference ] ;
      hashNegative [ - difference ] = hashNegative [ - difference ] + 1 ;
    }
    else {
      ans += hashPositive [ difference ] ;
      hashPositive [ difference ] = hashPositive [ difference ] + 1 ;
    }
  }
  return ans ;
}
