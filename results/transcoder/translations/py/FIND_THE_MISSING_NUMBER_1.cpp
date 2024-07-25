int getMissingNo ( int a [ ] , int n ) {
  int i , total = 0 ;
  total = 1 ;
  for ( i = 2 ;
  i <= n ;
  i += 2 ) {
    total += i ;
    total -= a [ i - 2 ] ;
  }
  return total ;
}
