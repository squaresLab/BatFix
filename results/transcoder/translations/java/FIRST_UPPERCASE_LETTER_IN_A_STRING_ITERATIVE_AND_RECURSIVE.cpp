char first ( const std :: string & str ) {
  for ( std :: string :: const_iterator i = str . begin ( ) ;
  i != str . end ( ) ;
  ++ i ) if ( isupper ( * i ) ) return * i ;
  return 0 ;
}
