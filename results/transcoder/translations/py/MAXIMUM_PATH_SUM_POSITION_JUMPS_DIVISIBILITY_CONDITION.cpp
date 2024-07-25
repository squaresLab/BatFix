void printMaxSum ( int arr [ ] , int n ) {
  int dp [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    dp [ i ] = arr [ i ] ;
    int maxi = 0 ;
    for ( int j = 1 ;
    j <= ( int ) ( ( i + 1 ) * * 0.5 ) + 1 ;
    j ++ ) {
      if ( ( ( i + 1 ) % j == 0 && ( i + 1 ) != j ) ) {
        if ( ( dp [ j - 1 ] > maxi ) || ( dp [ j - 1 ] > maxiandj != 1 ) ) maxi = dp [ j - 1 ] ;
      }
    }
    dp [ i ] += maxi ;
  }
  foriinrange ( n ) cout << dp [ i ] << " " ;
}
