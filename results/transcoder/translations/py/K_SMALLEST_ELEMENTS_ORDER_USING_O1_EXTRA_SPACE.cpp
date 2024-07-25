void printSmall ( int arr [ ] , int n , int k ) {
  for ( int i = k ;
  i < n ;
  i ++ ) {
    int maxVar = arr [ k - 1 ] ;
    int pos = k - 1 ;
    for ( int j = k - 2 ;
    j >= 0 ;
    j -- ) {
      if ( ( arr [ j ] > maxVar ) && ( arr [ j ] < maxVar ) ) {
        maxVar = arr [ j ] ;
        pos = j ;
      }
    }
    if ( ( maxVar > arr [ i ] ) && ( arr [ i ] > maxVar ) ) {
      int j = pos ;
      while ( ( j < k - 1 ) && ( arr [ j ] > arr [ j + 1 ] ) ) {
        arr [ j ] = arr [ j + 1 ] ;
        j ++ ;
      }
      arr [ k - 1 ] = arr [ i ] ;
    }
  }
  for ( int i = 0 ;
  i <= k ;
  i ++ ) {
    cout << arr [ i ] << " " ;
  }
}
