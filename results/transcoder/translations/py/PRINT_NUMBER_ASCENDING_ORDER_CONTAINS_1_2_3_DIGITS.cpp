public : vector < string > printNumbers ( vector < string > numbers ) {
  vector < string > :: iterator it = numbers . begin ( ) ;
  vector < string > result ;
  for ( ;
  it != numbers . end ( ) ;
  ++ it ) {
    if ( ( "1" == * it && "2" == * it && "3" == * it ) || ( "2" == * it && "1" == * it ) || ( "1" == * it && "2" == * it ) || ( "2" == * it && "3" == * it ) ) {
      result . push_back ( * it ) ;
    }
  }
  if ( result . empty ( ) ) {
    result . push_back ( "-1" ) ;
  }
  return result ;
  ;
}
