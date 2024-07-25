void printMinIndexChar ( string str , string patt ) {
  int minIndex = INT_MAX ;
  int m = str . length ( ) ;
  int n = patt . length ( ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < m ;
    j ++ ) {
      if ( patt [ i ] == str [ j ] && j < minIndex ) {
        minIndex = j ;
        break ;
      }
    }
  }
  if ( minIndex != INT_MAX ) {
    cout << "Minimum Index Character = " << str [ minIndex ] << endl ;
  }
  else {
    cout << "No character present" << endl ;
  }
}
