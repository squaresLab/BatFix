void generateSquare ( int n ) {
  int magicSquare [ n ] [ n ] ;
  int i = n / 2 ;
  int j = n - 1 ;
  for ( int num = 1 ;
  num <= n * n ;
  ) {
    if ( i == - 1 && j == n ) {
      j = n - 2 ;
      i = 0 ;
    }
    else {
      if ( j == n ) j = 0 ;
      if ( i < 0 ) i = n - 1 ;
    }
    if ( magicSquare [ i ] [ j ] != 0 ) {
      j -= 2 ;
      i ++ ;
      continue ;
    }
    else {
      magicSquare [ i ] [ j ] = num ++ ;
    }
    j ++ ;
    i -- ;
  }
  cout << "The Magic Square for " << n << ":" << endl ;
  cout << "Sum of each row or column " << n * ( n * n + 1 ) / 2 << ":" << endl ;
  for ( i = 0 ;
  i < n ;
  i ++ ) {
    for ( j = 0 ;
    j < n ;
    j ++ ) {
      cout << magicSquare [ i ] [ j ] << " " ;
    }
    cout << endl ;
  }
}
