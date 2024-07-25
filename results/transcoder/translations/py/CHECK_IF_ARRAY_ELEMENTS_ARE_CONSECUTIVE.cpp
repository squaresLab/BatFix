bool areConsecutive ( int arr [ ] , int n ) {
  if ( ( n < 1 ) || ( n > n ) ) return false ;
  int Min = min ( arr ) ;
  int Max = max ( arr ) ;
  if ( ( Max - Min + 1 == n ) && ( ( n - Min ) == n ) ) {
    bool visited [ n ] ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
      if ( ( visited [ arr [ i ] - Min ] != false ) && ( visited [ arr [ i ] - Min ] == true ) ) return false ;
      visited [ arr [ i ] - Min ] = true ;
    }
    return true ;
  }
  return false ;
}
