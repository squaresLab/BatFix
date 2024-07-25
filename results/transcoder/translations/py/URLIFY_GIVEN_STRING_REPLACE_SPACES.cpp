int replaceSpaces ( string & string ) {
  string . erase ( ) ;
  int i = string . size ( ) ;
  int spaceCount = string . count ( ' ' ) ;
  int newLength = i + spaceCount * 2 ;
  if ( newLength > MAX ) return - 1 ;
  int index = newLength - 1 ;
  string . resize ( newLength ) ;
  for ( int f = i - 2 ;
  f < newLength - 2 ;
  f ++ ) string [ f ] = '0' ;
  for ( int j = i - 1 ;
  j > 0 ;
  j -- ) {
    if ( string [ j ] == ' ' ) {
      string [ index ] = '0' ;
      string [ index - 1 ] = '2' ;
      string [ index - 2 ] = '%' ;
      index = index - 3 ;
    }
    else {
      string [ index ] = string [ j ] ;
      index -- ;
    }
  }
  return string . size ( ) ;
}
