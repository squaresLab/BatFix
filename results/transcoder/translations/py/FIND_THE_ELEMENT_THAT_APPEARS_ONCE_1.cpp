int getSingle ( int arr [ ] , int n ) {
  int result = 0 ;
  for ( int i = 0 ;
  i <= INT_SIZE ;
  i ++ ) {
    int sm = 0 ;
    int x = ( 1 << i ) ;
    for ( int j = 0 ;
    j != n ;
    j ++ ) {
      if ( ( arr [ j ] & x ) != 0 ) sm = sm + 1 ;
    }
    if ( ( sm % 3 ) != 0 ) result = result | x ;
  }
  return result ;
}
