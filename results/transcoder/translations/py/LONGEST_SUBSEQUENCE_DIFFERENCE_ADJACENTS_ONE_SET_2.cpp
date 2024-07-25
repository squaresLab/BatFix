int longLenSub ( int arr [ ] , int n ) {
  map < int , int > um ;
  int longLen = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int len1 = 0 ;
    if ( ( arr [ i - 1 ] < arr [ i ] ) && len1 < um [ arr [ i ] - 1 ] ) len1 = um [ arr [ i ] - 1 ] ;
    if ( ( arr [ i ] + 1 < arr [ i ] ) && len1 < um [ arr [ i ] + 1 ] ) len1 = um [ arr [ i ] + 1 ] ;
    um [ arr [ i ] ] = len1 + 1 ;
    if ( longLen < um [ arr [ i ] ] ) longLen = um [ arr [ i ] ] ;
  }
  return longLen ;
}
