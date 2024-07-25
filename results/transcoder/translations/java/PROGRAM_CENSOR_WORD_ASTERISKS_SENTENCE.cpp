string censor ( string text , string word ) {
  vector < string > word_list = text . split ( "s+" ) ;
  string result ;
  string stars = "" ;
  for ( int i = 0 ;
  i < word . size ( ) ;
  i ++ ) {
    stars += '*' ;
  }
  int index = 0 ;
  for ( auto i : word_list ) {
    if ( i == word ) {
      word_list [ index ] = stars ;
    }
    index ++ ;
  }
  for ( auto i : word_list ) {
    result += i + ' ' ;
  }
  return result ;
}
