bool checkCorrectOrNot ( string s ) {
  vector < int > count ( MAX_CHAR , 0 ) ;
  int n = s . length ( ) ;
  if ( n == 1 ) return true ;
  for ( int i = 0 , j = n - 1 ;
  i < j ;
  i ++ , j -- ) {
    count [ s [ i ] - 'a' ] ++ ;
    count [ s [ j ] - 'a' ] -- ;
  }
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) if ( count [ i ] != 0 ) return false ;
  return true ;
}
