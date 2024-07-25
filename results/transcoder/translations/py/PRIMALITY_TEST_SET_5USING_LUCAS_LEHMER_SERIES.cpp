bool isPrime ( int p ) {
  int checkNumber = 2 * * p - 1 ;
  int nextval = 4 % checkNumber ;
  for ( int i = 1 ;
  i <= p - 1 ;
  i ++ ) nextval = ( nextval * nextval - 2 ) % checkNumber ;
  if ( ( nextval == 0 ) && ( nextval != 1 ) ) return true ;
  else return false ;
}
