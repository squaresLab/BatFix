int coutSubSeq ( int A [ ] , int N , int M ) {
  int sum ;
  int ans = 0 ;
  for ( int i = 0 ;
  i <= N ;
  i ++ ) {
    for ( int j = i + 1 ;
    j <= N ;
    j ++ ) {
      for ( int k = j + 1 ;
      k <= N ;
      k ++ ) {
        sum = A [ i ] + A [ j ] + A [ k ] ;
        if ( ( sum % M == 0 ) && ( sum % M == 0 ) ) ans = ans + 1 ;
      }
    }
  }
  return ans ;
}
