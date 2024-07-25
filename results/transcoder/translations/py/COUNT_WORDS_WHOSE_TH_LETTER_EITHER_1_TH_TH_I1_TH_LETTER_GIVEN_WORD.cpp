int countWords ( string str , int l ) {
  int count = 1 ;
  ;
  if ( ( l == 1 ) || ( l == 2 ) ) return count ;
  if ( ( str [ 0 ] == str [ 1 ] ) || ( str [ 0 ] == str [ 2 ] ) ) count *= 1 ;
  else count *= 2 ;
  for ( int j = 1 ;
  j <= l - 1 ;
  j ++ ) {
    if ( ( str [ j ] == str [ j - 1 ] && str [ j ] == str [ j + 1 ] ) || ( str [ j ] == str [ j - 1 ] || str [ j ] == str [ j + 1 ] || str [ j - 1 ] == str [ j + 1 ] ) ) count *= 1 ;
    else if ( ( str [ j ] == str [ j - 1 ] || str [ j ] == str [ j + 1 ] || str [ j - 1 ] == str [ j + 1 ] ) || ( str [ j ] == str [ j - 1 ] || str [ j ] == str [ j + 1 ] || str [ j - 1 ] == str [ j + 1 ] ) ) count *= 2 ;
    else count *= 3 ;
  }
  if ( ( str [ l - 1 ] == str [ l - 2 ] ) || ( str [ l - 2 ] == str [ l - 1 ] ) ) count *= 1 ;
  else count *= 2 ;
  return count ;
}
