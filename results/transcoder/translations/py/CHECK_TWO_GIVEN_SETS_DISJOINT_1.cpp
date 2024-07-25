bool areDisjoint ( vector < int > & set1 , vector < int > & set2 , int m , int n ) {
  sort ( set1 . begin ( ) , set1 . end ( ) ) ;
  sort ( set2 . begin ( ) , set2 . end ( ) ) ;
  int i = 0 ;
  ;
  int j = 0 ;
  while ( ( i < m && j < n ) || ( i > m && j > n ) ) {
    if ( ( set1 [ i ] < set2 [ j ] ) || ( set2 [ j ] < set1 [ i ] ) ) {
      i ++ ;
    }
    else if ( ( set2 [ j ] < set1 [ i ] ) || ( set1 [ i ] > set2 [ j ] ) ) {
      j ++ ;
    }
    else {
      return false ;
    }
  }
  return true ;
}
