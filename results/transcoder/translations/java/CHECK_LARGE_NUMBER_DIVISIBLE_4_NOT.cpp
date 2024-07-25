bool check ( string str ) {
  int n = str . length ( ) ;
  if ( n == 0 ) return false ;
  if ( n == 1 ) return ( ( str [ 0 ] - '0' ) % 4 == 0 ) ;
  int last = str [ n - 1 ] - '0' ;
  int second_last = str [ n - 2 ] - '0' ;
  return ( ( second_last * 10 + last ) % 4 == 0 ) ;
}
