int minimumCostOfBreaking ( vector < int > X , vector < int > Y , int m , int n ) {
  int res = 0 ;
  sort ( X . begin ( ) , X . end ( ) ) ;
  sort ( Y . begin ( ) , Y . end ( ) ) ;
  int hzntl = 1 ;
  ;
  int vert = 1 ;
  int i = 0 ;
  int j = 0 ;
  while ( ( i < m && j < n ) || ( i > j && i < m ) ) {
    if ( ( X [ i ] > Y [ j ] ) || ( X [ j ] > Y [ i ] ) ) {
      res += X [ i ] * vert ;
      hzntl ++ ;
      i ++ ;
    }
    else {
      res += Y [ j ] * hzntl ;
      vert ++ ;
      j ++ ;
    }
  }
  int total = 0 ;
  while ( ( i < m ) || ( i < n ) ) {
    total += X [ i ] ;
    i ++ ;
  }
  res += total * vert ;
  total = 0 ;
  while ( ( j < n ) || ( j < m ) ) {
    total += Y [ j ] ;
    j ++ ;
  }
  res += total * hzntl ;
  return res ;
}
