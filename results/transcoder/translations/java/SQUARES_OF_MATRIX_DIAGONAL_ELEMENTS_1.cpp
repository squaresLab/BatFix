void diagonalsquare ( int mat [ ] [ 2 ] , int row , int column ) {
  cout << " Diagonal one : " ;
  for ( int i = 0 ;
  i < row ;
  i ++ ) cout << mat [ i ] [ i ] * mat [ i ] [ i ] << " " ;
  cout << endl ;
  cout << " Diagonal two : " ;
  for ( int i = 0 ;
  i < row ;
  i ++ ) cout << mat [ i ] [ row - i - 1 ] * mat [ i ] [ row - i - 1 ] << " " ;
}
