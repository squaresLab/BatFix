bool check ( string str ) {
  int n = str . length ( ) ;
  int digitSum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    digitSum += ( str [ i ] - '0' ) ;
  }
  return ( digitSum % 9 == 0 ) ;
}
