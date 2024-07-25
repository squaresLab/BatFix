long count_of_ways ( long n ) {
  long count = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) for ( int j = 0 ;
  j <= n ;
  j ++ ) for ( int k = 0 ;
  k <= n ;
  k ++ ) if ( i + j + k == n ) count ++ ;
  return count ;
}
