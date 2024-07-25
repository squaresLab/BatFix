int numberOfPermWithKInversion ( int N , int K ) {
  if ( N == 0 ) return 0 ;
  if ( K == 0 ) return 1 ;
  if ( memo [ N ] [ K ] != 0 ) return memo [ N ] [ K ] ;
  int sum = 0 ;
  for ( int i = 0 ;
  i <= K ;
  i ++ ) {
    if ( i <= N - 1 ) {
      sum += numberOfPermWithKInversion ( N - 1 , K - i ) ;
    }
  }
  memo [ N ] [ K ] = sum ;
  return sum ;
}
