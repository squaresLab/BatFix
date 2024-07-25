void oddEvenSort ( int arr [ ] , int n ) {
  bool isSorted = false ;
  while ( ! isSorted ) {
    isSorted = true ;
    int temp = 0 ;
    for ( int i = 1 ;
    i <= n - 2 ;
    i = i + 2 ) {
      if ( arr [ i ] > arr [ i + 1 ] ) {
        temp = arr [ i ] ;
        arr [ i ] = arr [ i + 1 ] ;
        arr [ i + 1 ] = temp ;
        isSorted = false ;
      }
    }
    for ( int i = 0 ;
    i <= n - 2 ;
    i = i + 2 ) {
      if ( arr [ i ] > arr [ i + 1 ] ) {
        temp = arr [ i ] ;
        arr [ i ] = arr [ i + 1 ] ;
        arr [ i + 1 ] = temp ;
        isSorted = false ;
      }
    }
  }
  return ;
}
