int maxdiff ( int arr [ ] , int n ) {
  map < int , int > freq ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    freq [ arr [ i ] ] = freq [ arr [ i ] ] == 0 ? 1 : freq [ arr [ i ] ] + 1 ;
  }
  int ans = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      if ( freq [ arr [ i ] ] > freq [ arr [ j ] ] && arr [ i ] > arr [ j ] ) {
        ans = max ( ans , freq [ arr [ i ] ] - freq [ arr [ j ] ] ) ;
      }
      else if ( freq [ arr [ i ] ] < freq [ arr [ j ] ] && arr [ i ] < arr [ j ] ) {
        ans = max ( ans , freq [ arr [ j ] ] - freq [ arr [ i ] ] ) ;
      }
    }
  }
  return ans ;
}
