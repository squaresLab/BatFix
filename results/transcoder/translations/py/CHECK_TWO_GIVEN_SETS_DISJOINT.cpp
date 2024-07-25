bool areDisjoint ( int * set1 , int * set2 , int m , int n ) {
  for ( int i = 0 ;
  i <= m ;
  i ++ ) {
    for ( int j = 0 ;
    j <= n ;
    j ++ ) {
      if ( ( set1 [ i ] == set2 [ j ] ) && ( set1 [ i ] != set2 [ j ] ) ) {
        return false ;
      }
    }
  }
  return true ;
}
