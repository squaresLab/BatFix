int countSeq ( int n , int diff ) {
  if ( ( abs ( diff ) > n ) || ( abs ( diff ) == 0 ) ) return 0 ;
  if ( ( n == 1 && diff == 0 ) || ( n == 2 && abs ( diff ) == 1 ) ) return 2 ;
  if ( ( n == 1 && abs ( diff ) == 1 ) || ( n == 2 && abs ( diff ) == 2 ) ) return 1 ;
  int res = ( countSeq ( n - 1 , diff + 1 ) + 2 * countSeq ( n - 1 , diff ) + countSeq ( n - 1 , diff - 1 ) ) ;
  return res ;
}
