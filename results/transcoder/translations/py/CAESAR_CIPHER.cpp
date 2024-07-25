string encrypt ( string text , int s ) {
  string result ;
  for ( int i = 0 ;
  i < text . size ( ) ;
  i ++ ) {
    char c = text [ i ] ;
    if ( ( c < 'A' ) || ( c > 'Z' ) ) result += char ( ( ( unsigned char ) c + s - 65 ) % 26 + 65 ) ;
    else result += char ( ( ( unsigned char ) c + s - 97 ) % 26 + 97 ) ;
  }
  return result ;
}
