int MinOperation ( int a [ ] , int b [ ] , int n ) {
  sort ( a , a + n , cmp ) ;
  sort ( b , b + n , cmp ) ;
  int result = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i += 1 ) {
    if ( ( a [ i ] > b [ i ] ) && ( a [ i ] < b [ i ] ) ) result = result + abs ( a [ i ] - b [ i ] ) ;
    else if ( ( a [ i ] < b [ i ] ) && ( a [ i ] > b [ i ] ) ) result = result + abs ( a [ i ] - b [ i ] ) ;
  }
  return result ;
}
