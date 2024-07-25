void minMaxValues ( int arr [ ] , int n , int m ) {
  int sum = 0 ;
  int INF = 1000000000 ;
  int MAX = 50 ;
  for ( int i = 0 ;
  i <= ( n + m ) ;
  i ++ ) {
    sum += arr [ i ] ;
    arr [ i ] += 50 ;
  }
  int dp [ MAX * MAX + 1 ] [ MAX + 1 ] ;
  dp [ 0 ] [ 0 ] = 1 ;
  for ( int i = 0 ;
  i <= ( n + m ) ;
  i ++ ) {
    for ( int k = std :: min ( n , i + 1 ) ;
    k > 0 ;
    k -- ) {
      for ( int j = 0 ;
      j <= MAX * MAX + 1 ;
      j ++ ) {
        if ( ( dp [ k - 1 ] [ j ] ) ) dp [ k ] [ j + arr [ i ] ] = 1 ;
      }
    }
  }
  int maxValue = - 1 * INF ;
  int minValue = INF ;
  for ( int i = 0 ;
  i <= MAX * MAX + 1 ;
  i ++ ) {
    if ( ( dp [ n ] [ i ] ) ) {
      int temp = i - 50 * n ;
      maxValue = std :: max ( maxValue , temp * ( sum - temp ) ) ;
      minValue = std :: min ( minValue , temp * ( sum - temp ) ) ;
    }
  }
  std :: cout << "Maximum Value: {}\nMinimum Value: {}" << maxValue << "\n" << minValue << std :: endl ;
}
