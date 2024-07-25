bool isPrime ( int n , int i = 2 ) {
  if ( ( n <= 2 ) || ( n == 2 ) ) return true ? ( n == 2 ) : false ;
  if ( ( n % i == 0 ) || ( n % i == 1 ) ) return false ;
  if ( ( i * i > n ) && ( i * i > n ) ) return true ;
  return isPrime ( n , i + 1 ) ;
}
