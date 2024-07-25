int countSeq ( int n , int diff ) {
  if ( abs ( diff ) > n ) return 0 ;
  if ( n == 1 && diff == 0 ) return 2 ;
  if ( n == 1 && abs ( diff ) == 1 ) return 1 ;
  int res = countSeq ( n - 1 , diff + 1 ) + 2 * countSeq ( n - 1 , diff ) + countSeq ( n - 1 , diff - 1 ) ;
  return res ;
}
