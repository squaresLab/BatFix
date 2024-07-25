void findPairs ( int arr1 [ ] , int arr2 [ ] , int n , int m , int x ) {
  unordered_map < int , int > s ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    s [ arr1 [ i ] ] = 0 ;
  }
  for ( int j = 0 ;
  j < m ;
  j ++ ) if ( s . count ( x - arr2 [ j ] ) ) cout << x - arr2 [ j ] << " " << arr2 [ j ] << endl ;
}
