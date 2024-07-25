int countSubarrWithEqualZeroAndOne ( int arr [ ] , int n ) {
  map < int , int > um ;
  int currSum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    currSum += ( - 1 == ( arr [ i ] == 0 ) ) ? arr [ i ] : arr [ i ] ;
    if ( um . count ( currSum ) ) um [ currSum ] ++ ;
    else um [ currSum ] = 1 ;
  }
  int count = 0 ;
  for ( auto itr : um ) {
    if ( um [ itr ] > 1 ) count += ( ( um [ itr ] * ( int ) ( um [ itr ] - 1 ) ) / 2 ) ;
  }
  if ( um . count ( 0 ) ) count += um [ 0 ] ;
  return ( int ) count ;
}
