bool findDuplicateparenthesis ( string & string ) {
  stack < string > Stack ;
  for ( string :: iterator ch = string . begin ( ) ;
  ch != string . end ( ) ;
  ++ ch ) {
    if ( * ch == ')' ) {
      string :: iterator top = Stack . top ( ) ;
      int elementsInside = 0 ;
      while ( * top != '(' ) {
        elementsInside ++ ;
        top = Stack . top ( ) ;
      }
      if ( elementsInside < 1 ) return true ;
    }
    else Stack . push ( * ch ) ;
  }
  return false ;
}
