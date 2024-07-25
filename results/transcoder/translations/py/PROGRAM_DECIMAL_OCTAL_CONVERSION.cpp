void decToOctal ( int n ) {
  int octalNum [ 100 ] ;
  ;
  int i = 0 ;
  ;
  while ( ( n != 0 ) && ( n != 1 ) ) {
    octalNum [ i ] = n % 8 ;
    n = ( int ) ( n / 8 ) ;
    i ++ ;
  }
  ;
  for ( int j = i - 1 ;
  j >= 0 ;
  j -- ) {
    cout << octalNum [ j ] << " " ;
  }
  ;
}
