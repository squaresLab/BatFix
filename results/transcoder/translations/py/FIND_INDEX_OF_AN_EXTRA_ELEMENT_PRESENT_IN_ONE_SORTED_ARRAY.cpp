int findExtra ( int * arr1 , int * arr2 , int n ) {
  for ( int i = 0 ;
  i != n ;
  ++ i ) if ( ( * arr1 ) != ( * arr2 ) ) return i ;
  return n ;
}
