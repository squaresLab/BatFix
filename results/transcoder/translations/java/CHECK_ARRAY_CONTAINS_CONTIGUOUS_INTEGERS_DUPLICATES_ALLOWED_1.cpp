Boolean areElementsContiguous ( int arr [ ] , int n ) {
  HashSet < int > us ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    us . add ( arr [ i ] ) ;
  }
  int count = 1 ;
  int curr_ele = arr [ 0 ] - 1 ;
  while ( us . contains ( curr_ele ) == true ) {
    count ++ ;
    curr_ele -- ;
  }
  curr_ele = arr [ 0 ] + 1 ;
  while ( us . contains ( curr_ele ) == true ) {
    count ++ ;
    curr_ele ++ ;
  }
  return ( count == ( us . size ( ) ) ) ;
}
