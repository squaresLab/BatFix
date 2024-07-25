void KMP ( int m , int n , string str2 , string str1 ) {
  int pos = 0 , len = 0 ;
  int p [ m + 1 ] ;
  int k = 0 ;
  char ch1 [ m + 1 ] ;
  char ch2 [ n + 1 ] ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    while ( k > 0 && ch1 [ k ] != ch1 [ i - 1 ] ) {
      k = p [ k ] ;
    }
    if ( ch1 [ k ] == ch1 [ i - 1 ] ) {
      ++ k ;
    }
    p [ i ] = k ;
  }
  for ( int j = 0 , i = 0 ;
  i < m ;
  i ++ ) {
    while ( j > 0 && j < n && ch1 [ j ] != ch2 [ i ] ) {
      j = p [ j ] ;
    }
    if ( j < n && ch1 [ j ] == ch2 [ i ] ) {
      j ++ ;
    }
    if ( j > len ) {
      len = j ;
      pos = i - j + 1 ;
    }
  }
  cout << "Shift = " << pos << endl ;
  cout << "Prefix = " << str1 . substr ( 0 , len ) << endl ;
}
