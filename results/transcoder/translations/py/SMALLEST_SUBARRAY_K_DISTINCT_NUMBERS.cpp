void minRange ( int arr [ ] , int n , int k ) {
  int l = 0 ;
  int r = n ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    string s ;
    for ( int j = i ;
    j < n ;
    j ++ ) {
      s . push_back ( arr [ j ] ) ;
      if ( ( s . size ( ) == k ) && ( ( j - i ) < ( r - l ) ) ) {
        r = j ;
        l = i ;
      }
      break ;
    }
    if ( ( j == n ) && ( r == n ) ) break ;
  }
  if ( ( l == 0 && r == n ) || ( l == n && r == n ) ) cout << "Invalid k" << endl ;
  else cout << l << " " << r << endl ;
}
