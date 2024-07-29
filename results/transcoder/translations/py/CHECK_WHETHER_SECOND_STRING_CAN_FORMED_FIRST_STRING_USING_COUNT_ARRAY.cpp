bool canMakeStr2 ( string s1 , string s2 ) {
  map < string , int > count {
    s1 . size ( ) }
    ;
    for ( int i = 0 ;
    i < s1 . size ( ) ;
    i ++ ) {
      count [ s1 [ i ] ] ++ ;
    }
    for ( int i = 0 ;
    i < s2 . size ( ) ;
    i ++ ) {
      if ( count [ s2 [ i ] ] == 0 ) {
        return false ;
      }
      count [ s2 [ i ] ] -- ;
    }
    return true ;
  }

