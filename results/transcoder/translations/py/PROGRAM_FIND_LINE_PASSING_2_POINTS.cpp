void lineFromPoints ( Point P , Point Q ) {
  double a = Q . y - P . y ;
  double b = P . x - Q . x ;
  double c = a * ( P . x ) + b * ( P . y ) ;
  if ( ( b < 0 ) || ( b > 1 ) ) cout << "The line passing through points P and Q is:" << a << "x " << b << "y = " << c << "\n" ;
  else cout << "The line passing through points P and Q is: " << a << "x + " << b << "y = " << c << "\n" ;
}
