void bestApproximate ( double * x , double * y , int n ) {
  double sum_x = 0 ;
  double sum_y = 0 ;
  double sum_xy = 0 ;
  double sum_x2 = 0 ;
  for ( int i = 0 ;
  i != n ;
  i ++ ) {
    sum_x += x [ i ] ;
    sum_y += y [ i ] ;
    sum_xy += x [ i ] * y [ i ] ;
    sum_x2 += pow ( x [ i ] , 2 ) ;
  }
  double m = ( double ) ( ( n * sum_xy - sum_x * sum_y ) / ( n * sum_x2 - pow ( sum_x , 2 ) ) ) ;
  double c = ( double ) ( sum_y - m * sum_x ) / n ;
  ;
  cout << "m = " << m << endl ;
  ;
  cout << "c = " << c << endl ;
  ;
}
