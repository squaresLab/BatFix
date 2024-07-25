void printSpiral ( vector < vector < int >> & mat , int r , int c ) {
  int i , a = 0 , b = 2 ;
  int low_row = ( 0 > a ) ? 0 : a ;
  int low_column = ( 0 > b ) ? 0 : b - 1 ;
  int high_row = ( ( a + 1 ) >= r ) ? r - 1 : a + 1 ;
  int high_column = ( ( b + 1 ) >= c ) ? c - 1 : b + 1 ;
  while ( ( low_row > 0 - r && low_column > 0 - c ) ) {
    for ( i = low_column + 1 ;
    i <= high_column && i < c && low_row >= 0 ;
    ++ i ) {
      cout << mat [ low_row ] [ i ] << " " ;
    }
    low_row -= 1 ;
    for ( i = low_row + 2 ;
    i <= high_row && i < r && high_column < c ;
    ++ i ) {
      cout << mat [ i ] [ high_column ] << " " ;
    }
    high_column += 1 ;
    for ( i = high_column - 2 ;
    i >= low_column && i >= 0 && high_row < r ;
    -- i ) {
      cout << mat [ high_row ] [ i ] << " " ;
    }
    high_row += 1 ;
    for ( i = high_row - 2 ;
    i > low_row && i >= 0 && low_column >= 0 ;
    -- i ) {
      cout << mat [ i ] [ low_column ] << " " ;
    }
    low_column -= 1 ;
  }
  cout << endl ;
}
