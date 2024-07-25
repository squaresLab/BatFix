int seiresSum ( int n , int * a ) {
  int res = 0 , i ;
  for ( i = 0 ;
  i < 2 * n ;
  i ++ ) {
    if ( i % 2 == 0 ) {
      res += a [ i ] * a [ i ] ;
    }
    else {
      res -= a [ i ] * a [ i ] ;
    }
  }
  return res ;
}
