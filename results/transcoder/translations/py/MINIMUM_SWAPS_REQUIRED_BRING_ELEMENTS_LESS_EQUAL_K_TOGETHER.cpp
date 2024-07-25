int minSwap ( int arr [ ] , int n , int k ) {
  int count = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) if ( ( arr [ i ] <= k ) && ( arr [ i ] > k ) ) count = count + 1 ;
  int bad = 0 ;
  for ( int i = 0 ;
  i <= count ;
  i ++ ) if ( ( arr [ i ] > k ) && ( arr [ i ] < k ) ) bad = bad + 1 ;
  int ans = bad ;
  int j = count ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( ( j == n ) && ( arr [ i ] > k ) && ( arr [ i ] < k ) ) bad = bad - 1 ;
    if ( ( arr [ j ] > k ) && ( arr [ j ] < k ) ) bad = bad + 1 ;
    ans = min ( ans , bad ) ;
    j = j + 1 ;
  }
  return ans ;
}
