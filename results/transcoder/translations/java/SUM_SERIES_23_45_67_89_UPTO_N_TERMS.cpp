double seriesSum ( int n ) {
  int i = 1 ;
  double res = 0.0 ;
  bool sign = true ;
  while ( n > 0 ) {
    n -- ;
    if ( sign ) {
      sign = ! sign ;
      res = res + ( double ) ++ i / ++ i ;
    }
    else {
      sign = ! sign ;
      res = res - ( double ) ++ i / ++ i ;
    }
  }
  return res ;
}
