int countWays ( int N ) {
  if ( N == 1 ) return 4 ;
  int countB = 1 , countS = 1 , prevCountB , prevCountS ;
  for ( int i = 2 ;
  i <= N ;
  i ++ ) {
    prevCountB = countB ;
    prevCountS = countS ;
    countS = prevCountB + prevCountS ;
    countB = prevCountS ;
  }
  int result = countS + countB ;
  return ( result * result ) ;
}
