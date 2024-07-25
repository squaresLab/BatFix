void amendSentence ( string & string ) {
  string . clear ( ) ;
  for ( int i = 0 ;
  i < string . length ( ) ;
  i ++ ) {
    if ( string [ i ] >= 'A' && string [ i ] <= 'Z' ) {
      string [ i ] = ( char ) ( toupper ( string [ i ] ) + 32 ) ;
      if ( i != 0 ) cout << " " ;
      cout << string [ i ] << " " ;
    }
    else cout << string [ i ] << " " ;
  }
}
