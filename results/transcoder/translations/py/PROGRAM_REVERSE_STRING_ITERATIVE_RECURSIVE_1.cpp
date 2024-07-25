void reverseStr ( string str ) {
  int n = str . size ( ) ;
  int i = 0 , j = n - 1 ;
  while ( i < j ) {
    str [ i ] = str [ j ] ;
    i ++ ;
    j -- ;
  }
}
