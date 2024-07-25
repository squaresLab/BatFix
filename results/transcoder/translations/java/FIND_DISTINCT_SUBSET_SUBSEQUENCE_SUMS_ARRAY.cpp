void printDistSum ( int arr [ ] , int n ) {
  int sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    sum += arr [ i ] ;
  }
  bool dp [ n + 1 ] [ sum + 1 ] ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    dp [ i ] [ 0 ] = true ;
  }
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    dp [ i ] [ arr [ i - 1 ] ] = true ;
    for ( int j = 1 ;
    j <= sum ;
    j ++ ) {
      if ( dp [ i - 1 ] [ j ] == true ) {
        dp [ i ] [ j ] = true ;
        dp [ i ] [ j + arr [ i - 1 ] ] = true ;
      }
    }
  }
  for ( int j = 0 ;
  j <= sum ;
  j ++ ) if ( dp [ n ] [ j ] == true ) cout << j << " " ;
}
