int findSmallest ( int arr [ ] , int n ) {
  int res = 1 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( arr [ i ] <= res ) {
      res = res + arr [ i ] ;
    }
    else {
      break ;
    }
  }
  return res ;
}
