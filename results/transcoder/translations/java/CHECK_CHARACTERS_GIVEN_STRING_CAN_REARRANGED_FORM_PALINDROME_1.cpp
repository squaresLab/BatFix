bool canFormPalindrome ( string str ) {
  vector < char > v ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) {
    if ( v . find ( str [ i ] ) != v . end ( ) ) {
      v . erase ( ( v . find ( str [ i ] ) ) -> second ) ;
    }
    else {
      v . push_back ( str [ i ] ) ;
    }
  }
  if ( str . length ( ) % 2 == 0 && v . empty ( ) || ( str . length ( ) % 2 == 1 && v . size ( ) == 1 ) ) {
    return true ;
  }
  else {
    return false ;
  }
}
