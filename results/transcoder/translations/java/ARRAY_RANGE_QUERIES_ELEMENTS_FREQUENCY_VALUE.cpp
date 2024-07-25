int solve_query ( int start , int end , int arr [ ] ) {
  map < int , int > mp ;
  for ( int i = start ;
  i <= end ;
  i ++ ) {
    mp [ arr [ i ] ] = mp [ arr [ i ] ] == 0 ? 1 : mp [ arr [ i ] ] + 1 ;
  }
  int count = 0 ;
  for ( map < int , int > :: iterator it = mp . begin ( ) ;
  it != mp . end ( ) ;
  it ++ ) if ( it -> first == arr [ i ] ) count ++ ;
  return count ;
}
