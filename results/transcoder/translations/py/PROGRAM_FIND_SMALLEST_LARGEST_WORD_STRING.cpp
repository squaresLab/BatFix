void minMaxLengthWords ( string & inp ) {
  int length = inp . length ( ) ;
  int si = ei = 0 ;
  int minLength = length ;
  int minStartIndex = maxLength = maxStartIndex = 0 ;
  while ( ei <= length ) {
    if ( ( ei < length ) && ( inp [ ei ] != ' ' ) ) {
      ei ++ ;
    }
    else {
      int currLength = ei - si ;
      if ( currLength < minLength ) {
        minLength = currLength ;
        minStartIndex = si ;
      }
      if ( currLength > maxLength ) {
        maxLength = currLength ;
        maxStartIndex = si ;
      }
      ei ++ ;
      si = ei ;
    }
  }
  string minWord = inp . substr ( minStartIndex , minStartIndex + minLength ) ;
  string maxWord = inp . substr ( maxStartIndex , maxLength ) ;
  cout << "Minimum length word: " << minWord << endl ;
  cout << "Maximum length word: " << maxWord << endl ;
}
