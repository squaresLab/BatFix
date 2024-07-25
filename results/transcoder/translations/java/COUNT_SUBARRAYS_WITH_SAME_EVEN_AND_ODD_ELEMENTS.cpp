int countSubarrays ( int arr [ ] , int n ) {
  int difference = 0 ;
  int ans = 0 ;
  int hash_positive [ n + 1 ] ;
  int hash_negative [ n + 1 ] ;
  hash_positive [ 0 ] = 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( arr [ i ] & 1 ) == 1 ) difference ++ ;
    else difference -- ;
    if ( difference < 0 ) {
      ans += hash_negative [ - difference ] ;
      hash_negative [ - difference ] ++ ;
    }
    else {
      ans += hash_positive [ difference ] ;
      hash_positive [ difference ] ++ ;
    }
  }
  return ans ;
}
