int getPairsCount ( int n , int sum ) {
  unordered_map < int , int > hm ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ! hm . count ( arr [ i ] ) ) {
      hm [ arr [ i ] ] = 0 ;
    }
    hm [ arr [ i ] ] = hm [ arr [ i ] ] + 1 ;
  }
  int twice_count = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( hm [ sum - arr [ i ] ] ) {
      twice_count += hm [ sum - arr [ i ] ] ;
    }
    if ( sum - arr [ i ] == arr [ i ] ) {
      twice_count -- ;
    }
  }
  return twice_count / 2 ;
}
