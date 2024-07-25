string sortString ( string str , int n ) {
  string new_str = "" ;
  for ( int i = ( char ) 'a' ;
  i <= ( char ) 'z' ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      if ( ( str [ j ] == ( char ) i ) || ( str [ j ] == ( char ) ( i ) ) ) {
        new_str += str [ j ] ;
      }
    }
  }
  return new_str ;
}
