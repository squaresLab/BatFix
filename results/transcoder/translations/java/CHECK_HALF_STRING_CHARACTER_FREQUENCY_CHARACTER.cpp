bool checkCorrectOrNot ( string s ) {
  vector < int > count1 ( MAX_CHAR ) ;
  vector < int > count2 ( MAX_CHAR ) ;
  int n = s . length ( ) ;
  if ( n == 1 ) return true ;
  for ( int i = 0 , j = n - 1 ;
  i < j ;
  i ++ , j -- ) {
    count1 [ s [ i ] - 'a' ] ++ ;
    count2 [ s [ j ] - 'a' ] ++ ;
  }
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) if ( count1 [ i ] != count2 [ i ] ) return false ;
  return true ;
}
