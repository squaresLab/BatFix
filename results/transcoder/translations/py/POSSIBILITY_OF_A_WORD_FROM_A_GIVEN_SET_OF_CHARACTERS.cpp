bool isPresent ( string s , string q ) {
  vector < int > freq ( MAX_CHAR , 0 ) ;
  for ( int i = 0 ;
  i != s . length ( ) ;
  i ++ ) freq [ ( int ) s [ i ] ] ++ ;
  for ( int i = 0 ;
  i != q . length ( ) ;
  i ++ ) {
    freq [ ( int ) q [ i ] ] -- ;
    if ( ( freq [ ( int ) q [ i ] ] < 0 ) || ( freq [ ( int ) q [ i ] ] > MAX_CHAR ) ) return false ;
  }
  return true ;
}
