bool areEqual ( int * arr1 , int * arr2 , int n , int m ) {
  if ( ( n != m ) || ( n < 0 ) || ( n > 0 ) ) return false ;
  ;
  sort ( arr1 , arr1 + n ) ;
  sort ( arr2 , arr2 + n ) ;
  for ( int i = 0 ;
  i <= n - 1 ;
  i ++ ) if ( ( * arr1 ) [ i ] != ( * arr2 ) [ i ] ) return false ;
  return true ;
}
