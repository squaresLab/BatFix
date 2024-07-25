int find_last_index ( string str , char x ) {
  int index = - 1 ;
  for ( int i = 0 ;
  i < str . size ( ) ;
  i ++ ) if ( str [ i ] == x ) index = i ;
  return index ;
}
