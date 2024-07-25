void findString ( string str , int n , int k ) {
  if ( k == 0 ) {
    cout << str << endl ;
    ;
    return ;
  }
  string str2 = str ;
  int p = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( str2 [ i ] != 'a' ) {
      str2 [ i ] = 'a' + str2 [ i + 1 ] ;
      p ++ ;
      if ( p == k ) break ;
    }
  }
  if ( p < k ) {
    for ( int i = n - 1 ;
    i >= 0 ;
    i -- ) if ( str [ i ] == 'a' ) {
      str2 [ i ] = 'b' + str2 [ i + 1 ] ;
      p ++ ;
      if ( p == k ) break ;
    }
  }
  cout << str2 << endl ;
}
