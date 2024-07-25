void minRange ( int arr [ ] , int n , int k ) {
  int l = 0 , r = n ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    set < int > s ;
    int j ;
    for ( j = i ;
    j < n ;
    j ++ ) {
      s . insert ( arr [ j ] ) ;
      if ( s . size ( ) == k ) {
        if ( ( j - i ) < ( r - l ) ) {
          r = j ;
          l = i ;
        }
        break ;
      }
    }
    if ( j == n ) break ;
  }
  if ( l == 0 && r == n ) cout << "Invalid k" << endl ;
  else cout << l << " " << r << endl ;
}
