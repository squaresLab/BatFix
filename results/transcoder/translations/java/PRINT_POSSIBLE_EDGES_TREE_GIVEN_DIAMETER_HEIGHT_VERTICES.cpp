void constructTree ( int n , int d , int h ) {
  if ( d == 1 ) {
    if ( n == 2 && h == 1 ) {
      cout << "1 2" << endl ;
      return ;
    }
    cout << "-1" << endl ;
    return ;
  }
  if ( d > 2 * h ) {
    cout << "-1" << endl ;
    return ;
  }
  for ( int i = 1 ;
  i <= h ;
  i ++ ) {
    cout << i << " " << ( i + 1 ) << endl ;
  }
  if ( d > h ) {
    cout << "1" << " " << ( h + 2 ) << endl ;
    for ( int i = h + 2 ;
    i <= d ;
    i ++ ) {
      cout << i << " " << ( i + 1 ) << endl ;
    }
  }
  for ( int i = d + 1 ;
  i < n ;
  i ++ ) {
    int k = 1 ;
    if ( d == h ) {
      k = 2 ;
    }
    cout << k << " " << ( i + 1 ) << endl ;
  }
}
