void midPointCircleDraw ( int x_centre , int y_centre , int r ) {
  int x = r , y = 0 ;
  printf ( "(%d, %d)" , ( x + x_centre ) , ( y + y_centre ) ) ;
  if ( r > 0 ) {
    printf ( "(%d, %d)" , ( x + x_centre ) , ( - y + y_centre ) ) ;
    printf ( "(%d, %d)" , ( y + x_centre ) , ( x + y_centre ) ) ;
    printf ( "(%d, %d)" , ( - y + x_centre ) , ( x + y_centre ) ) ;
  }
  int P = 1 - r ;
  while ( x > y ) {
    y ++ ;
    if ( P <= 0 ) {
      P = P + 2 * y + 1 ;
    }
    else {
      x -- ;
      P = P + 2 * y - 2 * x + 1 ;
    }
    if ( x < y ) break ;
    printf ( "(%d, %d)" , ( x + x_centre ) , ( y + y_centre ) ) ;
    printf ( "(%d, %d)" , ( - x + x_centre ) , ( y + y_centre ) ) ;
    printf ( "(%d, %d)" , ( x + x_centre ) , ( - y + y_centre ) ) ;
    printf ( "(%d, %d)" , ( - x + x_centre ) , ( x + y_centre ) ) ;
    if ( x != y ) {
      printf ( "(%d, %d)" , ( y + x_centre ) , ( x + y_centre ) ) ;
      printf ( "(%d, %d)" , ( x + x_centre ) , ( y + y_centre ) ) ;
    }
  }
}
