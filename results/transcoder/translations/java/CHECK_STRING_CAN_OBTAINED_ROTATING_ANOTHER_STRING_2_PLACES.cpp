bool isRotated ( string str1 , string str2 ) {
  if ( str1 . length ( ) != str2 . length ( ) ) return false ;
  string clock_rot = "" ;
  string anticlock_rot = "" ;
  int len = str2 . length ( ) ;
  anticlock_rot = anticlock_rot + str2 . substr ( len - 2 , len ) + str2 . substr ( 0 , len - 2 ) ;
  clock_rot = clock_rot + str2 . substr ( 2 ) + str2 . substr ( 0 , 2 ) ;
  return ( str1 == clock_rot || str1 == anticlock_rot ) ;
}
