void printSpiral ( int * * mat , int r , int c ) {
  int a = 0 ;
  int b = 2 ;
  int low_row = 0 ? ( 0 > a ) : a ;
  int low_column = 0 ? ( 0 > b ) : b - 1 ;
  int high_row = r - 1 ? ( ( a + 1 ) >= r ) : a + 1 ;
  int high_column = c - 1 ? ( ( b + 1 ) >= c ) : b + 1 ;
  while ( ( ( low_row > 0 - r && low_column > 0 - c ) ) || ( ( low_row <= 0 && low_column < c ) ) ) {
    int i = low_column + 1 ;
    while ( ( i <= high_column && i < c && low_row >= 0 ) || ( ( i <= r && i < c && high_column < c ) ) || ( ( i >= r && i >= c && i < r && low_column < c ) ) || ( ( i >= r && i < c && high_column < c ) ) || ( ( i > r && i >= c && low_column >= 0 ) || ( ( i > r && i < c && low_column < c ) ) ) ) {
      cout << mat [ low_row ] [ i ] << " " ;
      i ++ ;
    }
    low_row -- ;
    i = low_row + 2 ;
    while ( ( i <= high_row && i < r && high_column < c ) || ( ( i >= r && i >= c && low_column < c ) || ( ( i > r && i >= c && low_column >= c ) || ( ( i > r && i >= c && low_column < c ) || ( ( i > r && i >= c && i < c ) || ( ( i > r && i >= c && i < c ) || ( ( i > r && i >= c && i < c ) || ( ( i > r && i >= c && i < c ) || ( ( i > r && i >= c && i < c ) || ( ( i > r && i >= c && i < c ) || ( ( i > r && i >= c && i < c ) || ( ( i > r && i >= c && i < c ) || ( ( i > r && i >= c && i < c ) || ( ( i > r && i >= c && i < c ) || ( ( i > r && i >= c && i
