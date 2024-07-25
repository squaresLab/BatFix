int maximumZeros ( int arr [ ] [ MAX5 ] , int n , int k ) {
  static int MAX5 = 5 ;
  int subset [ MAX5 + 5 ] [ MAX5 + 1 ] ;
  subset [ 0 ] [ 0 ] = 0 ;
  for ( int p = 0 ;
  p < arr [ k ] [ i ] ;
  i ++ ) {
    int pw2 = 0 , pw5 = 0 ;
    while ( ! p % 2 ) {
      pw2 ++ ;
      p /= 2 ;
    }
    whilenotp % 5 ) {
      pw5 ++ ;
      p /= 5 ;
    }
    foriinrange ( k - 1 , - 1 , - 1 ) {
      forjinrange ( MAX5 ) {
        if ( ifsubset [ i ] [ j ] != - 1 ) subset [ i + 1 ] [ j + pw5 ] = ( int ) max ( subset [ i + 1 ] [ j + pw5 ] , ( int ) subset [ i ] [ j ] + pw2 ) ;
      }
    }
  }
  int ans = 0 ;
  foriinrange ( MAX5 ) {
    ans = max ( ans , min ( i , subset [ k ] [ i ] ) ) ;
  }
  return ans ;
}
