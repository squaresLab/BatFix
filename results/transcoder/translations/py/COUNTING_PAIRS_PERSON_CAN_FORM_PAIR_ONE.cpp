int numberOfWays ( int x ) {
  if ( x == 0 || x == 1 ) return 1 ;
  else return ( numberOfWays ( x - 1 ) + ( x - 1 ) * numberOfWays ( x - 2 ) ) ;
}
