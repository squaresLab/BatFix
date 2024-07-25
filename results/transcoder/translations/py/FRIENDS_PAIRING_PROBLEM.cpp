public : int countFriendsPairings ( int n ) {
  vector < int > dp ( n + 1 , 0 ) ;
  for ( int i = 0 ;
  i < n + 1 ;
  i ++ ) {
    if ( ( i <= 2 ) && ( i > 0 ) ) dp [ i ] = i ;
    else dp [ i ] = dp [ i - 1 ] + ( i - 1 ) * dp [ i - 2 ] ;
  }
  return dp [ n ] ;
}
