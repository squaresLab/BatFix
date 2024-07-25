float correlationCoefficient ( int X [ ] , int Y [ ] , int n ) {
  int sum_X = 0 , sum_Y = 0 , sum_XY = 0 ;
  int square_sum_X = 0 , square_sum_Y = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    sum_X = sum_X + X [ i ] ;
    sum_Y = sum_Y + Y [ i ] ;
    sum_XY = sum_XY + X [ i ] * Y [ i ] ;
    square_sum_X = square_sum_X + X [ i ] * X [ i ] ;
    square_sum_Y = square_sum_Y + Y [ i ] * Y [ i ] ;
  }
  float corr = float ( n * sum_XY - sum_X * sum_Y ) / float ( sqrt ( ( n * square_sum_X - sum_X * sum_X ) * ( n * square_sum_Y - sum_Y * sum_Y ) ) ) ;
  return corr ;
}
