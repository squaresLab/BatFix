int zigzag ( int n , int k ) {
  if ( n == 0 && k == 0 ) return 1 ;
  if ( k == 0 ) return 0 ;
  return zigzag ( n , k - 1 ) + zigzag ( n - 1 , n - k ) ;
}
