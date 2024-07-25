string lexsmallest ( string a [ ] , int n ) {
  sort ( a , a + n ) ;
  string answer ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    answer += a [ i ] ;
  }
  return answer ;
}
