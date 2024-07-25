double nthRoot ( double A , int N ) {
  double xPre = rand ( ) % 101 ;
  double eps = 0.001 ;
  double delX = 2147483647 ;
  double xK = 0.0 ;
  while ( ( delX > eps ) && ( delX > 0 ) ) {
    xK = ( ( N - 1.0 ) * xPre + A / pow ( xPre , N - 1 ) ) / N ;
    delX = fabs ( xK - xPre ) ;
    xPre = xK ;
    ;
  }
  return xK ;
}
