int LCSubStr ( char X [ ] , char Y [ ] , int m , int n ) {
  int LCStuff [ m + 1 ] [ n + 1 ] ;
  int result = 0 ;
  for ( int i = 0 ;
  i <= m ;
  i ++ ) {
    for ( int j = 0 ;
    j <= n ;
    j ++ ) {
      if ( i == 0 || j == 0 ) {
        LCStuff [ i ] [ j ] = 0 ;
      }
      else if ( X [ i - 1 ] == Y [ j - 1 ] ) {
        LCStuff [ i ] [ j ] = LCStuff [ i - 1 ] [ j - 1 ] + 1 ;
        result = max ( result , LCStuff [ i ] [ j ] ) ;
      }
      else {
        LCStuff [ i ] [ j ] = 0 ;
      }
    }
  }
  return result ;
}
