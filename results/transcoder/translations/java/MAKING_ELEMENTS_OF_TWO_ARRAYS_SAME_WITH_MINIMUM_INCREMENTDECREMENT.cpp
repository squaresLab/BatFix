int MinOperation ( int a [ ] , int b [ ] , int n ) {
  sort ( a , a + n ) ;
  sort ( b , b + n ) ;
  int result = 0 ;
  for ( int i = 0 ;
  i < n ;
  ++ i ) {
    if ( a [ i ] > b [ i ] ) {
      result = result + abs ( a [ i ] - b [ i ] ) ;
    }
    else if ( a [ i ] < b [ i ] ) {
      result = result + abs ( a [ i ] - b [ i ] ) ;
    }
  }
  return result ;
}
