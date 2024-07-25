void gnomeSort ( int arr [ ] , int n ) {
  int index = 0 ;
  while ( index < n ) {
    if ( index == 0 ) index = index + 1 ;
    if ( arr [ index ] >= arr [ index - 1 ] ) index = index + 1 ;
    else {
      arr [ index ] = arr [ index - 1 ] ;
      arr [ index - 1 ] = arr [ index ] ;
      index = index - 1 ;
    }
  }
}
