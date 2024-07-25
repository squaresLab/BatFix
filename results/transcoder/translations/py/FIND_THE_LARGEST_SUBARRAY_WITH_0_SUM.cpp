int maxLen ( int arr [ ] ) {
  int maxLen = 0 ;
  for ( int i = 0 ;
  i < arr . length ;
  i ++ ) {
    int currSum = 0 ;
    for ( int j = i ;
    j < arr . length ;
    j ++ ) {
      currSum += arr [ j ] ;
      if ( currSum == 0 ) maxLen = max ( maxLen , j - i + 1 ) ;
    }
  }
  return maxLen ;
}
