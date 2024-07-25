int getOddOccurrence ( int arr [ ] , int n ) {
  unordered_map < int , int > hmap ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( hmap . count ( arr [ i ] ) ) {
      int val = hmap [ arr [ i ] ] ;
      hmap [ arr [ i ] ] = val + 1 ;
    }
    else {
      hmap [ arr [ i ] ] = 1 ;
    }
  }
  for ( auto a : hmap ) {
    if ( hmap [ a ] % 2 != 0 ) return a ;
  }
  return - 1 ;
}
