void arrayEvenAndOdd ( int arr [ ] , int n ) {
  int i = - 1 , j = 0 ;
  while ( j != n ) {
    if ( arr [ j ] % 2 == 0 ) {
      i ++ ;
      int temp = arr [ i ] ;
      arr [ i ] = arr [ j ] ;
      arr [ j ] = temp ;
    }
    j ++ ;
  }
  for ( int k = 0 ;
  k < n ;
  k ++ ) {
    cout << arr [ k ] << " " ;
  }
}
