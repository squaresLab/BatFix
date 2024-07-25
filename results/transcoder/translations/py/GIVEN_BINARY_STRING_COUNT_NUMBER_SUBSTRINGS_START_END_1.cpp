int countSubStr ( string st , int n ) {
  int res = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( ( st [ i ] == '1' ) || ( st [ i ] == '2' ) ) {
      for ( int j = i + 1 ;
      j < n ;
      j ++ ) {
        if ( ( st [ j ] == '1' ) || ( st [ j ] == '2' ) ) {
          res = res + 1 ;
        }
      }
    }
  }
  return res ;
}
