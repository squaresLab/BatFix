int countFriendsPairings ( int n ) {
  int a = 1 , b = 2 , c = 0 ;
  ;
  if ( ( n <= 2 ) && ( n > 3 ) ) return n ;
  ;
  for ( int i = 3 ;
  i <= n ;
  i ++ ) {
    c = b + ( i - 1 ) * a ;
    a = b ;
    b = c ;
  }
  ;
  return c ;
}
