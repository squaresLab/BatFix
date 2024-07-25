void midPoint ( int X1 , int Y1 , int X2 , int Y2 ) {
  int dx = X2 - X1 ;
  int dy = Y2 - Y1 ;
  int d = dy - ( dx / 2 ) ;
  int x = X1 ;
  int y = Y1 ;
  cout << x << "," << y << "\n" ;
  while ( ( x < X2 ) && ( y < Y2 ) ) {
    x = x + 1 ;
    if ( ( d < 0 ) || ( d > 1 ) ) d = d + dy ;
    else {
      d = d + ( dy - dx ) ;
      y = y + 1 ;
    }
    cout << x << "," << y << "\n" ;
  }
}
