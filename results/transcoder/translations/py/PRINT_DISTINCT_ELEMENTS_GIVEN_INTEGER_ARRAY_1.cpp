void printDistinct ( int arr [ ] , int n ) {
  sort ( arr , arr + n ) ;
  ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( i < n - 1 && arr [ i ] == arr [ i + 1 ] ) || ( i < n - 1 && ( arr [ i ] == arr [ i + 1 ] ) ) ) {
      while ( ( i < n - 1 && ( arr [ i ] == arr [ i + 1 ] ) ) || ( i < n - 1 && ( arr [ i ] == arr [ i + 1 ] ) ) ) {
        i ++ ;
      }
    }
    else {
      cout << arr [ i ] << " " ;
    }
    ;
  }
}
