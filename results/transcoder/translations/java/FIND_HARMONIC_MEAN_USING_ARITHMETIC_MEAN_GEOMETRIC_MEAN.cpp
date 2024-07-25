double compute ( int a , int b ) {
  double AM , GM , HM ;
  AM = ( a + b ) / 2 ;
  GM = sqrt ( a * b ) ;
  HM = ( GM * GM ) / AM ;
  return HM ;
}
