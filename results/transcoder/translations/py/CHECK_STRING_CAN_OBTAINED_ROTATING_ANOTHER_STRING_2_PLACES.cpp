bool isRotated ( string str1 , string str2 ) {
  if ( ( int ) str1 . length ( ) != str2 . length ( ) ) return false ;
  string clock_rot ;
  string anticlock_rot ;
  int l = str2 . length ( ) ;
  anticlock_rot = ( anticlock_rot + str2 . substr ( l - 2 ) + str2 . substr ( 0 , l - 2 ) ) ;
  clock_rot = clock_rot + str2 . substr ( 2 ) + str2 . substr ( 0 , 2 ) ;
  return ( str1 == clock_rot || str1 == anticlock_rot ) ;
}
