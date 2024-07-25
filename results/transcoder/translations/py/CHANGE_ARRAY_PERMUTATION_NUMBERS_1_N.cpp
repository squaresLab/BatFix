void makePermutation ( int a [ ] , int n ) {
  map < int , int > count ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( count . count ( a [ i ] ) ) count [ a [ i ] ] ++ ;
    else count [ a [ i ] ] = 1 ;
    ;
  }
  int nextMissing = 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( count [ a [ i ] ] != 1 || a [ i ] > n || a [ i ] < 1 ) {
      count [ a [ i ] ] -- ;
      while ( count . count ( nextMissing ) ) nextMissing ++ ;
      a [ i ] = nextMissing ;
      count [ nextMissing ] = 1 ;
    }
  }
}
