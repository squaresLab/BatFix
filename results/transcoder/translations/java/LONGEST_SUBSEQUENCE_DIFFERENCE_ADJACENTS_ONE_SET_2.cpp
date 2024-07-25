int longLenSub ( int * arr , int n ) {
  unordered_map < int , int > um ;
  int longLen = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int len = 0 ;
    if ( um . count ( arr [ i ] - 1 ) && len < um [ arr [ i ] - 1 ] ) {
      len = um [ arr [ i ] - 1 ] ;
    }
    if ( um . count ( arr [ i ] + 1 ) && len < um [ arr [ i ] + 1 ] ) {
      len = um [ arr [ i ] + 1 ] ;
    }
    um [ arr [ i ] ] = len + 1 ;
    if ( longLen < um [ arr [ i ] ] ) {
      longLen = um [ arr [ i ] ] ;
    }
  }
  return longLen ;
}
