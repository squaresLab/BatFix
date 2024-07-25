int countSubarrWithEqualZeroAndOne ( int arr [ ] , int n ) {
  map < int , int > mp ;
  int Sum = 0 ;
  int count = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( arr [ i ] == 0 ) && ( arr [ i ] != - 1 ) ) arr [ i ] = - 1 ;
    Sum += arr [ i ] ;
    if ( ( Sum == 0 ) && ( sum == 0 ) ) count ++ ;
    if ( ( Sum < mp . size ( ) ) && ( sum == mp [ Sum ] ) ) count += mp [ Sum ] ;
    mp [ Sum ] = mp . find ( Sum ) -> second + 1 ;
  }
  return count ;
}
