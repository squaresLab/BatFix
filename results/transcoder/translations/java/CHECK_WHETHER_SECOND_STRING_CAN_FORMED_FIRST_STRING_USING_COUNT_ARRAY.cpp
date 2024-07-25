bool canMakeStr2 ( string str1 , string str2 ) {
  int count [ MAX ] ;
  char * str3 = str1 . c_str ( ) ;
  for ( int i = 0 ;
  i < str3 [ 0 ] ;
  i ++ ) {
    count [ str3 [ i ] ] ++ ;
  }
  char * str4 = str2 . c_str ( ) ;
  for ( int i = 0 ;
  i < str4 [ 0 ] ;
  i ++ ) {
    if ( count [ str4 [ i ] ] == 0 ) return false ;
    count [ str4 [ i ] ] -- ;
  }
  return true ;
}
