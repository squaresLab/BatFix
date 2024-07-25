int maxLen ( int arr [ ] ) {
  unordered_map < int , int > hash_map ;
  int maxLen = 0 ;
  int currSum = 0 ;
  for ( int i = 0 ;
  i < arr . size ( ) ;
  i ++ ) {
    currSum += arr [ i ] ;
    if ( arr [ i ] == 0 && maxLen == 0 ) maxLen = 1 ;
    if ( currSum == 0 ) maxLen = i + 1 ;
    if ( currSum < hash_map . size ( ) ) maxLen = max ( maxLen , i - hash_map . size ( ) ) ;
    else hash_map [ currSum ] = i ;
  }
  return maxLen ;
}
