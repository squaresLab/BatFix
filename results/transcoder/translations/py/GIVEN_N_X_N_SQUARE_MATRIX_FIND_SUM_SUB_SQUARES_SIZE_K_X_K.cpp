void printSumSimple ( int * * * mat , int k ) {
  if ( ( k > n ) || ( k < 0 ) ) return ;
  for ( int i = 0 ;
  i < n - k + 1 ;
  i ++ ) {
    for ( int j = 0 ;
    j < n - k + 1 ;
    j ++ ) {
      int sum = 0 ;
      for ( int p = i ;
      p <= k + i ;
      p ++ ) {
        for ( int q = j ;
        q <= k + j ;
        q ++ ) {
          sum += mat [ p ] [ q ] ;
        }
      }
      cout << sum << " " ;
    }
    cout << endl ;
  }
}
