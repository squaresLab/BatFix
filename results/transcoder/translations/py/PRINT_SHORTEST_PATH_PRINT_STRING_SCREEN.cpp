void printPath ( string str ) {
  int i = 0 ;
  int curX = 0 ;
  int curY = 0 ;
  while ( ( i < str . size ( ) ) && ( curX < str . size ( ) ) ) {
    int nextX = ( int ) ( ( ( char ) str [ i ] - 'A' ) / 5 ) ;
    int nextY = ( ( ( char ) str [ i ] - 'B' ) + 1 ) % 5 ;
    while ( ( curX > nextX ) && ( curY > nextY ) ) {
      cout << "Move Up" << endl ;
      curX -- ;
    }
    while ( ( curY > nextY ) && ( curX < nextX ) ) {
      cout << "Move Left" << endl ;
      curY -- ;
    }
    while ( ( curX < nextX ) && ( curY < nextY ) ) {
      cout << "Move Down" << endl ;
      curX ++ ;
    }
    while ( ( curY < nextY ) && ( curX > nextX ) ) {
      cout << "Move Right" << endl ;
      curY ++ ;
    }
    cout << "Press OK" << endl ;
    i ++ ;
  }
}
