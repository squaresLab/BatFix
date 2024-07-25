int findMaxGCD ( int arr [ ] , int n ) {
  int high = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    high = max ( high , arr [ i ] ) ;
  }
  int divisors [ high + 1 ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 1 ;
    j <= sqrt ( arr [ i ] ) ;
    j ++ ) {
      if ( arr [ i ] % j == 0 ) {
        divisors [ j ] ++ ;
        if ( j != arr [ i ] / j ) {
          divisors [ arr [ i ] / j ] ++ ;
        }
      }
    }
  }
  for ( int i = high ;
  i >= 1 ;
  i -- ) if ( divisors [ i ] > 1 ) return i ;
  return 1 ;
}
