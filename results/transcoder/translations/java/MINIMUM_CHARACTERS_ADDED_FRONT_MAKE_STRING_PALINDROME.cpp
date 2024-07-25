bool ispalindrome ( string s ) {
  int l = s . length ( ) ;
  for ( int i = 0 , j = l - 1 ;
  i <= j ;
  i ++ , j -- ) {
    if ( s [ i ] != s [ j ] ) {
      return false ;
    }
  }
  return true ;
}
