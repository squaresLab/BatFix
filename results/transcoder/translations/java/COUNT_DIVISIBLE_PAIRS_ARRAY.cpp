int countDivisibles ( int arr [ ] , int n ) {
  int res = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) for ( int j = i + 1 ;
  j < n ;
  j ++ ) if ( arr [ i ] % arr [ j ] == 0 || arr [ j ] % arr [ i ] == 0 ) res ++ ;
  return res ;
}
