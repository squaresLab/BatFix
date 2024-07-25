void greatest ( string s ) {
  int n = s . length ( ) ;
  int a [ n ] ;
  int Sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    a [ i ] = ( int ) s [ i ] - ( int ) '0' ;
    Sum += a [ i ] ;
  }
  if ( ( a [ n - 1 ] % 2 ) != 0 ) {
    if ( ( a [ n - 2 ] % 2 != 0 || ( Sum - a [ n - 1 ] ) % 3 != 0 ) ) cout << "-1" << endl ;
    else cout << n << endl ;
  }
  else {
    int re = Sum % 3 ;
    int dell = - 1 ;
    int flag = 0 ;
    for ( int i = 0 ;
    i < n - 1 ;
    i ++ ) {
      if ( ( ( a [ i ] ) % 3 == re ) && ( a [ i + 1 ] > a [ i ] ) ) {
        dell = i ;
        flag = 1 ;
        break ;
      }
      else {
        dell = i ;
      }
    }
  }
  if ( ( flag == 0 ) || ( flag == 1 ) ) {
    if ( ( a [ n - 2 ] % 2 == 0 && re == a [ n - 1 ] % 3 ) ) {
      dell = n - 1 ;
    }
  }
  if ( ( dell == - 1 ) || ( dell == - 2 ) ) {
    cout << "-1" << endl ;
  }
  else {
    cout << dell + 1 << endl ;
  }
}
