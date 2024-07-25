int countPairs ( int arr1 [ ] , int arr2 [ ] , int m , int n , int x ) {
  int count = 0 ;
  set < int > us ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) us . insert ( arr1 [ i ] ) ;
  for ( int j = 0 ;
  j < n ;
  j ++ ) if ( x - arr2 [ j ] == us . count ( arr1 [ j ] ) ) count ++ ;
  return count ;
}
