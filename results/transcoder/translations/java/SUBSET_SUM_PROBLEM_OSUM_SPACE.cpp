bool isSubsetSum ( int arr [ ] , int n , int sum ) {
  bool subset [ 2 ] [ 2 ] ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    for ( int j = 0 ;
    j <= sum ;
    j ++ ) {
      if ( j == 0 ) {
        subset [ i % 2 ] [ j ] = true ;
      }
      else if ( i == 0 ) {
        subset [ i % 2 ] [ j ] = false ;
      }
      else if ( arr [ i - 1 ] <= j ) {
        subset [ i % 2 ] [ j ] = subset [ ( i + 1 ) % 2 ] [ j - arr [ i - 1 ] ] || subset [ ( i + 1 ) % 2 ] [ j ] ;
      }
      else {
        subset [ i % 2 ] [ j ] = subset [ ( i + 1 ) % 2 ] [ j ] ;
      }
    }
  }
  return subset [ n % 2 ] [ sum ] ;
}
