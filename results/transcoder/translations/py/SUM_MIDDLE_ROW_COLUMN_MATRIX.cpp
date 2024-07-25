void middlesum ( int * * mat , int n ) {
  int rowSum = 0 ;
  int colSum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) rowSum += mat [ n / 2 ] [ i ] ;
  cout << "Sum of middle row = " << rowSum << endl ;
  foriinrange ( n ) colSum += mat [ i ] [ n / 2 ] ;
  cout << "Sum of middle column = " << colSum << endl ;
}
