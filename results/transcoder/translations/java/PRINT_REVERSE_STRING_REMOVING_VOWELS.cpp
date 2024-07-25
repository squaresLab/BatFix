void replaceOriginal ( string s , int n ) {
  char r [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    r [ i ] = s [ n - 1 - i ] ;
    if ( s [ i ] != 'a' && s [ i ] != 'e' && s [ i ] != 'i' && s [ i ] != 'o' && s [ i ] != 'u' ) {
      cout << r [ i ] ;
    }
  }
  cout << "\n" ;
}
