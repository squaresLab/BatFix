void alternateSubarray ( bool arr [ ] , int n ) {
  int count = 1 ;
  bool prev = arr [ 0 ] ;
  for ( int i = 1 ;
  i < n ;
  ++ i ) {
    if ( ( arr [ i ] ^ prev ) == false ) {
      while ( count > 0 ) cout << count -- << " " ;
    }
    ++ count ;
    prev = arr [ i ] ;
  }
  while ( count != 0 ) cout << count -- << " " ;
}
