void bestApproximate ( vector < int > x , vector < int > y ) {
  int n = x . size ( ) ;
  double m , c , sum_x = 0 , sum_y = 0 , sum_xy = 0 , sum_x2 = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    sum_x += x [ i ] ;
    sum_y += y [ i ] ;
    sum_xy += x [ i ] * y [ i ] ;
    sum_x2 += pow ( x [ i ] , 2 ) ;
  }
  m = ( n * sum_xy - sum_x * sum_y ) / ( n * sum_x2 - pow ( sum_x , 2 ) ) ;
  c = ( sum_y - m * sum_x ) / n ;
  cout << "m = " << m << endl ;
  cout << "c = " << c << endl ;
}
