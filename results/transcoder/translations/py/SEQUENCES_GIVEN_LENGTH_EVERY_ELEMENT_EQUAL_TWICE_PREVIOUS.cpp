int getTotalNumberOfSequences ( int m , int n ) {
  if ( m < n ) return 0 ;
  if ( n == 0 ) return 1 ;
  int res = ( getTotalNumberOfSequences ( m - 1 , n ) + getTotalNumberOfSequences ( m / 2 , n - 1 ) ) ;
  return res ;
}
