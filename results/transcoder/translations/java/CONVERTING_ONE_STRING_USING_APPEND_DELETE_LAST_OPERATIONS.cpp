bool isConvertible ( string str1 , string str2 , int k ) {
  if ( ( str1 . size ( ) + str2 . size ( ) ) < k ) return true ;
  int commonLength = 0 ;
  for ( int i = 0 ;
  i < min ( str1 . size ( ) , str2 . size ( ) ) ;
  i ++ ) {
    if ( str1 == str2 ) {
      commonLength ++ ;
    }
    else {
      break ;
    }
  }
  if ( ( k - str1 . size ( ) - str2 . size ( ) + 2 * commonLength ) % 2 == 0 ) return true ;
  return false ;
}
