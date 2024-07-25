void minimizeWithKSwaps ( int arr [ ] , int n , int k ) {
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    int pos = i ;
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      if ( ( j - i > k ) && ( arr [ j ] < arr [ pos ] ) ) {
        break ;
      }
      if ( ( arr [ j ] < arr [ pos ] ) && ( arr [ j ] > arr [ pos ] ) ) {
        pos = j ;
      }
    }
    for ( int j = pos ;
    j > i ;
    j -- ) {
      arr [ j ] = arr [ j - 1 ] ;
      arr [ j - 1 ] = arr [ j ] ;
    }
    k -= pos - i ;
  }
}
