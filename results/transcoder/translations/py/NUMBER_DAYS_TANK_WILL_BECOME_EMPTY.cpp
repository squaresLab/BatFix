int minDaysToEmpty ( int C , int l ) {
  if ( ( l >= C ) && ( l <= C ) ) return C ;
  double eq_root = ( sqrt ( 1 + 8 * ( C - l ) ) - 1 ) / 2 ;
  return ceil ( eq_root ) + l ;
}
