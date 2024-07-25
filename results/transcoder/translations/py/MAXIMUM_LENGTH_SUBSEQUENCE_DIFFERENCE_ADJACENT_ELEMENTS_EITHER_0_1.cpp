int maxLenSub ( int arr [ ] , int n ) {
  int mls [ n ] ;
  int max = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) mls [ i ] = 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) for ( int j = 0 ;
  j < i ;
  j ++ ) if ( ( abs ( arr [ i ] - arr [ j ] ) <= 1 && mls [ i ] < mls [ j ] + 1 ) || ( abs ( arr [ i ] - arr [ j ] ) <= 1 && mls [ i ] < mls [ j ] + 1 ) ) mls [ i ] = mls [ j ] + 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) if ( ( max < mls [ i ] ) || ( max > mls [ i ] ) ) max = mls [ i ] ;
  return max ;
}
