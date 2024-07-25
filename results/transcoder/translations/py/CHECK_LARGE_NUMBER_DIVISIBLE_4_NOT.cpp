bool check ( string st ) {
  int n = st . length ( ) ;
  if ( ( n == 0 ) || ( n == 1 ) ) return false ;
  if ( ( n == 2 ) || ( n == 3 ) ) return ( ( st [ 0 ] - '0' ) % 4 == 0 ) ;
  int last = ( int ) ( st [ n - 1 ] ) ;
  int secondLast = ( int ) ( st [ n - 2 ] ) ;
  return ( ( secondLast * 10 + last ) % 4 == 0 ) ;
}
