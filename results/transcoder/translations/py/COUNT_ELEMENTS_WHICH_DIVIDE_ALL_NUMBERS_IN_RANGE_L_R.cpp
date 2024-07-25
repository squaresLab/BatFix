int answerQuery ( int a [ ] , int n , int l , int r ) {
  int count = 0 ;
  l = l - 1 ;
  for ( int i = l ;
  i < r ;
  i += 1 ) {
    int element = a [ i ] ;
    int divisors = 0 ;
    for ( int j = l ;
    j < r ;
    j += 1 ) {
      if ( ( a [ j ] % a [ i ] == 0 ) && ( element % a [ i ] == 0 ) ) {
        divisors ++ ;
      }
      else {
        break ;
      }
    }
    if ( ( divisors == ( r - l ) ) || ( divisors == ( r - l ) ) ) {
      count ++ ;
    }
  }
  return count ;
}
