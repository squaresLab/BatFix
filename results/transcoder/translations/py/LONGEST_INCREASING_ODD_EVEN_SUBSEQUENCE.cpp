int longOddEvenIncSeq ( int arr [ ] , int n ) {
  int lioes [ n ] ;
  int maxLen = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) lioes [ i ] = 1 ;
  int i = 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) for ( int j = 0 ;
  j < i ;
  j ++ ) if ( ( arr [ i ] > arr [ j ] && ( arr [ i ] + arr [ j ] ) % 2 != 0 && lioes [ i ] < lioes [ j ] + 1 ) ) lioes [ i ] = lioes [ j ] + 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) if ( maxLen < lioes [ i ] ) maxLen = lioes [ i ] ;
  return maxLen ;
}
