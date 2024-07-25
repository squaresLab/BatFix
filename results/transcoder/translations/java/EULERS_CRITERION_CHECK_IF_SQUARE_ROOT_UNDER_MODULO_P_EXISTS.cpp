bool square_root_exists ( int n , int p ) {
  n = n % p ;
  for ( int x = 2 ;
  x < p ;
  x ++ ) if ( ( x * x ) % p == n ) return true ;
  return false ;
}
