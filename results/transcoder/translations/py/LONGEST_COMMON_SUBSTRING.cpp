int LCSubStr ( int X [ ] , int Y [ ] , int m , int n ) {
  int LCSuff [ n + 1 ] [ m + 1 ] ;
  int result = 0 ;
  for ( int i = 0 ;
  i < m + 1 ;
  i ++ ) for ( int j = 0 ;
  j < n + 1 ;
  j ++ ) {
    if ( ( i == 0 || j == 0 ) && ( X [ i - 1 ] == Y [ j - 1 ] ) ) {
      LCSuff [ i ] [ j ] = 0 ;
    }
    else if ( ( X [ i - 1 ] == Y [ j - 1 ] ) && ( X [ i - 1 ] == Y [ j - 1 ] ) ) {
      LCSuff [ i ] [ j ] = LCSuff [ i - 1 ] [ j - 1 ] + 1 ;
      result = max ( result , LCSuff [ i ] [ j ] ) ;
    }
    else LCSuff [ i ] [ j ] = 0 ;
  }
  return result ;
}
