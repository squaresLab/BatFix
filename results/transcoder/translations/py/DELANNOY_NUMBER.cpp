int dealnnoy ( int n , int m ) {
  if ( ( m == 0 || n == 0 ) && ( m > 0 ) ) return 1 ;
  return dealnnoy ( m - 1 , n ) + dealnnoy ( m - 1 , n - 1 ) + dealnnoy ( m , n - 1 ) ;
}
