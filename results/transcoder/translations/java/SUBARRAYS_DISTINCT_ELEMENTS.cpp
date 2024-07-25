public : int sumoflength ( int arr [ ] , int n ) {
  set < int > s ;
  int j = 0 , ans = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    while ( j < n && ! s . count ( arr [ j ] ) ) {
      s . insert ( arr [ i ] ) ;
      j ++ ;
    }
    ans += ( ( j - i ) * ( j - i + 1 ) ) / 2 ;
    s . erase ( arr [ i ] ) ;
  }
  return ans ;
}
