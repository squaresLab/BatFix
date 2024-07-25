void recursiveReverse ( char * str , int i ) {
  int n = strlen ( str ) ;
  if ( i == n / 2 ) return ;
  swap ( str + i , str + n - i - 1 ) ;
  recursiveReverse ( str + i + 1 ) ;
}
