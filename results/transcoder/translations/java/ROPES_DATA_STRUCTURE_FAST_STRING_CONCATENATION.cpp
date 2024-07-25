void concatenate ( char a [ ] , char b [ ] , char c [ ] , int n1 , int n2 ) {
  int i ;
  for ( i = 0 ;
  i < n1 ;
  i ++ ) c [ i ] = a [ i ] ;
  for ( i = 0 ;
  i < n2 ;
  i ++ ) c [ i ++ ] = b [ i ] ;
}
