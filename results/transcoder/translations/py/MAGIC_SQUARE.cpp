void generateSquare ( int n ) {
  int magicSquare [ n ] [ n ] ;
  int i = n / 2 ;
  int j = n - 1 ;
  int num = 1 ;
  while ( num <= ( n * n ) ) {
    if ( i == - 1 && j == n ) {
      j = n - 2 ;
      i = 0 ;
    }
    else {
      if ( j == n ) j = 0 ;
      if ( i < 0 ) i = n - 1 ;
    }
    if ( magicSquare [ ( int ) i ] [ ( int ) j ] ) {
      j = j - 2 ;
      i = i + 1 ;
      continue ;
    }
    else {
      magicSquare [ ( int ) i ] [ ( int ) j ] = num ;
      num = num + 1 ;
    }
    j = j + 1 ;
    i = i - 1 ;
  }
  cout << "Magic Squre for n =" << n << endl ;
  cout << "Sum of each row or column" << n * ( n * n + 1 ) / 2 << "\n" ;
  for ( i = 0 ;
  i <= n ;
  i ++ ) {
    for ( j = 0 ;
    j <= n ;
    j ++ ) {
      cout << setw ( 2 ) << magicSquare [ i ] [ j ] << " " ;
      if ( j == n - 1 ) cout << endl ;
    }
  }
}
