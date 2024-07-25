bool isMagicSquare ( int mat [ N ] [ N ] ) {
  int sum = 0 , sum2 = 0 ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    sum = sum + mat [ i ] [ i ] ;
  }
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    sum2 = sum2 + mat [ i ] [ N - 1 - i ] ;
  }
  if ( sum != sum2 ) return false ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    int rowSum = 0 ;
    for ( int j = 0 ;
    j < N ;
    j ++ ) {
      rowSum += mat [ i ] [ j ] ;
    }
    if ( rowSum != sum ) return false ;
  }
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    int colSum = 0 ;
    for ( int j = 0 ;
    j < N ;
    j ++ ) {
      colSum += mat [ j ] [ i ] ;
    }
    if ( sum != colSum ) return false ;
  }
  return true ;
}
