void printPath ( string str ) {
  int i = 0 ;
  int curX = 0 , curY = 0 ;
  while ( i < str . length ( ) ) {
    int nextX = ( str [ i ] - 'A' ) / 5 ;
    int nextY = ( str [ i ] - 'B' + 1 ) % 5 ;
    while ( curX > nextX ) {
      cout << "Move Up" << endl ;
      curX -- ;
    }
    while ( curY > nextY ) {
      cout << "Move Left" << endl ;
      curY -- ;
    }
    while ( curX < nextX ) {
      cout << "Move Down" << endl ;
      curX ++ ;
    }
    while ( curY < nextY ) {
      cout << "Move Right" << endl ;
      curY ++ ;
    }
    cout << "Press OK" << endl ;
    i ++ ;
  }
}
