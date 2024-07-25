string sort_string ( string str , int n ) {
  string new_str ;
  for ( int i = 'a' ;
  i <= 'z' ;
  i ++ ) for ( int j = 0 ;
  j < n ;
  j ++ ) if ( str [ j ] == i ) new_str += str [ j ] ;
  return new_str ;
}
