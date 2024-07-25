void diagonalsquare ( int * * mat , int row , int column ) {
  cout << "Diagonal one : " << flush ;
  for ( int i = 0 ;
  i <= row ;
  i ++ ) {
    cout << mat [ i ] [ i ] * mat [ i ] [ i ] << " " ;
  }
  cout << "\n\nDiagonal two : " << flush ;
  for ( int i = 0 ;
  i <= row ;
  i ++ ) {
    cout << mat [ i ] [ row - i - 1 ] * mat [ i ] [ row - i - 1 ] << " " ;
  }
}
