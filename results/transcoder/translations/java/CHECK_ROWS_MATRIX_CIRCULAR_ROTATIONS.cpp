bool isPermutedMatrix ( int mat [ ] [ 2 ] , int n ) {
  string str_cat ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) str_cat . push_back ( "%d-%d" , str [ 0 ] [ i ] , str [ 1 ] [ i ] ) ;
  str_cat . clear ( ) ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    string curr_str ;
    for ( int j = 0 ;
    j < n ;
    j ++ ) curr_str . push_back ( "%d-%d" , str [ i ] [ j ] , str [ 1 ] [ j ] ) ;
    if ( str_cat . compare ( curr_str ) != 0 ) return false ;
  }
  return true ;
}
