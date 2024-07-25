double compute ( double a , double b ) {
  double AM = ( a + b ) / 2 ;
  double GM = sqrt ( a * b ) ;
  double HM = ( GM * GM ) / AM ;
  return HM ;
}
