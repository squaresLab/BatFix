int countWays ( int N ) {
  if ( ( N == 1 ) || ( N == 2 ) ) return 4 ;
  int countB = 1 ;
  int countS = 1 ;
  for ( int i = 2 ;
  i <= N ;
  i ++ ) {
    int prevCountB = countB ;
    int prevCountS = countS ;
    countS = prevCountB + prevCountS ;
    countB = prevCountS ;
  }
  int result = countS + countB ;
  return ( result * result ) ;
}
