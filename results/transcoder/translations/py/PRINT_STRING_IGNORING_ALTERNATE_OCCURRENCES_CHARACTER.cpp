void printStringAlternate ( string string ) {
  map < string , int > occ ;
  for ( int i = 0 ;
  i != string . size ( ) ;
  i ++ ) {
    string [ i ] . tolower ( ) ;
    occ [ temp ] = occ . find ( temp ) -> second + 1 ;
    if ( occ [ temp ] & 1 ) cout << string [ i ] << " " ;
  }
  cout << endl ;
}
