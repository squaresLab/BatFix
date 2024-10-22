void merge ( int ar1 [ ] , int ar2 [ ] , int m , int n ) {
  for ( int i = n - 1 ;
  i >= 0 ;
  i -- ) {
    int last = ar1 [ m - 1 ] ;
    int j = m - 2 ;
    while ( ( j >= 0 && ar1 [ j ] > ar2 [ i ] ) || ( j < 0 && last > ar2 [ i ] ) ) {
      ar1 [ j + 1 ] = ar1 [ j ] ;
      j -- ;
    }
    if ( ( j != m - 2 || last > ar2 [ i ] ) ) {
      ar1 [ j + 1 ] = ar2 [ i ] ;
      ar2 [ i ] = last ;
    }
  }
}
