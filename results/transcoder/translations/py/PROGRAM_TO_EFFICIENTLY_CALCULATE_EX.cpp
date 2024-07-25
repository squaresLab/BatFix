void exponential ( int n , double x ) {
  double sum = 1.0 ;
  for ( int i = n ;
  i > 0 ;
  i -- ) sum = 1 + x * sum / i ;
  cout << "e^x =" << sum << endl ;
}
