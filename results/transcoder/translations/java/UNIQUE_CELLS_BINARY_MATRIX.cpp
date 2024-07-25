int countUnique ( int mat [ ] [ 2 ] , int n , int m ) {
  int rowsum [ n ] ;
  int colsum [ m ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) for ( int j = 0 ;
  j < m ;
  j ++ ) if ( mat [ i ] [ j ] != 0 ) {
    rowsum [ i ] ++ ;
    colsum [ j ] ++ ;
  }
  int uniquecount = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) for ( int j = 0 ;
  j < m ;
  j ++ ) if ( mat [ i ] [ j ] != 0 && rowsum [ i ] == 1 && colsum [ j ] == 1 ) uniquecount ++ ;
  return uniquecount ;
}
