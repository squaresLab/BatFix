void concatenate ( int a [ ] , int b [ ] , int c [ ] , int n1 , int n2 ) {
  int i = - 1 ;
  for ( i = 0 ;
  i < n1 ;
  i ++ ) c [ i ] = a [ i ] ;
  for ( int j = 0 ;
  j < n2 ;
  j ++ ) {
    c [ i ] = b [ j ] ;
    i ++ ;
  }
}
