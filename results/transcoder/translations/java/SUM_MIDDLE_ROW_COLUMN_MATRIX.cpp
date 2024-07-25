void middlesum ( int mat [ ] [ 2 ] , int n ) {
  int row_sum = 0 , col_sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    row_sum += mat [ n / 2 ] [ i ] ;
  }
  cout << "Sum of middle row = " << row_sum << endl ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    col_sum += mat [ i ] [ n / 2 ] ;
  }
  cout << "Sum of middle column = " << col_sum << endl ;
}
