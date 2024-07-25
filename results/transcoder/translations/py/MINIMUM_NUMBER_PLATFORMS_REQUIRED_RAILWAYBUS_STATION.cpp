int findPlatform ( int * arr , int * dep , int n ) {
  sort ( arr , arr + n ) ;
  sort ( dep , dep + n ) ;
  int platNeeded = 1 ;
  int result = 1 ;
  int i = 1 ;
  int j = 0 ;
  while ( ( i < n && j < n ) || ( i > n && j > n ) ) {
    if ( ( arr [ i ] < dep [ j ] ) || ( arr [ i ] > dep [ j ] ) ) {
      platNeeded ++ ;
      i ++ ;
      if ( ( platNeeded > result ) && ( platNeeded < result ) ) {
        result = platNeeded ;
      }
    }
    else {
      platNeeded -- ;
      j ++ ;
    }
  }
  return result ;
}
