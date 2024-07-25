void printSquares ( int n ) {
  int square = 0 ;
  int odd = 1 ;
  for ( int x = 0 ;
  x <= n ;
  x ++ ) {
    cout << square << " " ;
    square = square + odd ;
    odd = odd + 2 ;
  }
}
