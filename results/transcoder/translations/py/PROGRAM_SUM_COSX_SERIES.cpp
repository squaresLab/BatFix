double cosXSertiesSum ( double x , int n ) {
  x = x * ( PI / 180.0 ) ;
  ;
  double res = 1 ;
  ;
  double sign = 1 ;
  double fact = 1 ;
  double pow = 1 ;
  for ( int i = 1 ;
  i <= 5 ;
  i ++ ) {
    sign = sign * - 1 ;
    fact = fact * ( 2 * i - 1 ) * ( 2 * i ) ;
    pow = pow * x * x ;
    res = res + sign * pow / fact ;
  }
  ;
  return res ;
}
