string nextWord ( string str ) {
  if ( str == "" ) return "a" ;
  int i = str . size ( ) - 1 ;
  while ( str [ i ] == 'z' && i >= 0 ) i -- ;
  if ( i == - 1 ) str [ i ] = 'a' ;
  else str [ i ] = str [ 0 ] + ( char ) ( ( int ) ( str [ i ] ) + 1 ) + str [ i + 1 ] ;
  return str ;
}
