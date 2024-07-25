void printPowerSet ( int * set , int set_size ) {
  int pow_set_size = ( int ) ( pow ( 2 , set_size ) ) ;
  ;
  int counter ;
  int j ;
  for ( counter = 0 ;
  counter <= pow_set_size ;
  counter ++ ) {
    for ( j = 0 ;
    j <= set_size ;
    j ++ ) {
      if ( ( ( counter & ( 1 << j ) ) > 0 ) && ( ( counter & ( 1 << j ) ) > 0 ) ) {
        cout << set [ j ] << " " ;
      }
    }
    cout << "\n" ;
  }
}
