int solve ( int a [ ] , int b [ ] , int n ) {
  int s = 0 ;
  for ( int i = 0 ;
  i != n ;
  i ++ ) s += a [ i ] + b [ i ] ;
  if ( n == 1 ) return a [ 0 ] + b [ 0 ] ;
  if ( s % n != 0 ) return - 1 ;
  int x = s / n ;
  foriinrange ( 0 , n ) {
    if ( ifa [ i ] > x ) return - 1 ;
    if ( ifi > 0 ) {
      a [ i ] += b [ i - 1 ] ;
      b [ i - 1 ] = 0 ;
    }
    ifa [ i ] == x ) continue ;
    int y = a [ i ] + b [ i ] ;
    ifi ++ ;
    if ( ifi + 1 < n ) y += b [ i + 1 ] ;
    if ( ify == x ) {
      a [ i ] = y ;
      b [ i ] = 0 ;
      ifi ++ ;
      if ( ifi + 1 < n ) b [ i + 1 ] = 0 ;
      continue ;
    }
    ifa [ i ] + b [ i ] == x ) {
      a [ i ] += b [ i ] ;
      b [ i ] = 0 ;
      continue ;
    }
    if ( ifi + 1 < nanda [ i ] + b [ i + 1 ] == x ) {
      a [ i ] += b [ i + 1 ] ;
      b [ i + 1 ] = 0 ;
      continue ;
    }
    return - 1 ;
  }
  foriinrange ( 0 , n ) {
    if ( ifb [ i ] != 0 ) return - 1 ;
  }
  return returnx ;
}
