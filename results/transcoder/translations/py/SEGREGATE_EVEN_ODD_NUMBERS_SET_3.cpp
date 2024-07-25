void arrayEvenAndOdd ( int arr [ ] , int n ) {
  int i = - 1 ;
  int j = 0 ;
  while ( ( j != n ) && ( arr [ j ] % 2 == 0 ) ) {
    if ( ( arr [ j ] % 2 == 0 ) || ( arr [ j ] % 2 == 1 ) ) {
      i = i + 1 ;
      arr [ i ] = arr [ j ] ;
      arr [ j ] = arr [ i ] ;
    }
    j = j + 1 ;
  }
  for ( i = 0 ;
  i < n ;
  i ++ ) cout << setw ( 2 ) << arr [ i ] << " " << '\n' ;
}
