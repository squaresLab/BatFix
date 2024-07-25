bool check ( string st ) {
  int n = st . length ( ) ;
  int digitSum = 0 ;
  for ( int i = 0 ;
  i != n ;
  i ++ ) digitSum = digitSum + ( int ) ( st [ i ] ) ;
  return ( digitSum % 9 == 0 ) ;
}
