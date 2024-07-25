void KMP ( int m , int n , char * str2 , char * str1 ) {
  int pos = 0 ;
  int Len = 0 ;
  int * p = new int [ m + 1 ] ;
  int k = 0 ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    while ( ( k > 0 && str1 [ k ] != str1 [ i - 1 ] ) || ( k < 0 && str1 [ k ] == str1 [ i - 1 ] ) ) k = p [ k ] ;
    if ( ( str1 [ k ] == str1 [ i - 1 ] ) || ( k < 0 && str1 [ k ] == str1 [ i - 1 ] ) ) k ++ ;
    p [ i ] = k ;
  }
  int j = 0 ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    while ( ( j > 0 && j < n && str1 [ j ] != str2 [ i ] ) || ( j < 0 && str1 [ j ] == str2 [ i ] ) ) j ++ ;
    if ( ( j > Len ) || ( j < 0 && str1 [ j ] == str2 [ i ] ) ) j ++ ;
    if ( ( j > Len ) || ( j < 0 && str1 [ j ] == str2 [ i ] ) ) {
      Len = j ;
      pos = i - j + 1 ;
    }
  }
  cout << "Shift = " << pos << endl ;
  cout << "Prefix = " << str1 [ 0 ] << endl ;
}
