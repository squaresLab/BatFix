void printUnsorted ( int arr [ ] , int n ) {
  int e = n - 1 ;
  for ( int s = 0 ;
  s <= n - 1 ;
  s ++ ) {
    if ( arr [ s ] > arr [ s + 1 ] ) break ;
  }
  if ( s == n - 1 ) {
    cout << "The complete array is sorted" << endl ;
    exit ( EXIT_FAILURE ) ;
  }
  e = n - 1 ;
  while ( e > 0 ) {
    if ( arr [ e ] < arr [ e - 1 ] ) break ;
    e -- ;
  }
  int max = arr [ s ] ;
  int min = arr [ s ] ;
  for ( int i = s + 1 ;
  i <= e ;
  i ++ ) {
    if ( arr [ i ] > max ) max = arr [ i ] ;
    if ( arr [ i ] < min ) min = arr [ i ] ;
  }
  for ( int i = 0 ;
  i < s ;
  i ++ ) {
    if ( arr [ i ] > min ) {
      s = i ;
      break ;
    }
  }
  int i = n - 1 ;
  while ( i >= e + 1 ) {
    if ( arr [ i ] < max ) {
      e = i ;
      break ;
    }
    i -- ;
  }
  cout << "The unsorted subarray which makes the given array" << endl ;
  cout << "sorted lies between the indexes " << s << " and " << e << endl ;
}
