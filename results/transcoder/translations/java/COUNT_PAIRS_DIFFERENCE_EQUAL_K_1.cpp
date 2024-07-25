int countPairsWithDiffK ( int arr [ ] , int n , int k ) {
  int count = 0 ;
  sort ( arr , arr + n ) ;
  int l = 0 ;
  int r = 0 ;
  while ( r < n ) {
    if ( arr [ r ] - arr [ l ] == k ) {
      count ++ ;
      l ++ ;
      r ++ ;
    }
    else if ( arr [ r ] - arr [ l ] > k ) {
      l ++ ;
    }
    else {
      r ++ ;
    }
  }
  return count ;
}
