void recursiveReverse ( string str , int i ) {
  int n = str . size ( ) ;
  if ( i == n / 2 ) return ;
  str [ i ] = str [ n - i - 1 ] ;
  str [ n - i - 1 ] = str [ i ] ;
  recursiveReverse ( str , i + 1 ) ;
}
