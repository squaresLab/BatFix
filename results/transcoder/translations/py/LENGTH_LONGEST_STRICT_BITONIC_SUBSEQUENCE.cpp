int longLenStrictBitonicSub ( int arr [ ] , int n ) {
  map < int , int > inc , dcr ;
  map < int , int > len_inc , len_dcr ;
  int longLen = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int len = 0 ;
    if ( inc . find ( arr [ i ] - 1 ) != inc . end ( ) ) len = inc . find ( arr [ i ] - 1 ) -> second ;
    inc [ arr [ i ] ] = len_inc [ i ] = len + 1 ;
  }
  for ( int i = n - 1 ;
  i >= 0 ;
  i -- ) {
    int len = 0 ;
    if ( dcr . find ( arr [ i ] - 1 ) != dcr . end ( ) ) len = dcr . find ( arr [ i ] - 1 ) -> second ;
    dcr [ arr [ i ] ] = len_dcr [ i ] = len + 1 ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( longLen < ( len_inc [ i ] + len_dcr [ i ] - 1 ) ) longLen = len_inc [ i ] + len_dcr [ i ] - 1 ;
  }
  return longLen ;
}
