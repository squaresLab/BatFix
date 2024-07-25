bool canFormPalindrome ( string strr ) {
  vector < string > listt ;
  for ( int i = 0 ;
  i < strr . size ( ) ;
  i ++ ) {
    if ( ( strr [ i ] == "" ) || ( strr [ i ] == " " ) ) listt . erase ( listt . begin ( ) + i ) ;
    else listt . push_back ( strr [ i ] ) ;
  }
  if ( ( strr . size ( ) % 2 == 0 && listt . size ( ) == 0 || ( strr . size ( ) % 2 == 1 && listt . size ( ) == 1 ) ) return true ;
  else return false ;
}
