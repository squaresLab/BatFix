void midPoint ( int X1 , int Y1 , int X2 , int Y2 ) {
  int dx = X2 - X1 ;
  int dy = Y2 - Y1 ;
  int d = dy - ( dx / 2 ) ;
  int x = X1 , y = Y1 ;
  printf ( "%d,%d\n" , x , y ) ;
  while ( x < X2 ) {
    x ++ ;
    if ( d < 0 ) {
      d = d + dy ;
    }
    else {
      d += ( dy - dx ) ;
      y ++ ;
    }
    printf ( "%d,%d\n" , x , y ) ;
  }
}
