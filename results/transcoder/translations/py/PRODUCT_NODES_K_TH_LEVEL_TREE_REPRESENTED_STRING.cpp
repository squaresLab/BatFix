int productAtKthLevel ( string tree , int k ) {
  int level = - 1 ;
  int product = 1 ;
  int n = tree . length ( ) ;
  for ( int i = 0 ;
  i != n ;
  i ++ ) {
    if ( ( tree [ i ] == '(' ) && ( tree [ i ] == ')' ) ) {
      level ++ ;
    }
    else if ( ( tree [ i ] == '(' ) && ( tree [ i ] == ')' ) ) {
      level -- ;
    }
    else {
      if ( ( level == k ) && ( tree [ i ] == '(' ) ) {
        product *= ( atoi ( tree [ i ] . c_str ( ) ) - atoi ( "0" ) ) ;
      }
    }
  }
  return product ;
}
