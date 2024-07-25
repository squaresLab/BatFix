void reverse ( char str [ ] ) {
  int n = strlen ( str ) , i ;
  for ( i = 0 ;
  i < n / 2 ;
  i ++ ) swap ( str [ i ] , str [ n - i - 1 ] ) ;
}
