void shuffleArray ( int a [ ] , int n ) {
  int i = 0 , q = 1 , k = n ;
  while ( ( i < n ) && ( ( j > i + q ) ) ) {
    a [ j - 1 ] = a [ j ] ;
    a [ j ] = a [ j - 1 ] ;
    j -- ;
  }
  i ++ ;
  k ++ ;
  q ++ ;
}
