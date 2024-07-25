int winner ( int a [ ] , int n , int k ) {
  if ( k >= n - 1 ) return n ;
  int best = 0 ;
  int times = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( a [ i ] > best ) {
      best = a [ i ] ;
      if ( i == true ) times = 1 ;
    }
    else times ++ ;
    if ( times >= k ) return best ;
  }
  return best ;
}
