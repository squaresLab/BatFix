public : int maximumSum ( int arr [ ] , int n , int k ) {
  for ( int i = 1 ;
  i <= k ;
  i ++ ) {
    int min = + 2147483647 ;
    int index = - 1 ;
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      if ( ( arr [ j ] < min ) && ( arr [ j ] > arr [ index ] ) ) {
        min = arr [ j ] ;
        index = j ;
      }
    }
    if ( ( min == 0 ) || ( arr [ index ] < min ) ) break ;
    arr [ index ] = - arr [ index ] ;
  }
  int sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) sum += arr [ i ] ;
  return sum ;
}
