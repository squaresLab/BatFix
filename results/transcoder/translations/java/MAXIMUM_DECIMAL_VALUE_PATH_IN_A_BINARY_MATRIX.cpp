int maxDecimalValue ( int mat [ N ] [ N ] , int i , int j , int p ) {
  if ( i >= N || j >= N ) return 0 ;
  int result = max ( maxDecimalValue ( mat , i , j + 1 , p + 1 ) , maxDecimalValue ( mat , i + 1 , j , p + 1 ) ) ;
  if ( mat [ i ] [ j ] == 1 ) return int ( pow ( 2 , p ) + result ) ;
  else return result ;
}
