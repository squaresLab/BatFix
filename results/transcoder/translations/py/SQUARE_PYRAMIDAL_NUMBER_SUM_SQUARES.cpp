int findS ( int s ) {
  int _sum = 0 ;
  int n = 1 ;
  while ( ( _sum < s ) && ( _sum < s ) ) {
    _sum += n * n ;
    n ++ ;
  }
  n -- ;
  if ( _sum == s ) return n ;
  return - 1 ;
}
