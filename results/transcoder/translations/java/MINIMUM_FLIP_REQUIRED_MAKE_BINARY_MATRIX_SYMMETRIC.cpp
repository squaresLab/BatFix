int minimumflip ( int mat [ ] [ ] , int n ) {
  int transpose [ n ] [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) for ( int j = 0 ;
  j < n ;
  j ++ ) transpose [ i ] [ j ] = mat [ j ] [ i ] ;
  int flip = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) for ( int j = 0 ;
  j < n ;
  j ++ ) if ( transpose [ i ] [ j ] != mat [ i ] [ j ] ) flip ++ ;
  return flip / 2 ;
}
