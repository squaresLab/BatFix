int maxSubarrayXOR ( int arr [ ] , int n ) {
  int ans = - 2147483648 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int curr_xor = 0 ;
    for ( int j = i ;
    j < n ;
    j ++ ) {
      curr_xor = curr_xor ^ arr [ j ] ;
      ans = max ( ans , curr_xor ) ;
    }
  }
  return ans ;
}
