bool isMajority ( int a [ ] , int n ) {
  unordered_map < int , int > mp ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) if ( mp . count ( a [ i ] ) ) mp [ a [ i ] ] = mp [ a [ i ] ] + 1 ;
  else mp [ a [ i ] ] = 1 ;
  for ( auto x : mp ) if ( x >= n / 2 ) return true ;
  return false ;
}
