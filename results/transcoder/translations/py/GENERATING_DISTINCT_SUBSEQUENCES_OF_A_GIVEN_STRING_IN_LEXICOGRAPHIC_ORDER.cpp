void generate ( set < string > & st , string s ) {
  if ( s . size ( ) == 0 ) return ;
  if ( s != "" ) {
    st . insert ( s ) ;
    for ( int i = 0 ;
    i < s . size ( ) ;
    i ++ ) {
      string t = list ( s ) . erase ( s . begin ( ) + i ) ;
      t . erase ( t . begin ( ) + i ) ;
      generate ( st , t ) ;
    }
  }
  return ;
}
