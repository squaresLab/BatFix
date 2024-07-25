void oddEvenSort ( int arr [ ] , int n ) {
  int isSorted = 0 ;
  while ( isSorted == 0 ) {
    isSorted = 1 ;
    int temp ;
    for ( temp = 1 ;
    temp < n - 1 ;
    temp += 2 ) {
      if ( arr [ temp ] > arr [ temp + 1 ] ) {
        arr [ temp ] = arr [ temp + 1 ] ;
        arr [ temp + 1 ] = arr [ temp ] ;
        isSorted = 0 ;
      }
    }
    for ( temp = 0 ;
    temp < n - 1 ;
    temp += 2 ) {
      if ( arr [ temp ] > arr [ temp + 1 ] ) {
        arr [ temp ] = arr [ temp + 1 ] ;
        arr [ temp + 1 ] = arr [ temp ] ;
        isSorted = 0 ;
      }
    }
  }
  return ;
}
