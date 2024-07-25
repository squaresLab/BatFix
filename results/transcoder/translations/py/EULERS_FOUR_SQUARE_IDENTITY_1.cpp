void checkEulerFourSquareIdentity ( double a , double b ) {
  double ab = a * b ;
  bool flag = false ;
  int i = 0 ;
  while ( i * i <= ab ) {
    int j = i ;
    while ( i * i + j * j <= ab ) {
      int k = j ;
      while ( i * i + j * j + k * k <= ab ) {
        double l = ( ab - ( i * i + j * j + k * k ) ) * * ( 0.5 ) ;
        if ( l == ( int ) l && l >= k ) {
          flag = true ;
          cout << "i = " << i << endl ;
          cout << "j = " << j << endl ;
          cout << "k = " << k << endl ;
          cout << "l = " << l << endl ;
          cout << "Product of" << a << "and" << b << "can be written as sum of squares of i, j, k, l" << endl ;
          cout << ab << " = " << i << "*" << i << "+" << j << "*" << j << "+" << k << "*" << k << "+" << l << "*" << l << endl ;
        }
        k ++ ;
      }
      j ++ ;
    }
    i ++ ;
  }
  if ( flag == false ) {
    cout << "Solution doesn't exist!" << endl ;
    return ;
  }
}
