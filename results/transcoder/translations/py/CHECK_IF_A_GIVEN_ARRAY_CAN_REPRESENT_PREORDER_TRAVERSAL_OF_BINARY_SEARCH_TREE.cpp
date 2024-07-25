bool canRepresentBST ( vector < int > pre ) {
  vector < int > s ;
  int root = INT_MIN ;
  for ( int value : pre ) {
    if ( value < root ) return false ;
    while ( ( s . size ( ) > 0 && s . back ( ) < value ) || ( s . size ( ) == 1 && s . back ( ) < value ) ) root = s . back ( ) ;
    s . pop_back ( ) ;
  }
  return true ;
}
