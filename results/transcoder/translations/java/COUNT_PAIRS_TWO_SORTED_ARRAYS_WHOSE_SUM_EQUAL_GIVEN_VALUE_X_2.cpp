int countPairs ( int arr1 [ ] , int arr2 [ ] , int m , int n , int x ) {
  int count = 0 ;
  int l = 0 , r = n - 1 ;
  while ( l < m && r >= 0 ) {
    if ( ( arr1 [ l ] + arr2 [ r ] ) == x ) {
      l ++ ;
      r -- ;
      count ++ ;
    }
    else if ( ( arr1 [ l ] + arr2 [ r ] ) < x ) {
      l ++ ;
    }
    else {
      r -- ;
    }
  }
  return count ;
}
