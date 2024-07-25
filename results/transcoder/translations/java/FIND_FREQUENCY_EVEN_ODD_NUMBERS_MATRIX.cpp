void freq ( int ar [ ] [ m ] , int m , int n ) {
  int even = 0 , odd = 0 ;
  for ( int i = 0 ;
  i < m ;
  ++ i ) {
    for ( int j = 0 ;
    j < n ;
    ++ j ) {
      if ( ( ar [ i ] [ j ] % 2 ) == 0 ) {
        ++ even ;
      }
      else {
        ++ odd ;
      }
    }
  }
  cout << " Frequency of odd number =" << odd << " \n" ;
  cout << " Frequency of even number = " << even << " \n" ;
}
