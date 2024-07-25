int countSolutions ( int n ) {
  int x = 0 , yCount , res = 0 ;
  for ( yCount = 0 ;
  yCount * yCount < n ;
  yCount ++ ) ;
  while ( yCount != 0 ) {
    res += yCount ;
    x ++ ;
    while ( yCount != 0 && ( x * x + ( yCount - 1 ) * ( yCount - 1 ) >= n ) ) {
      yCount -- ;
    }
  }
  return res ;
}
