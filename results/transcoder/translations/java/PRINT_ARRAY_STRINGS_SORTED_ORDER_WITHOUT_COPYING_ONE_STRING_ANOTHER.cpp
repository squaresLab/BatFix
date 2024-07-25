void printInSortedOrder ( string arr [ ] , int n ) {
  int index [ n ] ;
  int i , j , min ;
  for ( i = 0 ;
  i < n ;
  i ++ ) index [ i ] = i ;
  for ( i = 0 ;
  i < n - 1 ;
  i ++ ) {
    min = i ;
    for ( j = i + 1 ;
    j < n ;
    j ++ ) {
      if ( arr [ index [ min ] ] > arr [ index [ j ] ] ) min = j ;
    }
    if ( min != i ) {
      int temp = index [ min ] ;
      index [ min ] = index [ i ] ;
      index [ i ] = temp ;
    }
  }
  for ( i = 0 ;
  i < n ;
  i ++ ) cout << arr [ index [ i ] ] << " " ;
}
