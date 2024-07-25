bool isRectangle ( vector < vector < int >> & matrix ) {
  int rows = matrix . size ( ) ;
  if ( rows == 0 ) return false ;
  int columns = matrix [ 0 ] . size ( ) ;
  unordered_map < int , set < int >> table ;
  for ( int i = 0 ;
  i < rows ;
  i ++ ) {
    for ( int j = 0 ;
    j < columns - 1 ;
    j ++ ) {
      for ( int k = j + 1 ;
      k < columns ;
      k ++ ) {
        if ( matrix [ i ] [ j ] == 1 && matrix [ i ] [ k ] == 1 ) {
          if ( table . count ( j ) && table [ j ] . count ( k ) ) return true ;
          if ( table . count ( k ) && table [ k ] . count ( j ) ) return true ;
          if ( ! table . count ( j ) ) {
            set < int > x ;
            x . insert ( k ) ;
            table [ j ] . insert ( x ) ;
          }
          else {
            table [ j ] . insert ( k ) ;
          }
          if ( ! table . count ( k ) ) {
            set < int > x ;
            x . insert ( j ) ;
            table [ k ] . insert ( x ) ;
          }
          else {
            table [ k ] . insert ( j ) ;
          }
        }
      }
    }
  }
  return false ;
}
