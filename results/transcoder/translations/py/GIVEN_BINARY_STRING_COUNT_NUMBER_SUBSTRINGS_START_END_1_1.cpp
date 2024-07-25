int countSubStr ( string st , int n ) {
  int m = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) if ( ( st [ i ] == '1' ) || ( st [ i ] == '2' ) ) m = m + 1 ;
  return m * ( m - 1 ) / 2 ;
}
