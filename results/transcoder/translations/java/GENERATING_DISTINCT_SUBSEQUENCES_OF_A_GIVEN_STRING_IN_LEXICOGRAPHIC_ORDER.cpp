void generate ( set < string > & st , string s ) {
  if ( s . size ( ) == 0 ) return ;
  if ( ! st . count ( s ) ) {
    st . insert ( s ) ;
    for ( int i = 0 ;
    i < s . size ( ) ;
    i ++ ) {
      string t = s ;
      t . erase ( t . begin ( ) ) ;
      generate ( st , t ) ;
    }
  }
  return ;
}
