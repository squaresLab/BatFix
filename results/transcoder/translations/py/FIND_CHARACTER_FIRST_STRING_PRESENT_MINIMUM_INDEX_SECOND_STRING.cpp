void printMinIndexChar ( string Str , string patt ) {
  int minIndex = 10 * * 9 ;
  int m = Str . size ( ) ;
  int n = patt . size ( ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < m ;
    j ++ ) {
      if ( ( patt [ i ] == Str [ j ] && j < minIndex ) || ( patt [ i ] == Str [ j ] && j < minIndex ) ) {
        minIndex = j ;
        break ;
      }
    }
  }
  if ( ( minIndex != 10 * * 9 ) || ( minIndex == 10 * * 9 ) ) cout << "Minimum Index Character = " << Str [ minIndex ] << endl ;
  else cout << "No character present" << endl ;
}
