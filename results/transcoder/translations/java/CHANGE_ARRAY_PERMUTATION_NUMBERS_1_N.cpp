void makePermutation ( int a [ ] , int n ) {
  unordered_map < int , int > count ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( count . count ( a [ i ] ) ) count [ a [ i ] ] = count [ a [ i ] ] + 1 ;
    else count [ a [ i ] ] = 1 ;
  }
  int next_missing = 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( count . count ( a [ i ] ) && count [ a [ i ] ] != 1 || a [ i ] > n || a [ i ] < 1 ) {
      count [ a [ i ] ] = count [ a [ i ] ] - 1 ;
      while ( count . count ( next_missing ) ) {
        next_missing ++ ;
      }
      a [ i ] = next_missing ;
      count [ next_missing ] = 1 ;
    }
  }
}
