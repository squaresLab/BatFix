void findConsecutive ( int N ) {
  int start = 1 ;
  int end = ( N + 1 ) / 2 ;
  while ( start < end ) {
    int sum = 0 ;
    for ( int i = start ;
    i <= end ;
    i ++ ) {
      sum = sum + i ;
      if ( sum == N ) {
        for ( int j = start ;
        j <= i ;
        j ++ ) {
          cout << j << " " ;
        }
        cout << endl ;
        break ;
      }
      if ( sum > N ) break ;
    }
    sum = 0 ;
    start ++ ;
  }
}
