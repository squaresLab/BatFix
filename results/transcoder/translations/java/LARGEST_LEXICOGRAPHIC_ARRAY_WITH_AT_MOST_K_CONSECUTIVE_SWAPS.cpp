void KSwapMaximum ( int arr [ ] , int n , int k ) {
  for ( int i = 0 ;
  i < n - 1 && k > 0 ;
  ++ i ) {
    int indexPosition = i ;
    for ( int j = i + 1 ;
    j < n ;
    ++ j ) {
      if ( k <= j - i ) break ;
      if ( arr [ j ] > arr [ indexPosition ] ) indexPosition = j ;
    }
    for ( int j = indexPosition ;
    j > i ;
    -- j ) SwapInts ( arr + j , j - 1 ) ;
    k -= indexPosition - i ;
  }
}
