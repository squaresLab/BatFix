string find_substr ( string str ) {
  int n = str . length ( ) ;
  int dist_count = 0 ;
  bool visited [ MAX_CHARS ] ;
  memset ( visited , false , sizeof ( visited ) ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( visited [ str [ i ] ] == false ) {
      visited [ str [ i ] ] = true ;
      dist_count ++ ;
    }
  }
  int start = 0 , start_index = - 1 ;
  int min_len = INT_MAX ;
  int count = 0 ;
  int curr_count [ MAX_CHARS ] ;
  for ( int j = 0 ;
  j < n ;
  j ++ ) {
    curr_count [ str [ j ] ] ++ ;
    if ( curr_count [ str [ j ] ] == 1 ) {
      count ++ ;
    }
    if ( count == dist_count ) {
      while ( curr_count [ str [ start ] ] > 1 ) {
        if ( curr_count [ str [ start ] ] > 1 ) {
          curr_count [ str [ start ] ] -- ;
        }
        start ++ ;
      }
      int len_window = j - start + 1 ;
      if ( min_len > len_window ) {
        min_len = len_window ;
        start_index = start ;
      }
    }
  }
  return str . substr ( start_index , start_index + min_len ) ;
}
