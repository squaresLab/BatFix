void checkEulerFourSquareIdentity ( int a , int b ) {
  int ab = a * b ;
  bool flag = false ;
  int i = 0 ;
  while ( i * i <= ab ) {
    int j = i ;
    while ( i * i + j * j <= ab ) {
      int k = j ;
      while ( i * i + j * j + k * k <= ab ) {
        double l = sqrt ( ab - ( i * i + j * j + k * k ) ) ;
        if ( floor ( l ) == ceil ( l ) && l >= k ) {
          flag = true ;
          cout << "i = " << i << "\n" ;
          cout << "j = " << j << "\n" ;
          cout << "k = " << k << "\n" ;
          cout << "l = " << ( int ) l << "\n" ;
          cout << "Product of " << a << " and " << b << " can be written as sum of squares" << " of i, j, k, l \n" ;
          cout << ab << " = " << i << "*" << i << " + " << j << "*" << j << " + " << k << "*" << k << " + " << ( int ) l << "*" << ( int ) l << "\n" ;
        }
        k += 1 ;
      }
      j += 1 ;
    }
    i += 1 ;
  }
  if ( flag == false ) {
    cout << "Solution doesn't exist!" << endl ;
    return ;
  }
}
