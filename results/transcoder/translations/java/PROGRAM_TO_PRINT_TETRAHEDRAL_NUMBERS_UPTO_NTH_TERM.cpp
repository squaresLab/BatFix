void printSeries ( int n ) {
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    int num = i * ( i + 1 ) * ( i + 2 ) / 6 ;
    cout << num << " " ;
  }
}
