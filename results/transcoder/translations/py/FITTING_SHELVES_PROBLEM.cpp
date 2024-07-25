void minSpacePreferLarge ( int w , int m , int n ) {
  int num_m = 0 ;
  int num_n = 0 ;
  int rem = w ;
  int p ;
  int q ;
  int r ;
  while ( ( w >= n ) && ( p < m ) ) {
    p = w / m ;
    r = w % m ;
    if ( ( r <= rem ) && ( p >= q ) ) {
      num_m = p ;
      num_n = q ;
      rem = r ;
    }
    q ++ ;
    w -= n ;
  }
  cout << setw ( int ) << num_m << " " << num_n << " " << rem << endl ;
}
