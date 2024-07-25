public : int findLongestConseqSubseq ( vector < int > arr , int n ) {
  Set < int > s ;
  int ans = 0 ;
  for ( auto ele : arr ) s . insert ( ele ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( arr [ i ] - 1 ) != s . end ( ) ) {
      int j = arr [ i ] ;
      while ( ( j < s . end ( ) ) && ( j != arr [ i ] ) ) j ++ ;
      ans = max ( ans , j - arr [ i ] ) ;
    }
  }
  return ans ;
}
