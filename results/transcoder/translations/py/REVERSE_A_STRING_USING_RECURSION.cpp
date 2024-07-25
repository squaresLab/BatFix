void reverse ( string & string ) {
  if ( string . size ( ) == 0 ) return ;
  string temp = string [ 0 ] ;
  reverse ( string . begin ( ) , string . end ( ) ) ;
  cout << temp << "\n" ;
}
