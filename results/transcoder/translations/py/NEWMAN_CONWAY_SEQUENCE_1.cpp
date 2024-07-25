int sequence ( int n ) {
  array < int , n > f ;
  f . push_back ( 0 ) ;
  f . push_back ( 1 ) ;
  f . push_back ( 1 ) ;
  for ( int i = 3 ;
  i <= n ;
  i ++ ) {
    int r = f [ f [ i - 1 ] ] + f [ i - f [ i - 1 ] ] ;
    f . push_back ( r ) ;
    ;
  }
  return r ;
}
