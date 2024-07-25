void lineFromPoints ( const pair < int , int > & P , const pair < int , int > & Q ) {
  int a = Q . second - P . second ;
  int b = P . first - Q . first ;
  int c = a * ( P . first ) + b * ( P . second ) ;
  if ( b < 0 ) cout << "The line passing through points P and Q is: " << a << "x " << b << "y = " << c << endl ;
  else cout << "The line passing through points P and Q is: " << a << "x + " << b << "y = " << c << endl ;
}
