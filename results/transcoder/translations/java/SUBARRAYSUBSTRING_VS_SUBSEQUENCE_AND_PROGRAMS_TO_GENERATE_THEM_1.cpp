void printSubsequences ( int n ) {
  int opsize = ( int ) pow ( 2 , n ) ;
  for ( int counter = 1 ;
  counter < opsize ;
  counter ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      if ( isdigit ( counter ) ) {
        cout << arr [ j ] << " " ;
      }
    }
    cout << endl ;
  }
}
