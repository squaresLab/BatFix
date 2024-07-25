bool findPairs ( int arr [ ] , int n ) {
  unordered_map < int , pair < int , int >> Hash ;
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      int sum = arr [ i ] + arr [ j ] ;
      if ( sum < Hash . size ( ) ) {
        pair < int , int > prev = Hash . find ( sum ) ;
        cout << fixed << setprecision ( 2 ) << prev . second << " and (" << arr [ i ] << ", " << arr [ j ] << ")" << endl ;
        return true ;
      }
      else {
        Hash [ sum ] = make_pair ( arr [ i ] , arr [ j ] ) ;
      }
    }
  }
  return false ;
}
