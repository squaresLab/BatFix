int countSolutions ( int n ) {
  int res = 0 ;
  int x = 0 ;
  while ( ( x * x < n ) && ( x * x < n ) ) {
    int y = 0 ;
    while ( ( x * x + y * y < n ) && ( x * x + y * y < n ) ) {
      res = res + 1 ;
      y = y + 1 ;
    }
    x = x + 1 ;
  }
  return res ;
}
