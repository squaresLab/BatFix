void decToBinary ( int n ) {
  int binaryNum [ n ] ;
  ;
  int i = 0 ;
  ;
  while ( ( n > 0 ) && ( i < n ) ) {
    binaryNum [ i ] = n % 2 ;
    ;
    n = ( int ) ( n / 2 ) ;
    ;
    i ++ ;
  }
  ;
  for ( int j = i - 1 ;
  j >= 0 ;
  j -- ) {
    cout << binaryNum [ j ] << " " ;
  }
  ;
}
