bool match ( const std :: string & first , const std :: string & second ) {
  if ( first . size ( ) == 0 && second . size ( ) == 0 ) return true ;
  if ( first . size ( ) > 1 && first [ 0 ] == '*' && second . size ( ) == 0 ) return false ;
  if ( ( first . size ( ) > 1 && first [ 0 ] == '?' ) || ( first . size ( ) != 0 && second . size ( ) != 0 && first [ 0 ] == second [ 0 ] ) ) return match ( first . substr ( 1 ) , second . substr ( 1 ) ) ;
  if ( first . size ( ) > 0 && first [ 0 ] == '*' ) return match ( first . substr ( 1 ) , second ) || match ( first , second . substr ( 1 ) ) ;
  return false ;
}
