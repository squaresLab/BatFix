bool findTriplet ( int a1 [ ] , int a2 [ ] , int a3 [ ] , int n1 , int n2 , int n3 , int sum ) {
  set < int > s ;
  for ( int i = 0 ;
  i < n1 ;
  i ++ ) s . insert ( a1 [ i ] ) ;
  vector < int > al ( s ) ;
  for ( int i = 0 ;
  i < n2 ;
  i ++ ) {
    for ( int j = 0 ;
    j < n3 ;
    j ++ ) {
      if ( al . count ( sum - a2 [ i ] - a3 [ j ] ) & al . find ( sum - a2 [ i ] - a3 [ j ] ) != al . end ( ) ) return true ;
    }
  }
  return false ;
}
