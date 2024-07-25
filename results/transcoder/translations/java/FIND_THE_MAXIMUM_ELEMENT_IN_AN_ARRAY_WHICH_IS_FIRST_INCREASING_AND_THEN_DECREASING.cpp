int findMaximum ( int arr [ ] , int low , int high ) {
  int max = arr [ low ] ;
  int i ;
  for ( i = low ;
  i <= high ;
  i ++ ) {
    if ( arr [ i ] > max ) {
      max = arr [ i ] ;
    }
  }
  return max ;
}
