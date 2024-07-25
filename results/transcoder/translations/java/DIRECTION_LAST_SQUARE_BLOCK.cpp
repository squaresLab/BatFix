void direction ( int R , int C ) {
  if ( R != C && R % 2 == 0 && C % 2 != 0 && R < C ) {
    printf ( "Left\n" ) ;
    return ;
  }
  if ( R != C && R % 2 != 0 && C % 2 == 0 && R > C ) {
    printf ( "Up\n" ) ;
    return ;
  }
  if ( R == C && R % 2 != 0 && C % 2 != 0 ) {
    printf ( "Right\n" ) ;
    return ;
  }
  if ( R == C && R % 2 == 0 && C % 2 == 0 ) {
    printf ( "Left\n" ) ;
    return ;
  }
  if ( R != C && R % 2 != 0 && C % 2 != 0 && R < C ) {
    printf ( "Right\n" ) ;
    return ;
  }
  if ( R != C && R % 2 != 0 && C % 2 != 0 && R > C ) {
    printf ( "Down\n" ) ;
    return ;
  }
  if ( R != C && R % 2 == 0 && C % 2 == 0 && R < C ) {
    printf ( "Left\n" ) ;
    return ;
  }
  if ( R != C && R % 2 == 0 && C % 2 == 0 && R > C ) {
    printf ( "Up\n" ) ;
    return ;
  }
  if ( R != C && R % 2 == 0 && C % 2 != 0 && R > C ) {
    printf ( "Down\n" ) ;
    return ;
  }
  if ( R != C && R % 2 != 0 && C % 2 == 0 && R < C ) {
    printf ( "Right\n" ) ;
    return ;
  }
}
