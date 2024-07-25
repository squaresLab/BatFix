String reversingString ( char * str , int start , int end ) {
  while ( start < end ) {
    str [ start ] ^= str [ end ] ;
    str [ end ] ^= str [ start ] ;
    str [ start ] ^= str [ end ] ;
    ++ start ;
    -- end ;
  }
  return String ( str ) ;
}
