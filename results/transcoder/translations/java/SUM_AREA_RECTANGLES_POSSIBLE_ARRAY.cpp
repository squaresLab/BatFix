int MaxTotalRectangleArea ( int * a , int n ) {
  sort ( a , a + n ) ;
  int sum = 0 ;
  bool flag = false ;
  int len = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( a [ i ] == a [ i + 1 ] || a [ i ] - a [ i + 1 ] == 1 ) && ! flag ) {
      flag = true ;
      len = a [ i + 1 ] ;
      i ++ ;
    }
    else if ( ( a [ i ] == a [ i + 1 ] || a [ i ] - a [ i + 1 ] == 1 ) && ( flag ) ) {
      sum = sum + a [ i + 1 ] * len ;
      flag = false ;
      i ++ ;
    }
  }
  return sum ;
}
