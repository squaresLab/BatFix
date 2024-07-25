void reverse ( string str ) {
  if ( ( str . size ( ) == 0 ) || ( str . size ( ) <= 1 ) ) {
    cout << str << endl ;
  }
  else {
    cout << str [ str . size ( ) - 1 ] << endl ;
    reverse ( str . begin ( ) , str . end ( ) ) ;
  }
}
