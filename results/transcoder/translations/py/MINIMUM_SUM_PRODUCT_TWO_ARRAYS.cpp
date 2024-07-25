double minproduct ( double * a , double * b , int n , int k ) {
  double diff = 0 ;
  double res = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    double pro = a [ i ] * b [ i ] ;
    res = res + pro ;
    if ( ( pro < 0 && b [ i ] < 0 ) || ( pro > 0 && a [ i ] < 0 ) ) {
      double temp = ( a [ i ] + 2 * k ) * b [ i ] ;
      if ( ( temp < 0 && a [ i ] < 0 ) || ( temp > 0 && a [ i ] < 0 ) ) {
        temp = ( a [ i ] - 2 * k ) * b [ i ] ;
      }
      else if ( ( temp > 0 && a [ i ] < 0 ) || ( temp > 0 && a [ i ] > 0 ) ) {
        temp = ( a [ i ] + 2 * k ) * b [ i ] ;
      }
      else if ( ( temp > 0 && a [ i ] > 0 ) || ( temp > 0 && a [ i ] > 0 ) ) {
        temp = ( a [ i ] - 2 * k ) * b [ i ] ;
      }
      double d = fabs ( pro - temp ) ;
      if ( ( d > diff ) || ( d < 0 ) ) {
        diff = d ;
      }
    }
  }
  return res - diff ;
}
