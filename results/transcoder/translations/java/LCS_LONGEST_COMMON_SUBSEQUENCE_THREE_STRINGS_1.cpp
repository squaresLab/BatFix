int lcsOf3 ( int i , int j , int k ) {
  if ( i == - 1 || j == - 1 || k == - 1 ) return 0 ;
  if ( dp [ i ] [ j ] [ k ] != - 1 ) return dp [ i ] [ j ] [ k ] ;
  if ( X [ i ] == Y [ j ] && Y [ j ] == Z [ k ] ) return dp [ i ] [ j ] [ k ] = 1 + lcsOf3 ( i - 1 , j - 1 , k - 1 ) ;
  else return dp [ i ] [ j ] [ k ] = max ( max ( lcsOf3 ( i - 1 , j , k ) , lcsOf3 ( i , j - 1 , k ) ) , lcsOf3 ( i , j , k - 1 ) ) ;
}
