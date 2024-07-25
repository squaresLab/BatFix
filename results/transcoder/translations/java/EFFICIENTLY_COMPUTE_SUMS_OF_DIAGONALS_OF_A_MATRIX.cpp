void printDiagonalSums ( vector < vector < int >> & mat , int n ) {
  int principal = 0 , secondary = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      if ( i == j ) {
        principal += mat [ i ] [ j ] ;
      }
      if ( ( i + j ) == ( n - 1 ) ) {
        secondary += mat [ i ] [ j ] ;
      }
    }
  }
  cout << "Principal Diagonal:" << principal << endl ;
  cout << "Secondary Diagonal:" << secondary << endl ;
}
