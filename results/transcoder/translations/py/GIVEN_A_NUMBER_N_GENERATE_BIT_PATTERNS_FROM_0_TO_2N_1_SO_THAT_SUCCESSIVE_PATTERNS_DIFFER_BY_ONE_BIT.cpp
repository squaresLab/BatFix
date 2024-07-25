void generateGrayarr ( int n ) {
  if ( ( n <= 0 ) || ( n == 1 ) ) return ;
  std :: vector < char > arr ;
  arr . push_back ( "0" ) ;
  arr . push_back ( "1" ) ;
  int i = 2 ;
  int j ;
  while ( ( true ) ) {
    if ( i >= 1 << n ) break ;
    for ( j = i - 1 ;
    j >= 0 ;
    j -- ) arr . push_back ( arr [ j ] ) ;
    for ( j = 0 ;
    j < i ;
    j ++ ) arr [ j ] = '0' + arr [ j ] ;
    for ( j = i ;
    j < 2 * i ;
    j ++ ) arr [ j ] = '1' + arr [ j ] ;
    i = i << 1 ;
  }
  for ( i = 0 ;
  i < arr . size ( ) ;
  i ++ ) std :: cout << arr [ i ] << std :: endl ;
}
