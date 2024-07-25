void findString ( char * str , int n , int k ) {
  if ( ( k == 0 ) || ( k > n ) ) {
    cout << str << endl ;
    return ;
  }
  char * str2 = str ;
  int p = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i += 1 ) {
    if ( ( str2 [ i ] != 'a' ) && ( str2 [ i ] != 'a' ) ) {
      str2 [ i ] = 'a' ;
      p ++ ;
      if ( ( p == k ) || ( p < k ) ) break ;
    }
  }
  if ( ( p < k ) || ( p > k ) ) {
    int i = n - 1 ;
    while ( ( i >= 0 ) && ( str [ i ] == 'a' ) ) {
      if ( ( str [ i ] == 'a' ) || ( i < n ) ) {
        str2 [ i ] = 'b' ;
        p ++ ;
      }
      if ( ( p == k ) || ( i < n ) ) break ;
      i -- ;
    }
  }
  cout << str2 << endl ;
}
