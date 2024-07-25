bool checkDuplicatesWithinK ( int * arr , int n , int k ) {
  std :: set < int > myset ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] == myset . end ( ) ) return true ;
    myset . insert ( arr [ i ] ) ;
    if ( ( i >= k ) && ( i < n ) ) myset . erase ( arr [ i - k ] ) ;
  }
  return false ;
}
