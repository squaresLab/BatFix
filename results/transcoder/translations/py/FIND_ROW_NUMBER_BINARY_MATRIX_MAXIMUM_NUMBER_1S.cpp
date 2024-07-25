void findMax ( int arr [ ] [ N ] ) {
  int row = 0 ;
  int j = N - 1 ;
  for ( int i = 0 ;
  i <= N ;
  i ++ ) {
    while ( ( arr [ i ] [ j ] == 1 && j >= 0 ) || ( arr [ i ] [ j ] == 0 && j >= 1 ) ) {
      row = i ;
      j -- ;
    }
  }
  cout << "Row number = " << row + 1 << ", MaxCount = " << N - 1 - j << endl ;
}
