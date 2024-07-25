string censor ( string text , string word ) {
  string wordList = text ;
  string result ;
  string stars = "*" ;
  int count = 0 ;
  int index = 0 ;
  ;
  for ( int i = 0 ;
  i < wordList . size ( ) ;
  i ++ ) {
    if ( wordList [ i ] == word ) {
      wordList [ index ] = stars ;
    }
    index ++ ;
  }
  result = " " + wordList ;
  return result ;
}
