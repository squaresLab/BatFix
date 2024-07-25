bool check ( string st ) {
  int n = st . length ( ) ;
  if ( ( ( ( int ) ( st [ n - 1 ] ) % 2 ) != 0 ) && ( ( ( int ) ( st [ n - 1 ] ) % 2 ) != 0 ) ) return false ;
  int digitSum = 0 ;
  for ( int i = 0 ;
  i != n ;
  i ++ ) digitSum = digitSum + ( int ) ( st [ i ] ) ;
  return ( digitSum % 3 == 0 ) ;
}
