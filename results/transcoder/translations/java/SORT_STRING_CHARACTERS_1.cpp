string sortString ( string inputString ) {
  char tempArray [ 256 ] ;
  inputString . resize ( strlen ( tempArray ) ) ;
  std :: transform ( inputString . begin ( ) , inputString . end ( ) , tempArray , tolower ) ;
  return string ( tempArray ) ;
}
