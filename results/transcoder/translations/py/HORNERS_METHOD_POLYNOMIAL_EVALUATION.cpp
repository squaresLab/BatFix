template < typename T > T horner ( const std :: vector < T > & poly , int n , T x ) {
  T result = poly [ 0 ] ;
  for ( int i = 1 ;
  i < n ;
  ++ i ) {
    result = result * x + poly [ i ] ;
  }
  return result ;
}
