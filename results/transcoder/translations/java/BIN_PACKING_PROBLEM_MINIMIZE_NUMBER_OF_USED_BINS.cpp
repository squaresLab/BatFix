int nextFit ( int weight [ ] , int n , int c ) {
  int res = 0 , bin_rem = c ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( weight [ i ] > bin_rem ) {
      res ++ ;
      bin_rem = c - weight [ i ] ;
    }
    else {
      bin_rem -= weight [ i ] ;
    }
  }
  return res ;
}
