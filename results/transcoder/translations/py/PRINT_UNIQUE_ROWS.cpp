void printArray ( const std :: vector < std :: vector < int >> & matrix ) {
  int rowCount = matrix . size ( ) ;
  if ( rowCount == 0 ) return ;
  int columnCount = matrix [ 0 ] . size ( ) ;
  if ( columnCount == 0 ) return ;
  std :: string rowOutputFormat = " " ;
  std :: map < std :: string , bool > printed ;
  for ( int i = 0 ;
  i < rowCount ;
  i ++ ) {
    std :: string routput = rowOutputFormat + std :: to_string ( i ) ;
    if ( routput != "" ) {
      printed [ routput ] = true ;
      std :: cout << routput << std :: endl ;
    }
  }
}
