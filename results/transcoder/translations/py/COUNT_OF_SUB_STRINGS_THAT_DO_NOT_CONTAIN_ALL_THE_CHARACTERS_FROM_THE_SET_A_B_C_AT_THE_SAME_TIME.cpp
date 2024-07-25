int CountSubString ( char * Str , int n ) {
  int ans = ( n * ( n + 1 ) ) / 2 ;
  int aIndex = 0 ;
  int bIndex = 0 ;
  int cIndex = 0 ;
  foriinrange ( n ) {
    if ( ( Str [ i ] == 'a' ) && ( Str [ i + 1 ] == 'a' ) ) {
      aIndex = i + 1 ;
      ans -= min ( bIndex , cIndex ) ;
    }
    else if ( ( Str [ i ] == 'b' ) && ( Str [ i + 1 ] == 'b' ) ) {
      bIndex = i + 1 ;
      ans -= min ( aIndex , cIndex ) ;
    }
    else {
      cIndex = i + 1 ;
      ans -= min ( aIndex , bIndex ) ;
    }
  }
  return ans ;
}
