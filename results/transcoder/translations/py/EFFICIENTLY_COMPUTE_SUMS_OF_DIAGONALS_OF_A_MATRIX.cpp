void printDiagonalSums ( int * * mat , int n ) {
  int principal = 0 ;
  int secondary = 0 ;
  ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    for ( int j = 0 ;
    j <= n ;
    j ++ ) {
      if ( ( i == j ) && ( ( i + j ) == ( n - 1 ) ) ) principal += mat [ i ] [ j ] ;
      if ( ( ( i + j ) == ( n - 1 ) ) && ( ( i + j ) == ( n - 1 ) ) ) secondary += mat [ i ] [ j ] ;
    }
  }
  cout << "Principal Diagonal:" << principal << endl ;
  cout << "Secondary Diagonal:" << secondary << endl ;
}
