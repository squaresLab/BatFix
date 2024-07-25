void print_squares ( int n ) {
  int square = 0 , prev_x = 0 ;
  for ( int x = 0 ;
  x < n ;
  x ++ ) {
    square = ( square + x + prev_x ) ;
    cout << square << " " ;
    prev_x = x ;
  }
}
