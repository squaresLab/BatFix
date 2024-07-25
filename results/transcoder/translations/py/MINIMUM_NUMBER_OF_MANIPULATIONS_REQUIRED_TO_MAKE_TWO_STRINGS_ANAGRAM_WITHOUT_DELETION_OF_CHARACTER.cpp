int countManipulations ( string s1 , string s2 ) {
  int count = 0 ;
  vector < int > char_count ( 26 , 0 ) ;
  for ( int i = 0 ;
  i < 26 ;
  i ++ ) char_count [ i ] = 0 ;
  for ( int i = 0 ;
  i < s1 . length ( ) ;
  i ++ ) char_count [ ( int ) s1 [ i ] - ( int ) 'a' ] ++ ;
  for ( int i = 0 ;
  i < s2 . length ( ) ;
  i ++ ) {
    char_count [ ( int ) s2 [ i ] - ( int ) 'a' ] -- ;
    if ( ( char_count [ ( int ) s2 [ i ] - ( int ) 'a' ] < 0 ) ) count ++ ;
  }
  return count ;
}
