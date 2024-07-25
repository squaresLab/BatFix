void myCopy ( string s1 , string s2 , int index ) {
  s2 [ index ] = s1 [ index ] ;
  ;
  if ( ( index == s1 . length ( ) - 1 ) || ( index == s2 . length ( ) - 1 ) ) return ;
  ;
  myCopy ( s1 , s2 , index + 1 ) ;
  ;
}
