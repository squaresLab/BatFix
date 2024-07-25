int countFriendsPairings ( int n ) {
  if ( dp [ n ] != - 1 ) return dp [ n ] ;
  if ( n > 2 ) return dp [ n ] = countFriendsPairings ( n - 1 ) + ( n - 1 ) * countFriendsPairings ( n - 2 ) ;
  else return dp [ n ] = n ;
}
