int CountSquares ( int a , int b ) {
  int cnt = 0 ;
  for ( int i = a ;
  i <= b ;
  i ++ ) {
    int j = 1 ;
    ;
    while ( j * j <= i ) {
      if ( j * j == i ) cnt = cnt + 1 ;
      j = j + 1 ;
    }
    i = i + 1 ;
  }
  return cnt ;
}
