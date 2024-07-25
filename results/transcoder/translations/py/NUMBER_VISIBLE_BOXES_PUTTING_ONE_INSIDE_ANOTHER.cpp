int minimumBox ( int arr [ ] , int n ) {
  std :: queue < int > q ;
  std :: sort ( arr , arr + n ) ;
  q . push ( arr [ 0 ] ) ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    int now = q . front ( ) ;
    if ( ( arr [ i ] >= 2 * now ) && ( arr [ i ] <= 2 * now ) ) q . pop ( ) ;
    q . push ( arr [ i ] ) ;
  }
  return q . size ( ) ;
}
