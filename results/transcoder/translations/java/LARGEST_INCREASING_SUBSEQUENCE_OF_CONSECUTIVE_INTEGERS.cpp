void findLIS ( int A [ ] , int n ) {
  map < int , int > hash ;
  int LIS_size = 1 ;
  int LIS_index = 0 ;
  hash [ A [ 0 ] ] = 1 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    hash [ A [ i ] ] = hash [ A [ i ] - 1 ] == 0 ? 1 : hash [ A [ i ] - 1 ] + 1 ;
    if ( LIS_size < hash [ A [ i ] ] ) {
      LIS_size = hash [ A [ i ] ] ;
      LIS_index = A [ i ] ;
    }
  }
  cout << "LIS_size = " << LIS_size << endl ;
  cout << "LIS : " ;
  int start = LIS_index - LIS_size + 1 ;
  while ( start <= LIS_index ) {
    cout << start << " " ;
    start ++ ;
  }
}
