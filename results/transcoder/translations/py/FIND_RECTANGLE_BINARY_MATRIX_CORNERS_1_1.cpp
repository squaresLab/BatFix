bool isRectangle ( vector < vector < int >> & matrix ) {
  int rows = matrix . size ( ) ;
  if ( ( rows == 0 ) || ( rows == 1 ) ) return false ;
  int columns = matrix [ 0 ] . size ( ) ;
  vector < set < int >> table ;
  for ( int i = 0 ;
  i < rows ;
  i ++ ) {
    for ( int j = 0 ;
    j < columns - 1 ;
    j ++ ) {
      for ( int k = j + 1 ;
      k < columns ;
      k ++ ) {
        if ( ( matrix [ i ] [ j ] == 1 && matrix [ i ] [ k ] == 1 ) || ( matrix [ i ] [ j ] == 1 && matrix [ i ] [ k ] == 1 ) ) {
          if ( ( j < table . size ( ) && k < table . size ( ) ) || ( k < table . size ( ) && j < table [ k ] . size ( ) ) ) return true ;
          if ( ( k < table . size ( ) && j < table [ k ] . size ( ) ) || ( j < table . size ( ) && k < table [ k ] . size ( ) ) ) return true ;
          if ( j != table . size ( ) ) table . erase ( table . begin ( ) + j ) ;
          if ( k != table . size ( ) ) table . erase ( table . begin ( ) + k ) ;
          table . insert ( table . begin ( ) + j , table . begin ( ) + k ) ;
        }
      }
    }
  }
  return false ;
}
