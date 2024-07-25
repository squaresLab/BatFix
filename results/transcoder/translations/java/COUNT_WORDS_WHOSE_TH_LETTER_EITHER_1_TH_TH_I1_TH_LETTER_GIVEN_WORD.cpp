int countWords ( string str , int len ) {
  int count = 1 ;
  if ( len == 1 ) return count ;
  if ( str [ 0 ] == str [ 1 ] ) {
    count *= 1 ;
  }
  else {
    count *= 2 ;
  }
  for ( int j = 1 ;
  j < len - 1 ;
  j ++ ) {
    if ( str [ j ] == str [ j - 1 ] && str [ j ] == str [ j + 1 ] ) {
      count *= 1 ;
    }
    else if ( str [ j ] == str [ j - 1 ] || str [ j ] == str [ j + 1 ] || str [ j - 1 ] == str [ j + 1 ] ) {
      count *= 2 ;
    }
    else {
      count *= 3 ;
    }
  }
  if ( str [ len - 1 ] == str [ len - 2 ] ) {
    count *= 1 ;
  }
  else {
    count *= 2 ;
  }
  return count ;
}
