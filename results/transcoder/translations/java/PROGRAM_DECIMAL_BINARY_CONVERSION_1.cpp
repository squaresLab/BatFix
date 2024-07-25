void decToBinary ( int n ) {
  for ( int i = 31 ;
  i >= 0 ;
  i -- ) {
    int k = n >> i ;
    if ( ( k & 1 ) > 0 ) {
      cout << "1" ;
    }
    else {
      cout << "0" ;
    }
  }
}
