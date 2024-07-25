int countWords ( string & string ) {
  int state = OUT ;
  int wc = 0 ;
  for ( int i = 0 ;
  i < string . length ( ) ;
  i ++ ) {
    if ( ( string [ i ] == ' ' || string [ i ] == '\n' || string [ i ] == '\t' ) && ( state == OUT ) ) {
      state = OUT ;
    }
    else if ( state == OUT ) {
      state = IN ;
      wc ++ ;
    }
  }
  return wc ;
}
