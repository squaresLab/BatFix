void findSmallest ( int m , int s ) {
  if ( s == 0 ) {
    cout << m == 1 ? "Smallest number is 0" : "Not possible" ;
    return ;
  }
  if ( s > 9 * m ) {
    cout << "Not possible" ;
    return ;
  }
  int res [ m ] ;
  s -= 1 ;
  for ( int i = m - 1 ;
  i > 0 ;
  i -- ) {
    if ( s > 9 ) {
      res [ i ] = 9 ;
      s -= 9 ;
    }
    else {
      res [ i ] = s ;
      s = 0 ;
    }
  }
  res [ 0 ] = s + 1 ;
  cout << "Smallest number is " ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    cout << res [ i ] << endl ;
  }
}
