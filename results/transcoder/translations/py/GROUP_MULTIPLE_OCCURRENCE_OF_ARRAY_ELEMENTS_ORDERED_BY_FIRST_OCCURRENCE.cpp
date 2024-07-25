void groupElements ( int arr [ ] , int n ) {
  bool visited [ n ] ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) visited [ i ] = false ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( ( visited [ i ] == false ) && ( arr [ i ] == arr [ j ] ) ) {
      cout << arr [ i ] << " " ;
      for ( int j = i + 1 ;
      j < n ;
      j ++ ) {
        if ( ( arr [ i ] == arr [ j ] ) && ( arr [ i ] == arr [ j ] ) ) {
          cout << arr [ i ] << " " ;
          visited [ j ] = true ;
        }
      }
    }
  }
}
