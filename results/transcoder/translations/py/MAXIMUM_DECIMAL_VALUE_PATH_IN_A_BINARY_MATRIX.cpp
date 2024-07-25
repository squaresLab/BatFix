double maxDecimalValue ( vector < vector < double >> & mat , int i , int j , int p ) {
  if ( i >= N || j >= N ) return 0 ;
  double result = max ( maxDecimalValue ( mat , i , j + 1 , p + 1 ) , maxDecimalValue ( mat , i + 1 , j , p + 1 ) ) ;
  if ( mat [ i ] [ j ] == 1 ) return pow ( 2 , p ) + result ;
  else return result ;
}
