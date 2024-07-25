float correlationCoefficient ( float * X , float * Y , int n ) {
  float sum_X = 0 ;
  float sum_Y = 0 ;
  float sum_XY = 0 ;
  float square_Sum_X = 0 ;
  float square_Sum_Y = 0 ;
  int i = 0 ;
  while ( i < n ) {
    sum_X = sum_X + X [ i ] ;
    sum_Y = sum_Y + Y [ i ] ;
    sum_XY = sum_XY + X [ i ] * Y [ i ] ;
    square_Sum_X = square_Sum_X + X [ i ] * X [ i ] ;
    square_Sum_Y = square_Sum_Y + Y [ i ] * Y [ i ] ;
    i = i + 1 ;
  }
  float corr = ( float ) ( n * sum_XY - sum_X * sum_Y ) / ( float ) ( sqrt ( ( n * square_Sum_X - sum_X * sum_X ) * ( n * square_Sum_Y - sum_Y * sum_Y ) ) ) ;
  return corr ;
}
