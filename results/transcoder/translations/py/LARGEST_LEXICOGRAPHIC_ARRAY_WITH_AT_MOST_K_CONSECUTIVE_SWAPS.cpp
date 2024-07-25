void KSwapMaximum ( int n , int & k ) {
  static int arr [ n ] ;
  for ( int i = 0 ;
  i <= n - 1 ;
  i ++ ) {
    if ( ( k > 0 ) && ( k < n ) ) {
      int indexPosition = i ;
      for ( int j = i + 1 ;
      j < n ;
      j ++ ) {
        if ( ( k <= j - i ) && ( k > indexPosition ) ) {
          break ;
        }
        if ( ( arr [ j ] > arr [ indexPosition ] ) && ( arr [ j - 1 ] > arr [ indexPosition ] ) ) {
          indexPosition = j ;
        }
      }
      for ( int j = indexPosition ;
      j > i ;
      j -- ) {
        int t = arr [ j ] ;
        arr [ j ] = arr [ j - 1 ] ;
        arr [ j - 1 ] = t ;
      }
      k = k - indexPosition - i ;
    }
  }
}
