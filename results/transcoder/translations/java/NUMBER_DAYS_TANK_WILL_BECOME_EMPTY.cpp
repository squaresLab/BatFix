int min_days_to_empty ( int C , int l ) {
  if ( l >= C ) return C ;
  double eq_root = ( sqrt ( 1 + 8 * ( C - l ) ) - 1 ) / 2 ;
  return int ( ceil ( eq_root ) + l ) ;
}
