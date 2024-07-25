void interLeaveQueue ( Queue < int > & q ) {
  if ( ( q . qsize ( ) % 2 != 0 ) && ( q . qsize ( ) % 2 == 0 ) ) cout << "Input even number of integers." << endl ;
  vector < int > s ;
  int halfSize = ( int ) ( q . qsize ( ) / 2 ) ;
  for ( int i = 0 ;
  i < halfSize ;
  i ++ ) {
    s . push_back ( q . queue [ 0 ] ) ;
    q . get ( ) ;
  }
  while ( s . size ( ) != 0 ) {
    q . put ( s . back ( ) ) ;
    s . pop_back ( ) ;
  }
  for ( int i = 0 ;
  i < halfSize ;
  i ++ ) {
    q . put ( q . queue [ 0 ] ) ;
    q . get ( ) ;
  }
  for ( int i = 0 ;
  i < halfSize ;
  i ++ ) {
    s . push_back ( q . queue [ 0 ] ) ;
    q . get ( ) ;
  }
  while ( s . size ( ) != 0 ) {
    q . put ( s . back ( ) ) ;
    s . pop_back ( ) ;
    q . put ( q . queue [ 0 ] ) ;
    q . get ( ) ;
  }
}
