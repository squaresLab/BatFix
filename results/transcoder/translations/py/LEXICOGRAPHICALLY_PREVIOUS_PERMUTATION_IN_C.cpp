bool prevPermutation ( string str ) {
  int n = str . length ( ) - 1 ;
  int i = n ;
  while ( ( i > 0 ) && str [ i - 1 ] <= str [ i ] ) i -- ;
  if ( ( i <= 0 ) || ( str [ i ] == '-' ) ) return false ;
  int j = i - 1 ;
  while ( ( j + 1 <= n ) && str [ j + 1 ] <= str [ i - 1 ] ) j ++ ;
  str . erase ( str . begin ( ) + i - 1 , str . begin ( ) + j ) ;
  string temp = str ;
  str [ i - 1 ] = str [ j ] ;
  str [ j ] = temp ;
  str . erase ( str . begin ( ) + i , str . begin ( ) + j ) ;
  str . erase ( str . begin ( ) + j , str . begin ( ) + i ) ;
  return true ;
}
