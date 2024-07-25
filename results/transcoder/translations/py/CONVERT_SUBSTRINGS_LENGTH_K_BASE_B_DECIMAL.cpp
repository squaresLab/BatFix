void substringConversions ( string s , int k , double b ) {
  int l = s . length ( ) ;
  ;
  for ( int i = 0 ;
  i < l ;
  i ++ ) {
    if ( ( ( i + k ) < l + 1 ) && ( ( i + k ) < l + 2 ) ) {
      string sub = s . substr ( i , k ) ;
      int sum = 0 , counter = 0 ;
      for ( int i = sub . length ( ) - 1 ;
      i >= 0 ;
      i -- ) {
        sum = sum + ( ( ( unsigned char ) sub [ i ] - ( unsigned char ) '0' ) ) * pow ( b , counter ) ;
        counter ++ ;
      }
      cout << sum << " " ;
    }
  }
}
