int countSubSeq ( int A [ ] , int N , int M ) {
  int ans = 0 ;
  int h [ M ] ;
  memset ( h , 0 , sizeof ( h ) ) ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    A [ i ] = A [ i ] % M ;
    h [ A [ i ] ] ++ ;
  }
  for ( int i = 0 ;
  i < M ;
  i ++ ) {
    for ( int j = i ;
    j < M ;
    j ++ ) {
      int rem = ( M - ( i + j ) % M ) % M ;
      if ( rem < j ) continue ;
      if ( i == j && rem == j ) {
        ans += h [ i ] * ( h [ i ] - 1 ) * ( h [ i ] - 2 ) / 6 ;
      }
      else if ( i == j ) {
        ans += h [ i ] * ( h [ i ] - 1 ) * h [ rem ] / 2 ;
      }
      else if ( i == rem ) {
        ans += h [ i ] * ( h [ i ] - 1 ) * h [ j ] / 2 ;
      }
      else if ( rem == j ) {
        ans += h [ j ] * ( h [ j ] - 1 ) * h [ i ] / 2 ;
      }
      else {
        ans = ans + h [ i ] * h [ j ] * h [ rem ] ;
      }
    }
  }
  return ans ;
}
