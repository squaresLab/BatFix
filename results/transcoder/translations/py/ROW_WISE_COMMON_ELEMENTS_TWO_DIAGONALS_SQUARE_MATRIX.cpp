int countCommon ( int * * mat , int n ) {
  int res = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( mat [ i ] [ i ] == mat [ i ] [ n - i - 1 ] ) {
      res = res + 1 ;
    }
  }
  return res ;
}
