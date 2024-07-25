public : int longestCommonSum ( vector < int > & arr1 , vector < int > & arr2 , int n ) {
  int maxLen = 0 ;
  int presum1 = presum2 = 0 ;
  map < int , int > diff ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    presum1 += arr1 [ i ] ;
    presum2 += arr2 [ i ] ;
    int currDiff = presum1 - presum2 ;
    if ( currDiff == 0 ) {
      maxLen = i + 1 ;
    }
    else if ( currDiff != 0 ) {
      diff [ currDiff ] = i ;
    }
    else {
      int length = i - diff [ currDiff ] ;
      maxLen = max ( maxLen , length ) ;
    }
  }
  return maxLen ;
}
