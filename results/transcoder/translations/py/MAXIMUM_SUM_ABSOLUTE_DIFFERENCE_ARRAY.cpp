void MaxSumDifference ( int a [ ] , int n ) {
  sort ( a , a + n ) ;
  ;
  int j = 0 ;
  int finalSequence [ n ] = {
    0 }
    ;
    for ( int i = 0 ;
    i <= ( int ) ( n / 2 ) ;
    i ++ ) {
      finalSequence [ j ] = a [ i ] ;
      finalSequence [ j + 1 ] = a [ n - i - 1 ] ;
      j = j + 2 ;
    }
    int MaximumSum = 0 ;
    for ( int i = 0 ;
    i <= n - 1 ;
    i ++ ) {
      MaximumSum = ( MaximumSum + abs ( finalSequence [ i ] - finalSequence [ i + 1 ] ) ) ;
    }
    MaximumSum = ( MaximumSum + abs ( finalSequence [ n - 1 ] - finalSequence [ 0 ] ) ) ;
    ;
    cout << MaximumSum << endl ;
  }
