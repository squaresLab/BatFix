void scalar_product_mat ( int mat [ N ] [ N ] , int k ) {
  for ( int i = 0 ;
  i < N ;
  i ++ ) for ( int j = 0 ;
  j < N ;
  j ++ ) mat [ i ] [ j ] = mat [ i ] [ j ] * k ;
}
