bool findDuplicateparenthesis ( string s ) {
  stack < char > Stack ;
  char * str = s . c_str ( ) ;
  for ( char ch : * str ) {
    if ( ch == ')' ) {
      char * top = Stack . top ( ) ;
      Stack . pop ( ) ;
      int elementsInside = 0 ;
      while ( * top != '(' ) {
        elementsInside ++ ;
        top = Stack . top ( ) ;
        Stack . pop ( ) ;
      }
      if ( elementsInside < 1 ) return true ;
    }
    else Stack . push ( ch ) ;
  }
  return false ;
}
