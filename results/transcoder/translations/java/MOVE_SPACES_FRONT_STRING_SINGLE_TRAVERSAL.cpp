void moveSpaceInFront ( char str [ ] ) {
  int i = strlen ( str ) - 1 ;
  for ( int j = i ;
  j >= 0 ;
  j -- ) if ( str [ j ] != ' ' ) str [ i -- ] = str [ j ] ;
  while ( i >= 0 ) str [ i -- ] = ' ' ;
}
