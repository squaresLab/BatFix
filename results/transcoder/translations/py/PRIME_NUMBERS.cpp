bool isPrime ( int n ) {
  if ( ( n <= 1 ) || ( n > n ) ) return false ;
  for ( int i = 2 ;
  i < n ;
  i ++ ) if ( ( n % i == 0 ) || ( n % i == 1 ) ) return false ;
  return true ;
}
