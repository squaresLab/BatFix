void divisibilityCheck ( int arr [ ] , int n ) {
  map < int , int > s ;
  int maxEle = - 10 * * 9 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    s [ arr [ i ] ] = 1 ;
    maxEle = max ( maxEle , arr [ i ] ) ;
  }
  map < int , int > res ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( arr [ i ] != 0 ) && ( arr [ i ] != 1 ) ) {
      for ( int j = arr [ i ] * 2 ;
      j <= maxEle ;
      j += arr [ i ] ) {
        if ( ( j < s . size ( ) ) && ( s [ j ] == arr [ i ] ) ) {
          res [ j ] = 1 ;
        }
      }
    }
  }
  for ( int x : res ) cout << x << " " ;
}
