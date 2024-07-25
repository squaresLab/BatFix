void myCopy ( char s1 [ ] , char s2 [ ] , int index ) {
  s2 [ index ] = s1 [ index ] ;
  if ( index == strlen ( s1 ) - 1 ) return ;
  myCopy ( s1 , s2 , index + 1 ) ;
}
