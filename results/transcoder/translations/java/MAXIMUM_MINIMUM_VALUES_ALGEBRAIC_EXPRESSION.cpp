void minMaxValues ( int arr [ ] , int n , int m ) {
  int sum = 0 ;
  for ( int i = 0 ;
  i < ( n + m ) ;
  i ++ ) {
    sum += arr [ i ] ;
    arr [ i ] += 50 ;
  }
  bool dp [ MAX + 1 ] [ MAX * MAX + 1 ] ;
  dp [ 0 ] [ 0 ] = true ;
  for ( int i = 0 ;
  i < ( n + m ) ;
  i ++ ) {
    for ( int k = min ( n , i + 1 ) ;
    k >= 1 ;
    k -- ) {
      for ( int j = 0 ;
      j < MAX * MAX + 1 ;
      j ++ ) {
        if ( dp [ k - 1 ] [ j ] ) {
          dp [ k ] [ j + arr [ i ] ] = true ;
        }
      }
    }
  }
  double max_value = - 1 * INF , min_value = INF ;
  for ( int i = 0 ;
  i < MAX * MAX + 1 ;
  i ++ ) {
    if ( dp [ n ] [ i ] ) {
      int temp = i - 50 * n ;
      max_value = max ( max_value , temp * ( sum - temp ) ) ;
      min_value = min ( min_value , temp * ( sum - temp ) ) ;
    }
  }
  cout << "Maximum Value: " << ( int ) max_value << "\n" << "Minimum Value: " << ( int ) min_value << "\n" ;
}
