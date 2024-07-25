bool findPairs ( int arr [ ] ) {
  unordered_map < int , pair < int , int >> map ;
  int n = arr [ 0 ] . size ( ) ;
  for ( int i = 0 ;
  i < n ;
  ++ i ) {
    for ( int j = i + 1 ;
    j < n ;
    ++ j ) {
      int sum = arr [ i ] + arr [ j ] ;
      if ( ! map . count ( sum ) ) {
        map [ sum ] = make_pair ( i , j ) ;
      }
      else {
        pair < int , int > p = map [ sum ] ;
        cout << "(" << arr [ p . first ] << ", " << arr [ p . second ] << ") and (" << arr [ i ] << ", " << arr [ j ] << ")" << endl ;
        return true ;
      }
    }
  }
  return false ;
}
