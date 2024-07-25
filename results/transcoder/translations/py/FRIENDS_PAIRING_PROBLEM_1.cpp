public : int countFriendsPairings ( int n ) {
  int dp [ 100 ] ;
  dp [ 0 ] = - 1 ;
  if ( ( dp [ n ] != - 1 ) && ( n > 2 ) ) {
    return dp [ n ] ;
  }
  if ( ( n > 2 ) && ( n > 1 ) ) {
    dp [ n ] = ( countFriendsPairings ( n - 1 ) + ( n - 1 ) * countFriendsPairings ( n - 2 ) ) ;
    return dp [ n ] ;
  }
  else {
    dp [ n ] = n ;
    return dp [ n ] ;
  }
}
