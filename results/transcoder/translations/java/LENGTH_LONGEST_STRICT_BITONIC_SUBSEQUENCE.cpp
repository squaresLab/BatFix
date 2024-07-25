int longLenStrictBitonicSub ( int arr [ ] , int n ) {
  unordered_map < int , int > inc ;
  unordered_map < int , int > dcr ;
  int len_inc [ n ] ;
  int len_dcr [ n ] ;
  int longLen = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int len = 0 ;
    if ( inc . count ( arr [ i ] - 1 ) ) {
      len = inc [ arr [ i ] - 1 ] ;
    }
    len_inc [ i ] = len + 1 ;
    inc [ arr [ i ] ] = len_inc [ i ] ;
  }
  for ( int i = n - 1 ;
  i >= 0 ;
  i -- ) {
    int len = 0 ;
    if ( dcr . count ( arr [ i ] - 1 ) ) {
      len = dcr [ arr [ i ] - 1 ] ;
    }
    len_dcr [ i ] = len + 1 ;
    dcr [ arr [ i ] ] = len_dcr [ i ] ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) if ( longLen < ( len_inc [ i ] + len_dcr [ i ] - 1 ) ) longLen = len_inc [ i ] + len_dcr [ i ] - 1 ;
  return longLen ;
}
