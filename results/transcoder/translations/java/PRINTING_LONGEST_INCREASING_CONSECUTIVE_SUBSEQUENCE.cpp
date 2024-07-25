void longestSubsequence ( vector < int > a , int n ) {
  unordered_map < int , int > mp ;
  vector < int > dp ( n , 0 ) ;
  int maximum = INT_MAX ;
  int index = - 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( mp [ a [ i ] - 1 ] ) {
      int lastIndex = mp [ a [ i ] - 1 ] - 1 ;
      dp [ i ] = 1 + dp [ lastIndex ] ;
    }
    else {
      dp [ i ] = 1 ;
    }
    mp [ a [ i ] ] = i + 1 ;
    if ( maximum < dp [ i ] ) {
      maximum = dp [ i ] ;
      index = i ;
    }
  }
  for ( int curr = a [ index ] - maximum + 1 ;
  curr <= a [ index ] ;
  curr ++ ) {
    cout << curr << " " ;
  }
}
