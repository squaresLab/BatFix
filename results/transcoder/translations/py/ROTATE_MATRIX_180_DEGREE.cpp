void rotateMatrix ( int mat [ ] [ N ] ) {
  int i = N - 1 ;
  ;
  while ( ( i >= 0 ) && ( i < N ) ) {
    int j = N - 1 ;
    while ( ( j >= 0 ) && ( j < N ) ) {
      cout << mat [ i ] [ j ] << " " ;
      j = j - 1 ;
    }
    cout << endl ;
    i = i - 1 ;
  }
  ;
}
