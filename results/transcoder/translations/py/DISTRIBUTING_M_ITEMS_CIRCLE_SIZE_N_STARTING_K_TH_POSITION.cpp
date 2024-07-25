int lastPosition ( int n , int m , int k ) {
  if ( ( m <= n - k + 1 ) && ( m > k ) ) return m + k - 1 ;
  m = m - ( n - k + 1 ) ;
  if ( ( m % n == 0 ) && ( m > k ) ) return n ;
  else return m % n ;
}
