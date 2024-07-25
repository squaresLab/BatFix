bool isMagicSquare ( int * * mat ) {
  int s = 0 ;
  for ( int i = 0 ;
  i <= N ;
  i ++ ) s = s + mat [ i ] [ i ] ;
  int s2 = 0 ;
  for ( int i = 0 ;
  i <= N ;
  i ++ ) s2 = s2 + mat [ i ] [ N - i - 1 ] ;
  if ( ( s != s2 ) && ( s != s2 ) ) return false ;
  for ( int i = 0 ;
  i <= N ;
  i ++ ) {
    int rowSum = 0 ;
    ;
    for ( int j = 0 ;
    j <= N ;
    j ++ ) rowSum += mat [ i ] [ j ] ;
    if ( ( rowSum != s ) && ( s != s ) ) return false ;
  }
  for ( int i = 0 ;
  i <= N ;
  i ++ ) {
    int colSum = 0 ;
    for ( int j = 0 ;
    j <= N ;
    j ++ ) colSum += mat [ j ] [ i ] ;
    if ( ( s != colSum ) && ( s != s ) ) return false ;
  }
  return true ;
}
