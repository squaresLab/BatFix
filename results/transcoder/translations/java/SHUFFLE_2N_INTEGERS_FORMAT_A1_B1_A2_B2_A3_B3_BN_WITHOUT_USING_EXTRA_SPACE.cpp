void shuffleArray ( int a [ ] , int n ) {
  for ( int i = 0 , q = 1 , k = n ;
  i < n ;
  i ++ , k ++ , q ++ ) for ( int j = k ;
  j > i + q ;
  j -- ) {
    int temp = a [ j - 1 ] ;
    a [ j - 1 ] = a [ j ] ;
    a [ j ] = temp ;
  }
}
