void splitString ( string str ) {
  string alpha , num , special ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) {
    if ( isdigit ( str [ i ] ) ) {
      num . push_back ( str [ i ] ) ;
    }
    else if ( isalpha ( str [ i ] ) ) {
      alpha . push_back ( str [ i ] ) ;
    }
    else {
      special . push_back ( str [ i ] ) ;
    }
  }
  cout << alpha << endl ;
  cout << num << endl ;
  cout << special << endl ;
}
